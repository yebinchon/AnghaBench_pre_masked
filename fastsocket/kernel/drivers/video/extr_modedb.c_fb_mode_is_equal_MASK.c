
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {scalar_t__ xres; scalar_t__ yres; scalar_t__ pixclock; scalar_t__ hsync_len; scalar_t__ vsync_len; scalar_t__ left_margin; scalar_t__ right_margin; scalar_t__ upper_margin; scalar_t__ lower_margin; scalar_t__ sync; scalar_t__ vmode; } ;



int FUNC_0(const struct fb_videomode *VAR_0,
       const struct fb_videomode *VAR_1)
{
 return (VAR_0->xres == VAR_1->xres &&
  VAR_0->yres == VAR_1->yres &&
  VAR_0->pixclock == VAR_1->pixclock &&
  VAR_0->hsync_len == VAR_1->hsync_len &&
  VAR_0->vsync_len == VAR_1->vsync_len &&
  VAR_0->left_margin == VAR_1->left_margin &&
  VAR_0->right_margin == VAR_1->right_margin &&
  VAR_0->upper_margin == VAR_1->upper_margin &&
  VAR_0->lower_margin == VAR_1->lower_margin &&
  VAR_0->sync == VAR_1->sync &&
  VAR_0->vmode == VAR_1->vmode);
}
