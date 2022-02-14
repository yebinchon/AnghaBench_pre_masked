
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* obj; } ;
struct TYPE_5__ {struct fb_info* fbdev; } ;
struct intel_fbdev {TYPE_3__ ifb; TYPE_1__ helper; } ;
struct fb_info {int screen_size; int screen_base; } ;
struct drm_device {TYPE_4__* dev_private; } ;
struct TYPE_8__ {struct intel_fbdev* fbdev; } ;
typedef TYPE_4__ drm_i915_private_t ;
struct TYPE_6__ {scalar_t__ stolen; } ;


 int FUNC_0 (struct fb_info*,int) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct drm_device *VAR_0, int VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_0->dev_private;
 struct intel_fbdev *VAR_3 = VAR_2->fbdev;
 struct fb_info *VAR_4;

 if (!VAR_3)
  return;

 VAR_4 = VAR_3->helper.fbdev;





 if (!VAR_1 && VAR_3->ifb.obj->stolen)
  FUNC_1(VAR_4->screen_base, 0, VAR_4->screen_size);

 FUNC_0(VAR_4, VAR_1);
}
