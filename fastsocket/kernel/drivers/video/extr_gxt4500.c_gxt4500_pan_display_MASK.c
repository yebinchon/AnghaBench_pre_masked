
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gxt4500_par {int dummy; } ;
struct fb_var_screeninfo {int xoffset; scalar_t__ xres; scalar_t__ xres_virtual; int yoffset; scalar_t__ yres; scalar_t__ yres_virtual; } ;
struct fb_info {struct gxt4500_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gxt4500_par*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_2,
          struct fb_info *VAR_3)
{
 struct gxt4500_par *VAR_4 = VAR_3->par;

 if (VAR_2->xoffset & 7)
  return -VAR_0;
 if (VAR_2->xoffset + VAR_2->xres > VAR_2->xres_virtual ||
     VAR_2->yoffset + VAR_2->yres > VAR_2->yres_virtual)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_1, (VAR_2->xoffset << 16) | VAR_2->yoffset);
 return 0;
}
