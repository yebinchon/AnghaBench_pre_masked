
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_plane_struct {struct omapfb_device* fbdev; } ;
struct omapfb_device {TYPE_1__* ctrl; } ;
struct fb_info {struct omapfb_plane_struct* par; } ;
struct TYPE_2__ {int (* sync ) () ;} ;


 int FUNC_0 (struct omapfb_device*) ;
 int FUNC_1 (struct omapfb_device*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0)
{
 struct omapfb_plane_struct *VAR_1 = VAR_0->par;
 struct omapfb_device *VAR_2 = VAR_1->fbdev;

 FUNC_0(VAR_2);
 if (VAR_2->ctrl->sync)
  VAR_2->ctrl->sync();
 FUNC_1(VAR_2);
}
