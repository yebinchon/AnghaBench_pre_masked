
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int pixclock; unsigned long xres; unsigned long left_margin; unsigned long right_margin; unsigned long hsync_len; unsigned long yres; unsigned long upper_margin; unsigned long lower_margin; unsigned long vsync_len; } ;
struct fb_monspecs {unsigned long vfmin; unsigned long vfmax; unsigned long hfmin; unsigned long hfmax; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct fb_var_screeninfo *VAR_1,
   struct fb_monspecs *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 VAR_3 = 1953125000 / VAR_1->pixclock;
 VAR_3 = VAR_3 * 512 /
      (VAR_1->xres + VAR_1->left_margin + VAR_1->right_margin + VAR_1->hsync_len);
 VAR_4 = VAR_3 /
      (VAR_1->yres + VAR_1->upper_margin + VAR_1->lower_margin + VAR_1->vsync_len);

 return (VAR_4 >= VAR_2->vfmin && VAR_4 <= VAR_2->vfmax &&
  VAR_3 >= VAR_2->hfmin && VAR_3 <= VAR_2->hfmax) ? 0 : -VAR_0;
}
