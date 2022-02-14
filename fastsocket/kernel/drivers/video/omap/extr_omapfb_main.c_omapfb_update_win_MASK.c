
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_update_window {int dummy; } ;
struct omapfb_plane_struct {int fbdev; } ;
struct fb_info {struct omapfb_plane_struct* par; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fb_info*,struct omapfb_update_window*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_0,
    struct omapfb_update_window *VAR_1)
{
 struct omapfb_plane_struct *VAR_2 = VAR_0->par;
 int VAR_3;

 FUNC_0(VAR_2->fbdev);
 VAR_3 = FUNC_2(VAR_0, VAR_1, ((void*)0), ((void*)0));
 FUNC_1(VAR_2->fbdev);

 return VAR_3;
}
