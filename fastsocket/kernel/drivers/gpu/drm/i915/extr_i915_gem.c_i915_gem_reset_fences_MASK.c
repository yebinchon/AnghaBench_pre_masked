
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fence_list; } ;
struct drm_i915_private {int num_fence_regs; TYPE_1__ mm; struct drm_i915_fence_reg* fence_regs; } ;
struct drm_i915_fence_reg {int lru_list; int * obj; scalar_t__ pin_count; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,int,int *) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_fence_regs; VAR_2++) {
  struct drm_i915_fence_reg *VAR_3 = &VAR_1->fence_regs[VAR_2];

  FUNC_2(VAR_0, VAR_2, ((void*)0));

  if (VAR_3->obj)
   FUNC_1(VAR_3->obj);

  VAR_3->pin_count = 0;
  VAR_3->obj = ((void*)0);
  FUNC_0(&VAR_3->lru_list);
 }

 FUNC_0(&VAR_1->mm.fence_list);
}
