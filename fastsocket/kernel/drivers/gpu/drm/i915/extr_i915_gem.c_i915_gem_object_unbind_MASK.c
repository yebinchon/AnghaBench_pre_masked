
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dev; } ;
struct drm_i915_gem_object {int map_and_fenceable; scalar_t__ gtt_offset; int * gtt_space; int gtt_list; int mm_list; scalar_t__ has_aliasing_ppgtt_mapping; scalar_t__ has_global_gtt_mapping; int * pages; scalar_t__ pin_count; TYPE_2__ base; } ;
struct TYPE_7__ {int unbound_list; int aliasing_ppgtt; } ;
struct TYPE_8__ {TYPE_3__ mm; } ;
typedef TYPE_4__ drm_i915_private_t ;
struct TYPE_5__ {TYPE_4__* dev_private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (int ,struct drm_i915_gem_object*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct drm_i915_gem_object*) ;

int
FUNC_11(struct drm_i915_gem_object *VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_1->base.dev->dev_private;
 int VAR_3;

 if (VAR_1->gtt_space == ((void*)0))
  return 0;

 if (VAR_1->pin_count)
  return -VAR_0;

 FUNC_0(VAR_1->pages == ((void*)0));

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  return VAR_3;





 FUNC_5(VAR_1);


 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_10(VAR_1);

 if (VAR_1->has_global_gtt_mapping)
  FUNC_3(VAR_1);
 if (VAR_1->has_aliasing_ppgtt_mapping) {
  FUNC_7(VAR_2->mm.aliasing_ppgtt, VAR_1);
  VAR_1->has_aliasing_ppgtt_mapping = 0;
 }
 FUNC_2(VAR_1);

 FUNC_8(&VAR_1->mm_list);
 FUNC_9(&VAR_1->gtt_list, &VAR_2->mm.unbound_list);

 VAR_1->map_and_fenceable = 1;

 FUNC_1(VAR_1->gtt_space);
 VAR_1->gtt_space = ((void*)0);
 VAR_1->gtt_offset = 0;

 return 0;
}
