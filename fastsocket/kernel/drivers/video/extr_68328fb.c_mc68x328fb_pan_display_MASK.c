
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int vmode; scalar_t__ yoffset; scalar_t__ xoffset; scalar_t__ xres; scalar_t__ yres; } ;
struct TYPE_2__ {scalar_t__ yres_virtual; scalar_t__ xres_virtual; scalar_t__ xoffset; scalar_t__ yoffset; int vmode; } ;
struct fb_info {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_2,
      struct fb_info *VAR_3)
{
 if (VAR_2->vmode & VAR_1) {
  if (VAR_2->yoffset < 0
      || VAR_2->yoffset >= VAR_3->var.yres_virtual
      || VAR_2->xoffset)
   return -VAR_0;
 } else {
  if (VAR_2->xoffset + VAR_2->xres > VAR_3->var.xres_virtual ||
      VAR_2->yoffset + VAR_2->yres > VAR_3->var.yres_virtual)
   return -VAR_0;
 }
 VAR_3->var.xoffset = VAR_2->xoffset;
 VAR_3->var.yoffset = VAR_2->yoffset;
 if (VAR_2->vmode & VAR_1)
  VAR_3->var.vmode |= VAR_1;
 else
  VAR_3->var.vmode &= ~VAR_1;
 return 0;
}
