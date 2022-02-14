
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_framebuffer {int base; int * obj; } ;
struct TYPE_4__ {struct fb_info* fbdev; } ;
struct radeon_fbdev {TYPE_2__ helper; struct radeon_framebuffer rfb; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct fb_info {TYPE_1__ cmap; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_0, struct radeon_fbdev *VAR_1)
{
 struct fb_info *VAR_2;
 struct radeon_framebuffer *VAR_3 = &VAR_1->rfb;

 if (VAR_1->helper.fbdev) {
  VAR_2 = VAR_1->helper.fbdev;

  FUNC_6(VAR_2);
  if (VAR_2->cmap.len)
   FUNC_3(&VAR_2->cmap);
  FUNC_4(VAR_2);
 }

 if (VAR_3->obj) {
  FUNC_5(VAR_3->obj);
  VAR_3->obj = ((void*)0);
 }
 FUNC_0(&VAR_1->helper);
 FUNC_2(&VAR_3->base);
 FUNC_1(&VAR_3->base);

 return 0;
}
