
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_backlight {int dummy; } ;
struct backlight_device {int dev; } ;


 int FUNC_0 (struct backlight_device*) ;
 struct omap_backlight* FUNC_1 (int *) ;
 int FUNC_2 (struct omap_backlight*) ;
 struct backlight_device* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct backlight_device *VAR_1 = FUNC_3(VAR_0);
 struct omap_backlight *VAR_2 = FUNC_1(&VAR_1->dev);

 FUNC_0(VAR_1);
 FUNC_2(VAR_2);

 return 0;
}
