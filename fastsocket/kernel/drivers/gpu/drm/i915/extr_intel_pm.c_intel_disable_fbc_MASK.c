
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* disable_fbc ) (struct drm_device*) ;} ;
struct drm_i915_private {int cfb_plane; TYPE_1__ display; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_device*) ;

void FUNC_2(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;

 FUNC_0(VAR_1);

 if (!VAR_1->display.disable_fbc)
  return;

 VAR_1->display.disable_fbc(VAR_0);
 VAR_1->cfb_plane = -1;
}
