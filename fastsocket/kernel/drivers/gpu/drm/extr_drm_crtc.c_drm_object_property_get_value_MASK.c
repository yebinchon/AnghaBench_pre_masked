
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ id; } ;
struct drm_property {TYPE_1__ base; } ;
struct drm_mode_object {TYPE_2__* properties; } ;
struct TYPE_4__ {int count; scalar_t__* ids; int * values; } ;


 int VAR_0 ;

int FUNC_0(struct drm_mode_object *VAR_1,
      struct drm_property *VAR_2, uint64_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->properties->count; VAR_4++) {
  if (VAR_1->properties->ids[VAR_4] == VAR_2->base.id) {
   *VAR_3 = VAR_1->properties->values[VAR_4];
   return 0;
  }
 }

 return -VAR_0;
}
