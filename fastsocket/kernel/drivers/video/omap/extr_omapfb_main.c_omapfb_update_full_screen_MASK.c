
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_update_window {scalar_t__ format; int out_height; int out_width; scalar_t__ out_y; scalar_t__ out_x; int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct omapfb_plane_struct {struct omapfb_device* fbdev; } ;
struct omapfb_device {TYPE_2__* ctrl; } ;
struct TYPE_3__ {int yres; int xres; } ;
struct fb_info {TYPE_1__ var; struct omapfb_plane_struct* par; } ;
struct TYPE_4__ {int (* update_window ) (struct fb_info*,struct omapfb_update_window*,int *,int *) ;scalar_t__ (* get_update_mode ) () ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct omapfb_device*) ;
 int FUNC_1 (struct omapfb_device*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct fb_info*,struct omapfb_update_window*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_2)
{
 struct omapfb_plane_struct *VAR_3 = VAR_2->par;
 struct omapfb_device *VAR_4 = VAR_3->fbdev;
 struct omapfb_update_window VAR_5;
 int VAR_6;

 if (!VAR_4->ctrl->update_window ||
     VAR_4->ctrl->get_update_mode() != VAR_1)
  return -VAR_0;

 VAR_5.x = 0;
 VAR_5.y = 0;
 VAR_5.width = VAR_2->var.xres;
 VAR_5.height = VAR_2->var.yres;
 VAR_5.out_x = 0;
 VAR_5.out_y = 0;
 VAR_5.out_width = VAR_2->var.xres;
 VAR_5.out_height = VAR_2->var.yres;
 VAR_5.format = 0;

 FUNC_0(VAR_4);
 VAR_6 = VAR_4->ctrl->update_window(VAR_2, &VAR_5, ((void*)0), ((void*)0));
 FUNC_1(VAR_4);

 return VAR_6;
}
