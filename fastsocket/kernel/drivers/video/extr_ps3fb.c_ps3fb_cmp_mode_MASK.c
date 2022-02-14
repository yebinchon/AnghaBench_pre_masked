
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {long xres; long yres; scalar_t__ pixclock; scalar_t__ hsync_len; scalar_t__ vsync_len; int vmode; unsigned int left_margin; unsigned int right_margin; unsigned int upper_margin; unsigned int lower_margin; } ;
struct fb_var_screeninfo {long xres; long yres; scalar_t__ pixclock; scalar_t__ hsync_len; scalar_t__ vsync_len; int vmode; long left_margin; long right_margin; long upper_margin; long lower_margin; } ;


 int VAR_0 ;
 long FUNC_0 (long,unsigned int) ;

__attribute__((used)) static int FUNC_1(const struct fb_videomode *VAR_1,
     const struct fb_var_screeninfo *VAR_2)
{
 long VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 long VAR_9, VAR_10;


 if (VAR_2->xres > VAR_1->xres || VAR_2->yres > VAR_1->yres ||
     VAR_2->pixclock > VAR_1->pixclock ||
     VAR_2->hsync_len > VAR_1->hsync_len ||
     VAR_2->vsync_len > VAR_1->vsync_len)
  return -1;


 if ((VAR_2->vmode & VAR_0) != VAR_1->vmode)
  return -1;


 VAR_3 = FUNC_0(VAR_2->xres, 1U);
 VAR_4 = FUNC_0(VAR_2->yres, 1U);


 VAR_5 = FUNC_0(VAR_2->left_margin, VAR_1->left_margin);
 VAR_6 = FUNC_0(VAR_2->right_margin, VAR_1->right_margin);
 VAR_7 = FUNC_0(VAR_2->upper_margin, VAR_1->upper_margin);
 VAR_8 = FUNC_0(VAR_2->lower_margin, VAR_1->lower_margin);


 VAR_9 = ((long)VAR_1->left_margin + (long)VAR_1->xres +
       (long)VAR_1->right_margin) -
      (VAR_5 + VAR_3 + VAR_6);
 if (VAR_9 < 0)
  return -1;

 VAR_10 = ((long)VAR_1->upper_margin + (long)VAR_1->yres +
       (long)VAR_1->lower_margin) -
      (VAR_7 + VAR_4 + VAR_8);
 if (VAR_10 < 0)
  return -1;


 if (!VAR_9 && !VAR_10)
  return 0;


 return (VAR_1->xres - VAR_3) * (VAR_1->yres - VAR_4);
}
