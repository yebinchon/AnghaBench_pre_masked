
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosa_lcd_data {int is_vga; int lcd_power; } ;
struct lcd_device {int dummy; } ;
struct fb_videomode {int xres; int yres; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct tosa_lcd_data* FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (struct tosa_lcd_data*) ;

__attribute__((used)) static int FUNC_3(struct lcd_device *VAR_0, struct fb_videomode *VAR_1)
{
 struct tosa_lcd_data *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1->xres == 320 || VAR_1->yres == 320)
  VAR_2->is_vga = 0;
 else
  VAR_2->is_vga = 1;

 if (FUNC_0(VAR_2->lcd_power))
  FUNC_2(VAR_2);

 return 0;
}
