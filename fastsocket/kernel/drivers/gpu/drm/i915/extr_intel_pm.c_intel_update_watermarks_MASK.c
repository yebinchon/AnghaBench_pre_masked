
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* update_wm ) (struct drm_device*) ;} ;
struct drm_i915_private {TYPE_1__ display; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (struct drm_device*) ;

void FUNC_1(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;

 if (VAR_1->display.update_wm)
  VAR_1->display.update_wm(VAR_0);
}
