
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {scalar_t__ cache_level; int * pages; scalar_t__ stolen; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;

void
FUNC_2(struct drm_i915_gem_object *VAR_1)
{




 if (VAR_1->pages == ((void*)0))
  return;





 if (VAR_1->stolen)
  return;
 if (VAR_1->cache_level != VAR_0)
  return;

 FUNC_1(VAR_1);

 FUNC_0(VAR_1->pages);
}
