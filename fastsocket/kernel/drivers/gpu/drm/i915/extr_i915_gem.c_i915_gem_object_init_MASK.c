
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_gem_object_ops {int dummy; } ;
struct TYPE_4__ {int size; TYPE_1__* dev; } ;
struct drm_i915_gem_object {int map_and_fenceable; TYPE_2__ base; int madv; int fence_reg; struct drm_i915_gem_object_ops const* ops; int exec_list; int ring_list; int gtt_list; int mm_list; } ;
struct TYPE_3__ {int dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct drm_i915_gem_object *VAR_2,
     const struct drm_i915_gem_object_ops *VAR_3)
{
 FUNC_0(&VAR_2->mm_list);
 FUNC_0(&VAR_2->gtt_list);
 FUNC_0(&VAR_2->ring_list);
 FUNC_0(&VAR_2->exec_list);

 VAR_2->ops = VAR_3;

 VAR_2->fence_reg = VAR_0;
 VAR_2->madv = VAR_1;

 VAR_2->map_and_fenceable = 1;

 FUNC_1(VAR_2->base.dev->dev_private, VAR_2->base.size);
}
