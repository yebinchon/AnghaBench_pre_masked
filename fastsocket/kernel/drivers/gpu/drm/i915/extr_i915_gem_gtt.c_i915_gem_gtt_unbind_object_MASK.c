
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* gtt_clear_range ) (struct drm_device*,int,int) ;} ;
struct drm_i915_private {TYPE_1__ gtt; } ;
struct TYPE_6__ {int size; struct drm_device* dev; } ;
struct drm_i915_gem_object {scalar_t__ has_global_gtt_mapping; TYPE_3__ base; TYPE_2__* gtt_space; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_5__ {int start; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int,int) ;

void FUNC_1(struct drm_i915_gem_object *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.dev;
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;

 VAR_3->gtt.gtt_clear_range(VAR_1->base.dev,
          VAR_1->gtt_space->start >> VAR_0,
          VAR_1->base.size >> VAR_0);

 VAR_1->has_global_gtt_mapping = 0;
}
