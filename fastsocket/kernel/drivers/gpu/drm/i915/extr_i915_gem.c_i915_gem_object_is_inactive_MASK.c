
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int active; scalar_t__ gtt_space; } ;



__attribute__((used)) static inline bool
FUNC_0(struct drm_i915_gem_object *VAR_0)
{
 return VAR_0->gtt_space && !VAR_0->active;
}
