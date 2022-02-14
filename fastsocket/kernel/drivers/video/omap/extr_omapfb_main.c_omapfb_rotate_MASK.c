
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_plane_struct {struct omapfb_device* fbdev; } ;
struct fb_var_screeninfo {int rotate; } ;
struct omapfb_device {struct fb_var_screeninfo new_var; } ;
struct fb_info {struct fb_var_screeninfo var; struct omapfb_plane_struct* par; } ;


 int FUNC_0 (struct fb_info*) ;
 scalar_t__ FUNC_1 (struct fb_var_screeninfo*,struct fb_var_screeninfo*,int) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_var_screeninfo*,int) ;
 int FUNC_3 (struct omapfb_device*) ;
 int FUNC_4 (struct omapfb_device*) ;
 scalar_t__ FUNC_5 (struct fb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static void FUNC_6(struct fb_info *VAR_0, int VAR_1)
{
 struct omapfb_plane_struct *VAR_2 = VAR_0->par;
 struct omapfb_device *VAR_3 = VAR_2->fbdev;

 FUNC_3(VAR_3);
 if (VAR_1 != VAR_0->var.rotate) {
  struct fb_var_screeninfo *VAR_4 = &VAR_3->new_var;

  FUNC_2(VAR_4, &VAR_0->var, sizeof(*VAR_4));
  VAR_4->rotate = VAR_1;
  if (FUNC_5(VAR_0, VAR_4) == 0 &&
      FUNC_1(VAR_4, &VAR_0->var, sizeof(*VAR_4))) {
   FUNC_2(&VAR_0->var, VAR_4, sizeof(*VAR_4));
   FUNC_0(VAR_0);
  }
 }
 FUNC_4(VAR_3);
}
