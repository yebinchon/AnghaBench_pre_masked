
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fence_list; } ;
struct drm_i915_private {TYPE_2__ mm; struct drm_i915_fence_reg* fence_regs; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct drm_i915_gem_object {scalar_t__ tiling_mode; int fence_dirty; size_t fence_reg; TYPE_1__ base; } ;
struct drm_i915_fence_reg {struct drm_i915_gem_object* obj; int lru_list; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 struct drm_i915_fence_reg* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*,struct drm_i915_fence_reg*,int) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (int *,int *) ;

int
FUNC_5(struct drm_i915_gem_object *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->base.dev;
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 bool VAR_6 = VAR_3->tiling_mode != VAR_2;
 struct drm_i915_fence_reg *VAR_7;
 int VAR_8;




 if (VAR_3->fence_dirty) {
  VAR_8 = FUNC_3(VAR_3);
  if (VAR_8)
   return VAR_8;
 }


 if (VAR_3->fence_reg != VAR_1) {
  VAR_7 = &VAR_5->fence_regs[VAR_3->fence_reg];
  if (!VAR_3->fence_dirty) {
   FUNC_4(&VAR_7->lru_list,
           &VAR_5->mm.fence_list);
   return 0;
  }
 } else if (VAR_6) {
  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7 == ((void*)0))
   return -VAR_0;

  if (VAR_7->obj) {
   struct drm_i915_gem_object *VAR_9 = VAR_7->obj;

   VAR_8 = FUNC_3(VAR_9);
   if (VAR_8)
    return VAR_8;

   FUNC_1(VAR_9);
  }
 } else
  return 0;

 FUNC_2(VAR_3, VAR_7, VAR_6);
 VAR_3->fence_dirty = 0;

 return 0;
}
