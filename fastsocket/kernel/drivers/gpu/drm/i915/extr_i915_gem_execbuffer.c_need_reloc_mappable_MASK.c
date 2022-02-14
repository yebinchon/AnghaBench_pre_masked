
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {struct drm_i915_gem_exec_object2* exec_entry; } ;
struct drm_i915_gem_exec_object2 {scalar_t__ relocation_count; } ;


 int FUNC_0 (struct drm_i915_gem_object*) ;

__attribute__((used)) static int
FUNC_1(struct drm_i915_gem_object *VAR_0)
{
 struct drm_i915_gem_exec_object2 *VAR_1 = VAR_0->exec_entry;
 return VAR_1->relocation_count && !FUNC_0(VAR_0);
}
