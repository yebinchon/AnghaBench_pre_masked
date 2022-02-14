
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_i915_gem_object {int dummy; } ;
struct drm_device {TYPE_4__* dev_private; } ;
struct TYPE_11__ {int seeks; int shrink; } ;
struct TYPE_9__ {int interruptible; TYPE_5__ inactive_shrinker; int retire_work; int fence_list; int bound_list; int unbound_list; int inactive_list; int active_list; } ;
struct TYPE_8__ {int reset_queue; } ;
struct TYPE_10__ {int fence_reg_start; int num_fence_regs; TYPE_3__ mm; int pending_flip_queue; int relative_constants_mode; TYPE_2__ gpu_error; TYPE_1__* fence_regs; int * ring; int slab; } ;
typedef TYPE_4__ drm_i915_private_t ;
struct TYPE_12__ {int gen; } ;
struct TYPE_7__ {int lru_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_6__* FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct drm_device*,int ) ;
 int FUNC_10 (struct drm_device*) ;
 int VAR_8 ;
 int FUNC_11 (struct drm_device*) ;
 int VAR_9 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int,int ,int ,int *) ;
 int FUNC_15 (TYPE_5__*) ;

void
FUNC_16(struct drm_device *VAR_10)
{
 drm_i915_private_t *VAR_11 = VAR_10->dev_private;
 int VAR_12;

 VAR_11->slab =
  FUNC_14("i915_gem_object",
      sizeof(struct drm_i915_gem_object), 0,
      VAR_7,
      ((void*)0));

 FUNC_2(&VAR_11->mm.active_list);
 FUNC_2(&VAR_11->mm.inactive_list);
 FUNC_2(&VAR_11->mm.unbound_list);
 FUNC_2(&VAR_11->mm.bound_list);
 FUNC_2(&VAR_11->mm.fence_list);
 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
  FUNC_12(&VAR_11->ring[VAR_12]);
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  FUNC_2(&VAR_11->fence_regs[VAR_12].lru_list);
 FUNC_1(&VAR_11->mm.retire_work,
     VAR_9);
 FUNC_13(&VAR_11->gpu_error.reset_queue);


 if (FUNC_5(VAR_10)) {
  FUNC_0(VAR_6,
      FUNC_8(VAR_5));
 }

 VAR_11->relative_constants_mode = VAR_2;


 if (!FUNC_9(VAR_10, VAR_1))
  VAR_11->fence_reg_start = 3;

 if (FUNC_3(VAR_10)->gen >= 4 || FUNC_6(VAR_10) || FUNC_7(VAR_10) || FUNC_4(VAR_10))
  VAR_11->num_fence_regs = 16;
 else
  VAR_11->num_fence_regs = 8;


 FUNC_11(VAR_10);

 FUNC_10(VAR_10);
 FUNC_13(&VAR_11->pending_flip_queue);

 VAR_11->mm.interruptible = 1;

 VAR_11->mm.inactive_shrinker.shrink = VAR_8;
 VAR_11->mm.inactive_shrinker.seeks = VAR_0;
 FUNC_15(&VAR_11->mm.inactive_shrinker);
}
