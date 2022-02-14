
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_hw_ppgtt {struct drm_device* dev; } ;
struct TYPE_2__ {struct i915_hw_ppgtt* aliasing_ppgtt; } ;
struct drm_i915_private {TYPE_1__ mm; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i915_hw_ppgtt*) ;
 int FUNC_1 (struct i915_hw_ppgtt*) ;
 struct i915_hw_ppgtt* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 struct i915_hw_ppgtt *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev = VAR_2;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  FUNC_1(VAR_4);
 else
  VAR_3->mm.aliasing_ppgtt = VAR_4;

 return VAR_5;
}
