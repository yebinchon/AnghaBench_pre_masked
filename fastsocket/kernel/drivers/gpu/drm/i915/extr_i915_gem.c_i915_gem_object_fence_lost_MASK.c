
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int fence_dirty; int fence_reg; scalar_t__ tiling_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_gem_object*) ;

__attribute__((used)) static inline void FUNC_1(struct drm_i915_gem_object *VAR_1)
{
 if (VAR_1->tiling_mode)
  FUNC_0(VAR_1);




 VAR_1->fence_dirty = 0;
 VAR_1->fence_reg = VAR_0;
}
