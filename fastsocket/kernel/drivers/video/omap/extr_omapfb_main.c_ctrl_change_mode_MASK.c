
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int out_height; int out_width; int pos_y; int pos_x; int channel_out; } ;
struct omapfb_plane_struct {TYPE_3__ info; int idx; int color_mode; struct omapfb_device* fbdev; } ;
struct omapfb_device {TYPE_2__* ctrl; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; int bits_per_pixel; int yres; int xres; int rotate; int xres_virtual; } ;
struct TYPE_4__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; struct fb_var_screeninfo var; struct omapfb_plane_struct* par; } ;
struct TYPE_5__ {int (* setup_plane ) (int ,int ,unsigned long,int ,int ,int ,int ,int ,int ) ;int (* set_rotate ) (int ) ;int (* set_scale ) (int ,int ,int ,int ,int ) ;int (* sync ) () ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,unsigned long,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;
 struct omapfb_plane_struct *VAR_3 = VAR_0->par;
 struct omapfb_device *VAR_4 = VAR_3->fbdev;
 struct fb_var_screeninfo *VAR_5 = &VAR_0->var;

 VAR_2 = VAR_5->yoffset * VAR_0->fix.line_length +
   VAR_5->xoffset * VAR_5->bits_per_pixel / 8;

 if (VAR_4->ctrl->sync)
  VAR_4->ctrl->sync();
 VAR_1 = VAR_4->ctrl->setup_plane(VAR_3->idx, VAR_3->info.channel_out,
     VAR_2, VAR_5->xres_virtual,
     VAR_3->info.pos_x, VAR_3->info.pos_y,
     VAR_5->xres, VAR_5->yres, VAR_3->color_mode);
 if (VAR_1 < 0)
  return VAR_1;

 if (VAR_4->ctrl->set_rotate != ((void*)0)) {
  VAR_1 = VAR_4->ctrl->set_rotate(VAR_5->rotate);
  if (VAR_1 < 0)
   return VAR_1;
 }

 if (VAR_4->ctrl->set_scale != ((void*)0))
  VAR_1 = VAR_4->ctrl->set_scale(VAR_3->idx,
       VAR_5->xres, VAR_5->yres,
       VAR_3->info.out_width,
       VAR_3->info.out_height);

 return VAR_1;
}
