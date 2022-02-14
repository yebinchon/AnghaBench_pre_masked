
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {struct drm_i915_gem_exec_object2* exec_entry; int gtt_space; } ;
struct drm_i915_gem_exec_object2 {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;

__attribute__((used)) static void
FUNC_2(struct drm_i915_gem_object *VAR_2)
{
 struct drm_i915_gem_exec_object2 *VAR_3;

 if (!VAR_2->gtt_space)
  return;

 VAR_3 = VAR_2->exec_entry;

 if (VAR_3->flags & VAR_0)
  FUNC_1(VAR_2);

 if (VAR_3->flags & VAR_1)
  FUNC_0(VAR_2);

 VAR_3->flags &= ~(VAR_0 | VAR_1);
}
