
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_hw_ppgtt {int (* insert_entries ) (struct i915_hw_ppgtt*,int ,int,int) ;} ;
struct drm_i915_gem_object {TYPE_1__* gtt_space; int pages; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int FUNC_0 (struct i915_hw_ppgtt*,int ,int,int) ;

void FUNC_1(struct i915_hw_ppgtt *VAR_1,
       struct drm_i915_gem_object *VAR_2,
       enum i915_cache_level VAR_3)
{
 VAR_1->insert_entries(VAR_1, VAR_2->pages,
         VAR_2->gtt_space->start >> VAR_0,
         VAR_3);
}
