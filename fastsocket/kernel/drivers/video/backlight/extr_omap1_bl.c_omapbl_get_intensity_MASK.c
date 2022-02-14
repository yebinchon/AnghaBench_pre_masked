
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_backlight {int current_intensity; } ;
struct backlight_device {int dev; } ;


 struct omap_backlight* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_0)
{
 struct omap_backlight *VAR_1 = FUNC_0(&VAR_0->dev);
 return VAR_1->current_intensity;
}
