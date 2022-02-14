
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ brightness; scalar_t__ power; } ;
struct backlight_device {TYPE_1__ props; } ;


 int FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct backlight_device *VAR_1 = FUNC_2(VAR_0);

 VAR_1->props.power = 0;
 VAR_1->props.brightness = 0;
 FUNC_1(VAR_1);

 FUNC_0(VAR_1);

 FUNC_3("Generic Backlight Driver Unloaded\n");
 return 0;
}
