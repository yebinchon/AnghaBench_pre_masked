
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_hw_ppgtt {int (* clear_range ) (struct i915_hw_ppgtt*,int,int) ;} ;
struct TYPE_4__ {int size; } ;
struct drm_i915_gem_object {TYPE_2__ base; TYPE_1__* gtt_space; } ;
struct TYPE_3__ {int start; } ;


 int VAR_0 ;
 int FUNC_0 (struct i915_hw_ppgtt*,int,int) ;

void FUNC_1(struct i915_hw_ppgtt *VAR_1,
         struct drm_i915_gem_object *VAR_2)
{
 VAR_1->clear_range(VAR_1,
      VAR_2->gtt_space->start >> VAR_0,
      VAR_2->base.size >> VAR_0);
}
