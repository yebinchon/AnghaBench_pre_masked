
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_backlight_data {int dummy; } ;
struct platform_device {int dummy; } ;
struct backlight_device {int dummy; } ;


 int FUNC_0 (struct backlight_device*) ;
 struct wm831x_backlight_data* FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct wm831x_backlight_data*) ;
 struct backlight_device* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct backlight_device *VAR_1 = FUNC_3(VAR_0);
 struct wm831x_backlight_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 FUNC_2(VAR_2);
 return 0;
}
