
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t object_memory; int object_count; } ;
struct drm_i915_private {TYPE_1__ mm; } ;



__attribute__((used)) static void FUNC_0(struct drm_i915_private *VAR_0,
         size_t VAR_1)
{
 VAR_0->mm.object_count--;
 VAR_0->mm.object_memory -= VAR_1;
}
