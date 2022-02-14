
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_private {int slab; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct drm_i915_gem_object {TYPE_2__ base; } ;
struct TYPE_3__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ,struct drm_i915_gem_object*) ;

void FUNC_1(struct drm_i915_gem_object *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->base.dev->dev_private;
 FUNC_0(VAR_1->slab, VAR_0);
}
