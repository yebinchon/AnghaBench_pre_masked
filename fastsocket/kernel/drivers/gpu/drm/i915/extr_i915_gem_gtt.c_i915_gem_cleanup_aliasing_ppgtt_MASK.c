
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_hw_ppgtt {int (* cleanup ) (struct i915_hw_ppgtt*) ;} ;
struct TYPE_2__ {struct i915_hw_ppgtt* aliasing_ppgtt; } ;
struct drm_i915_private {TYPE_1__ mm; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (struct i915_hw_ppgtt*) ;

void FUNC_1(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;
 struct i915_hw_ppgtt *VAR_2 = VAR_1->mm.aliasing_ppgtt;

 if (!VAR_2)
  return;

 VAR_2->cleanup(VAR_2);
}
