
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int line_length; int xpanstep; int visual; } ;
struct TYPE_3__ {int xres_virtual; int bits_per_pixel; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct fb_info *VAR_2)
{
 VAR_2->fix.line_length = VAR_2->var.xres_virtual *
  VAR_2->var.bits_per_pixel / 8;

 if (VAR_2->var.bits_per_pixel == 8) {
  VAR_2->fix.visual = VAR_0;
  VAR_2->fix.xpanstep = 4;
 } else {
  VAR_2->fix.visual = VAR_1;
  VAR_2->fix.xpanstep = 2;
 }

}
