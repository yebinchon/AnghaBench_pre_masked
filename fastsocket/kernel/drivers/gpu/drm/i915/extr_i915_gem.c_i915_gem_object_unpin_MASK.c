
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {scalar_t__ pin_count; int pin_mappable; int * gtt_space; } ;


 int FUNC_0 (int) ;

void
FUNC_1(struct drm_i915_gem_object *VAR_0)
{
 FUNC_0(VAR_0->pin_count == 0);
 FUNC_0(VAR_0->gtt_space == ((void*)0));

 if (--VAR_0->pin_count == 0)
  VAR_0->pin_mappable = 0;
}
