
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {scalar_t__ bits_per_pixel; scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ xoffset; scalar_t__ yoffset; } ;
struct atafb_par {int next_line; } ;


 int VAR_0 ;
 struct fb_var_screeninfo* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_4, struct atafb_par *VAR_5)
{
 struct fb_var_screeninfo *VAR_6 = &VAR_1[0];

 if (VAR_4->bits_per_pixel > VAR_6->bits_per_pixel ||
     VAR_4->xres > VAR_6->xres ||
     VAR_4->xres_virtual > VAR_6->xres_virtual ||
     VAR_4->yres > VAR_6->yres ||
     VAR_4->xoffset > 0 ||
     VAR_4->yoffset > 0)
  return -VAR_0;

 VAR_5->next_line = VAR_3 * VAR_2 / 8;
 return 0;
}
