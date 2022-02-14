
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_plane_info {int dummy; } ;
struct omapfb_plane_struct {struct omapfb_plane_info info; } ;
struct fb_info {struct omapfb_plane_struct* par; } ;



__attribute__((used)) static int FUNC_0(struct fb_info *VAR_0, struct omapfb_plane_info *VAR_1)
{
 struct omapfb_plane_struct *VAR_2 = VAR_0->par;

 *VAR_1 = VAR_2->info;
 return 0;
}
