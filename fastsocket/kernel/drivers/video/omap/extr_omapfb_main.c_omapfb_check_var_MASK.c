
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_plane_struct {struct omapfb_device* fbdev; } ;
struct omapfb_device {TYPE_1__* ctrl; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {struct omapfb_plane_struct* par; } ;
struct TYPE_2__ {int (* sync ) () ;} ;


 int FUNC_0 (struct omapfb_device*) ;
 int FUNC_1 (struct omapfb_device*) ;
 int FUNC_2 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct fb_var_screeninfo *VAR_0, struct fb_info *VAR_1)
{
 struct omapfb_plane_struct *VAR_2 = VAR_1->par;
 struct omapfb_device *VAR_3 = VAR_2->fbdev;
 int VAR_4;

 FUNC_0(VAR_3);
 if (VAR_3->ctrl->sync != ((void*)0))
  VAR_3->ctrl->sync();
 VAR_4 = FUNC_2(VAR_1, VAR_0);
 FUNC_1(VAR_3);

 return VAR_4;
}
