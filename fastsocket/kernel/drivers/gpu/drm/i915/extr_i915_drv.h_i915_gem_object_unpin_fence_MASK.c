
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_i915_private {TYPE_3__* fence_regs; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct drm_i915_gem_object {scalar_t__ fence_reg; TYPE_2__ base; } ;
struct TYPE_6__ {int pin_count; } ;
struct TYPE_4__ {struct drm_i915_private* dev_private; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct drm_i915_gem_object *VAR_1)
{
 if (VAR_1->fence_reg != VAR_0) {
  struct drm_i915_private *VAR_2 = VAR_1->base.dev->dev_private;
  VAR_2->fence_regs[VAR_1->fence_reg].pin_count--;
 }
}
