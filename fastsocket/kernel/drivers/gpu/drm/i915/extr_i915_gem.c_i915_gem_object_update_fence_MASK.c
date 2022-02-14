
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fence_list; } ;
struct drm_i915_private {TYPE_1__ mm; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct drm_i915_gem_object {int fence_reg; TYPE_2__ base; } ;
struct drm_i915_fence_reg {int lru_list; struct drm_i915_gem_object* obj; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*,struct drm_i915_fence_reg*) ;
 int FUNC_2 (struct drm_device*,int,struct drm_i915_gem_object*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_gem_object *VAR_2,
      struct drm_i915_fence_reg *VAR_3,
      bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->base.dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 int VAR_7 = FUNC_1(VAR_6, VAR_3);
 if (FUNC_0(VAR_2->base.dev))
  FUNC_5(VAR_1, ((void*)0), 1);
 FUNC_2(VAR_5, VAR_7, VAR_4 ? VAR_2 : ((void*)0));

 if (VAR_4) {
  VAR_2->fence_reg = VAR_7;
  VAR_3->obj = VAR_2;
  FUNC_4(&VAR_3->lru_list, &VAR_6->mm.fence_list);
 } else {
  VAR_2->fence_reg = VAR_0;
  VAR_3->obj = ((void*)0);
  FUNC_3(&VAR_3->lru_list);
 }
}
