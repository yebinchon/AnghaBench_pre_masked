
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_lcd {TYPE_1__* us; struct plat_lcd_data* pdata; } ;
struct plat_lcd_data {int (* match_fb ) (struct plat_lcd_data*,struct fb_info*) ;} ;
struct lcd_device {int dummy; } ;
struct fb_info {scalar_t__ device; } ;
struct TYPE_2__ {scalar_t__ parent; } ;


 int FUNC_0 (struct plat_lcd_data*,struct fb_info*) ;
 struct platform_lcd* FUNC_1 (struct lcd_device*) ;

__attribute__((used)) static int FUNC_2(struct lcd_device *VAR_0, struct fb_info *VAR_1)
{
 struct platform_lcd *VAR_2 = FUNC_1(VAR_0);
 struct plat_lcd_data *VAR_3 = VAR_2->pdata;

 if (VAR_3->match_fb)
  return VAR_3->match_fb(VAR_3, VAR_1);

 return VAR_2->us->parent == VAR_1->device;
}
