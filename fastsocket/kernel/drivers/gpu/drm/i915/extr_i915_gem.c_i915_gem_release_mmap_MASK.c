
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ key; } ;
struct TYPE_7__ {TYPE_2__ hash; } ;
struct TYPE_8__ {int size; TYPE_3__ map_list; TYPE_1__* dev; } ;
struct drm_i915_gem_object {int fault_mappable; TYPE_4__ base; } ;
typedef int loff_t ;
struct TYPE_5__ {scalar_t__ dev_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,int ,int) ;

void
FUNC_1(struct drm_i915_gem_object *VAR_1)
{
 if (!VAR_1->fault_mappable)
  return;

 if (VAR_1->base.dev->dev_mapping)
  FUNC_0(VAR_1->base.dev->dev_mapping,
        (loff_t)VAR_1->base.map_list.hash.key<<VAR_0,
        VAR_1->base.size, 1);

 VAR_1->fault_mappable = 0;
}
