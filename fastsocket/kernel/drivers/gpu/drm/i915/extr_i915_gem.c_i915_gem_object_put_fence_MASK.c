
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_private {int * fence_regs; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct drm_i915_gem_object {size_t fence_reg; TYPE_2__ base; } ;
struct TYPE_3__ {struct drm_i915_private* dev_private; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 (struct drm_i915_gem_object*,int *,int) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;

int
FUNC_3(struct drm_i915_gem_object *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->base.dev->dev_private;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;

 if (VAR_1->fence_reg == VAR_0)
  return 0;

 FUNC_1(VAR_1,
         &VAR_2->fence_regs[VAR_1->fence_reg],
         0);
 FUNC_0(VAR_1);

 return 0;
}
