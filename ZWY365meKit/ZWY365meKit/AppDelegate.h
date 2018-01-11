//
//  AppDelegate.h
//  ZWY365meKit
//
//  Created by 张文勇 on 2018/1/11.
//  Copyright © 2018年 张文勇. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

