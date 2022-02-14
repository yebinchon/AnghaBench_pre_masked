
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_update_window {int x; int y; int out_x; int out_y; int width; int height; int out_width; int out_height; } ;
struct omapfb_plane_struct {struct omapfb_device* fbdev; } ;
struct omapfb_device {TYPE_2__* ctrl; TYPE_1__* panel; } ;
struct fb_var_screeninfo {int rotate; } ;
struct fb_info {struct fb_var_screeninfo var; struct omapfb_plane_struct* par; } ;
struct TYPE_4__ {int (* update_window ) (struct fb_info*,struct omapfb_update_window*,void (*) (void*),void*) ;scalar_t__ (* get_update_mode ) () ;} ;
struct TYPE_3__ {int x_res; int y_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct fb_info*,struct omapfb_update_window*,void (*) (void*),void*) ;

int FUNC_2(struct fb_info *VAR_3,
    struct omapfb_update_window *VAR_4,
    void (*VAR_5)(void *),
    void *VAR_6)
{
 int VAR_7, VAR_8;
 struct omapfb_plane_struct *VAR_9 = VAR_3->par;
 struct omapfb_device *VAR_10 = VAR_9->fbdev;
 struct fb_var_screeninfo *VAR_11 = &VAR_3->var;

 switch (VAR_11->rotate) {
 case 0:
 case 180:
  VAR_7 = VAR_10->panel->x_res;
  VAR_8 = VAR_10->panel->y_res;
  break;
 case 90:
 case 270:
  VAR_7 = VAR_10->panel->y_res;
  VAR_8 = VAR_10->panel->x_res;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_4->x >= VAR_7 || VAR_4->y >= VAR_8 ||
     VAR_4->out_x > VAR_7 || VAR_4->out_y > VAR_8)
  return -VAR_0;

 if (!VAR_10->ctrl->update_window ||
     VAR_10->ctrl->get_update_mode() != VAR_2)
  return -VAR_1;

 if (VAR_4->x + VAR_4->width > VAR_7)
  VAR_4->width = VAR_7 - VAR_4->x;
 if (VAR_4->y + VAR_4->height > VAR_8)
  VAR_4->height = VAR_8 - VAR_4->y;
 if (VAR_4->out_x + VAR_4->out_width > VAR_7)
  VAR_4->out_width = VAR_7 - VAR_4->out_x;
 if (VAR_4->out_y + VAR_4->out_height > VAR_8)
  VAR_4->out_height = VAR_8 - VAR_4->out_y;
 if (!VAR_4->width || !VAR_4->height || !VAR_4->out_width || !VAR_4->out_height)
  return 0;

 return VAR_10->ctrl->update_window(VAR_3, VAR_4, VAR_5, VAR_6);
}
