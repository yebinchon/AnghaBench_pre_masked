
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int max_brightness; int power; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (int ,struct device*,int *,int *) ;
 int FUNC_3 (struct backlight_device*) ;
 struct backlight_device* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4)
{
 struct backlight_device *VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_4,
           ((void*)0), &VAR_3);
 if (FUNC_0(VAR_5)) {
  FUNC_4("Could not register eeepc backlight device\n");
  VAR_2 = ((void*)0);
  return FUNC_1(VAR_5);
 }
 VAR_2 = VAR_5;
 VAR_5->props.max_brightness = 15;
 VAR_5->props.brightness = FUNC_5(((void*)0));
 VAR_5->props.power = VAR_1;
 FUNC_3(VAR_5);
 return 0;
}
