
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct intel_ring_buffer {int active_list; } ;
struct TYPE_3__ {int fence_list; int active_list; } ;
struct drm_i915_private {TYPE_1__ mm; struct drm_i915_fence_reg* fence_regs; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct drm_i915_gem_object {int active; size_t fence_reg; void* last_fenced_seqno; scalar_t__ fenced_gpu_access; void* last_read_seqno; int ring_list; int mm_list; TYPE_2__ base; struct intel_ring_buffer* ring; } ;
struct drm_i915_fence_reg {int lru_list; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (struct intel_ring_buffer*) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(struct drm_i915_gem_object *VAR_1,
          struct intel_ring_buffer *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->base.dev;
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 u32 VAR_5 = FUNC_2(VAR_2);

 FUNC_0(VAR_2 == ((void*)0));
 VAR_1->ring = VAR_2;


 if (!VAR_1->active) {
  FUNC_1(&VAR_1->base);
  VAR_1->active = 1;
 }


 FUNC_3(&VAR_1->mm_list, &VAR_4->mm.active_list);
 FUNC_3(&VAR_1->ring_list, &VAR_2->active_list);

 VAR_1->last_read_seqno = VAR_5;

 if (VAR_1->fenced_gpu_access) {
  VAR_1->last_fenced_seqno = VAR_5;


  if (VAR_1->fence_reg != VAR_0) {
   struct drm_i915_fence_reg *VAR_6;

   VAR_6 = &VAR_4->fence_regs[VAR_1->fence_reg];
   FUNC_3(&VAR_6->lru_list,
           &VAR_4->mm.fence_list);
  }
 }
}
