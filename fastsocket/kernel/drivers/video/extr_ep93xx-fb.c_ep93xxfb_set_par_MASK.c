
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int line_length; int smem_start; } ;
struct TYPE_3__ {int xres_virtual; int bits_per_pixel; int yres; int xres; int pixclock; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct ep93xx_fbi* par; } ;
struct ep93xx_fbi {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct ep93xx_fbi*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_4)
{
 struct ep93xx_fbi *VAR_5 = VAR_4->par;

 FUNC_1(VAR_5->clk, 1000 * FUNC_0(VAR_4->var.pixclock));

 FUNC_2(VAR_4);

 VAR_4->fix.line_length = VAR_4->var.xres_virtual *
  VAR_4->var.bits_per_pixel / 8;

 FUNC_4(VAR_5, VAR_4->fix.smem_start, VAR_2);
 FUNC_4(VAR_5, VAR_4->var.yres - 1, VAR_1);
 FUNC_4(VAR_5, ((VAR_4->var.xres * VAR_4->var.bits_per_pixel)
         / 32) - 1, VAR_0);
 FUNC_4(VAR_5, VAR_4->fix.line_length / 4, VAR_3);
 FUNC_3(VAR_4);
 return 0;
}
