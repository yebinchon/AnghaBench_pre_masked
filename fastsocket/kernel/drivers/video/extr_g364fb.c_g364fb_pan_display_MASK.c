
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {unsigned int yoffset; scalar_t__ yres; scalar_t__ yres_virtual; unsigned int xres; scalar_t__ xoffset; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_2,
         struct fb_info *VAR_3)
{
 if (VAR_2->xoffset || VAR_2->yoffset + VAR_2->yres > VAR_2->yres_virtual)
  return -VAR_0;

 *(unsigned int *) VAR_1 = VAR_2->yoffset * VAR_2->xres;
 return 0;
}
