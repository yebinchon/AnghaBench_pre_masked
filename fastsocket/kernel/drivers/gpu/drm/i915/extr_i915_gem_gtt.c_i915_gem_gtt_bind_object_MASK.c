
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* gtt_insert_entries ) (struct drm_device*,int ,int,int) ;} ;
struct drm_i915_private {TYPE_2__ gtt; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct drm_i915_gem_object {int has_global_gtt_mapping; TYPE_3__* gtt_space; int pages; TYPE_1__ base; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
struct TYPE_6__ {int start; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int ,int,int) ;

void FUNC_1(struct drm_i915_gem_object *VAR_1,
         enum i915_cache_level VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->base.dev;
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;

 VAR_4->gtt.gtt_insert_entries(VAR_3, VAR_1->pages,
      VAR_1->gtt_space->start >> VAR_0,
      VAR_2);

 VAR_1->has_global_gtt_mapping = 1;
}
