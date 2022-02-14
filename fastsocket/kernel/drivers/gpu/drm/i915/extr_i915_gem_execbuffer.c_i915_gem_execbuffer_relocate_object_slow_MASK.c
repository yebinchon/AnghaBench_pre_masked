
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eb_objects {int dummy; } ;
struct drm_i915_gem_relocation_entry {int dummy; } ;
struct drm_i915_gem_object {struct drm_i915_gem_exec_object2* exec_entry; } ;
struct drm_i915_gem_exec_object2 {int relocation_count; } ;


 int FUNC_0 (struct drm_i915_gem_object*,struct eb_objects*,struct drm_i915_gem_relocation_entry*) ;

__attribute__((used)) static int
FUNC_1(struct drm_i915_gem_object *VAR_0,
      struct eb_objects *VAR_1,
      struct drm_i915_gem_relocation_entry *VAR_2)
{
 const struct drm_i915_gem_exec_object2 *VAR_3 = VAR_0->exec_entry;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->relocation_count; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_2[VAR_4]);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
