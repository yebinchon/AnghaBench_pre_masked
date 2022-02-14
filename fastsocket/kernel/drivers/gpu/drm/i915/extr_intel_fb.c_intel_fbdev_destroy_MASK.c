
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_framebuffer {TYPE_1__* obj; int base; } ;
struct TYPE_6__ {struct fb_info* fbdev; } ;
struct intel_fbdev {TYPE_3__ helper; struct intel_framebuffer ifb; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct fb_info {TYPE_2__ cmap; int screen_base; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int base; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static void FUNC_8(struct drm_device *VAR_0,
    struct intel_fbdev *VAR_1)
{
 struct fb_info *VAR_2;
 struct intel_framebuffer *VAR_3 = &VAR_1->ifb;

 if (VAR_1->helper.fbdev) {
  VAR_2 = VAR_1->helper.fbdev;
  FUNC_7(VAR_2);
  FUNC_6(VAR_2->screen_base);
  if (VAR_2->cmap.len)
   FUNC_4(&VAR_2->cmap);
  FUNC_5(VAR_2);
 }

 FUNC_0(&VAR_1->helper);

 FUNC_2(&VAR_3->base);
 FUNC_1(&VAR_3->base);
 if (VAR_3->obj) {
  FUNC_3(&VAR_3->obj->base);
  VAR_3->obj = ((void*)0);
 }
}
