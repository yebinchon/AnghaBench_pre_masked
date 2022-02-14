
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dev; } ;
struct drm_i915_gem_object {scalar_t__ tiling_mode; TYPE_2__ base; } ;
struct TYPE_7__ {scalar_t__ bit_6_swizzle_x; } ;
struct TYPE_8__ {TYPE_3__ mm; } ;
typedef TYPE_4__ drm_i915_private_t ;
struct TYPE_5__ {TYPE_4__* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) inline static bool FUNC_0(struct drm_i915_gem_object *VAR_2)
{
 drm_i915_private_t *VAR_3 = VAR_2->base.dev->dev_private;

 return VAR_3->mm.bit_6_swizzle_x == VAR_0 &&
  VAR_2->tiling_mode != VAR_1;
}
