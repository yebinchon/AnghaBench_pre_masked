
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ring_buffer {int size; scalar_t__ id; int (* init ) (struct intel_ring_buffer*) ;int effective_size; struct drm_i915_gem_object* obj; int * virtual_start; struct drm_device* dev; int irq_queue; int sync_seqno; int request_list; int active_list; } ;
struct TYPE_2__ {scalar_t__ mappable_base; } ;
struct drm_i915_private {TYPE_1__ gtt; } ;
struct drm_i915_gem_object {int base; scalar_t__ gtt_offset; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (struct intel_ring_buffer*) ;
 int FUNC_8 (int *) ;
 struct drm_i915_gem_object* FUNC_9 (struct drm_device*,int) ;
 struct drm_i915_gem_object* FUNC_10 (struct drm_device*,int) ;
 int FUNC_11 (struct drm_i915_gem_object*,int,int,int) ;
 int FUNC_12 (struct drm_i915_gem_object*,int) ;
 int FUNC_13 (struct drm_i915_gem_object*) ;
 int FUNC_14 (struct intel_ring_buffer*) ;
 int FUNC_15 (struct intel_ring_buffer*) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (scalar_t__,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (struct intel_ring_buffer*) ;

__attribute__((used)) static int FUNC_21(struct drm_device *VAR_4,
      struct intel_ring_buffer *VAR_5)
{
 struct drm_i915_gem_object *VAR_6;
 struct drm_i915_private *VAR_7 = VAR_4->dev_private;
 int VAR_8;

 VAR_5->dev = VAR_4;
 FUNC_4(&VAR_5->active_list);
 FUNC_4(&VAR_5->request_list);
 VAR_5->size = 32 * VAR_2;
 FUNC_19(VAR_5->sync_seqno, 0, sizeof(VAR_5->sync_seqno));

 FUNC_16(&VAR_5->irq_queue);

 if (FUNC_3(VAR_4)) {
  VAR_8 = FUNC_15(VAR_5);
  if (VAR_8)
   return VAR_8;
 } else {
  FUNC_0(VAR_5->id != VAR_3);
  VAR_8 = FUNC_14(VAR_5);
  if (VAR_8)
   return VAR_8;
 }

 VAR_6 = ((void*)0);
 if (!FUNC_2(VAR_4))
  VAR_6 = FUNC_10(VAR_4, VAR_5->size);
 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_9(VAR_4, VAR_5->size);
 if (VAR_6 == ((void*)0)) {
  FUNC_1("Failed to allocate ringbuffer\n");
  VAR_8 = -VAR_1;
  goto err_hws;
 }

 VAR_5->obj = VAR_6;

 VAR_8 = FUNC_11(VAR_6, VAR_2, 1, 0);
 if (VAR_8)
  goto err_unref;

 VAR_8 = FUNC_12(VAR_6, 1);
 if (VAR_8)
  goto err_unpin;

 VAR_5->virtual_start =
  FUNC_17(VAR_7->gtt.mappable_base + VAR_6->gtt_offset,
      VAR_5->size);
 if (VAR_5->virtual_start == ((void*)0)) {
  FUNC_1("Failed to map ringbuffer.\n");
  VAR_8 = -VAR_0;
  goto err_unpin;
 }

 VAR_8 = VAR_5->init(VAR_5);
 if (VAR_8)
  goto err_unmap;





 VAR_5->effective_size = VAR_5->size;
 if (FUNC_6(VAR_5->dev) || FUNC_5(VAR_5->dev))
  VAR_5->effective_size -= 128;

 return 0;

err_unmap:
 FUNC_18(VAR_5->virtual_start);
err_unpin:
 FUNC_13(VAR_6);
err_unref:
 FUNC_8(&VAR_6->base);
 VAR_5->obj = ((void*)0);
err_hws:
 FUNC_7(VAR_5);
 return VAR_8;
}
