
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fb_var_screeninfo {float pixclock; float xres; float left_margin; float right_margin; float hsync_len; float yres; float upper_margin; float lower_margin; float vsync_len; } ;
struct TYPE_6__ {TYPE_2__* omap; } ;
typedef TYPE_3__ omap_video_t ;
struct TYPE_5__ {TYPE_1__* current_state; } ;
struct TYPE_4__ {struct fb_var_screeninfo si; } ;



__attribute__((used)) static float FUNC_0(void *VAR_0)
{
   omap_video_t *VAR_1 = (omap_video_t*)VAR_0;
   struct fb_var_screeninfo *VAR_2 = &VAR_1->omap->current_state->si;

   return 1000000.0f / VAR_2->pixclock /
          (VAR_2->xres + VAR_2->left_margin + VAR_2->right_margin + VAR_2->hsync_len) * 1000000.0f /
          (VAR_2->yres + VAR_2->upper_margin + VAR_2->lower_margin + VAR_2->vsync_len);
}
