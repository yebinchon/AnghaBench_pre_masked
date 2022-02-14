
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_ring_buffer {char* name; size_t id; int size; int effective_size; int * virtual_start; struct drm_device* dev; int request_list; int active_list; int cleanup; int init; int dispatch_execbuffer; int write_tail; int irq_enable_mask; int irq_put; int irq_get; int set_seqno; int get_seqno; int flush; int add_request; int mmio_base; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_3__ {struct intel_ring_buffer* ring; } ;
typedef TYPE_1__ drm_i915_private_t ;
struct TYPE_4__ {int gen; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct intel_ring_buffer*) ;
 int VAR_15 ;
 int * FUNC_8 (int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

int FUNC_9(struct drm_device *VAR_20, u64 VAR_21, u32 VAR_22)
{
 drm_i915_private_t *VAR_23 = VAR_20->dev_private;
 struct intel_ring_buffer *VAR_24 = &VAR_23->ring[VAR_3];
 int VAR_25;

 VAR_24->name = "render ring";
 VAR_24->id = VAR_3;
 VAR_24->mmio_base = VAR_4;

 if (FUNC_3(VAR_20)->gen >= 6) {

  return -VAR_0;
 }




 VAR_24->add_request = VAR_12;
 if (FUNC_3(VAR_20)->gen < 4)
  VAR_24->flush = VAR_5;
 else
  VAR_24->flush = VAR_6;
 VAR_24->get_seqno = VAR_17;
 VAR_24->set_seqno = VAR_18;
 if (FUNC_5(VAR_20)) {
  VAR_24->irq_get = VAR_8;
  VAR_24->irq_put = VAR_9;
 } else {
  VAR_24->irq_get = VAR_13;
  VAR_24->irq_put = VAR_14;
 }
 VAR_24->irq_enable_mask = VAR_2;
 VAR_24->write_tail = VAR_19;
 if (FUNC_3(VAR_20)->gen >= 4)
  VAR_24->dispatch_execbuffer = VAR_11;
 else if (FUNC_6(VAR_20) || FUNC_4(VAR_20))
  VAR_24->dispatch_execbuffer = VAR_7;
 else
  VAR_24->dispatch_execbuffer = VAR_10;
 VAR_24->init = VAR_15;
 VAR_24->cleanup = VAR_16;

 VAR_24->dev = VAR_20;
 FUNC_2(&VAR_24->active_list);
 FUNC_2(&VAR_24->request_list);

 VAR_24->size = VAR_22;
 VAR_24->effective_size = VAR_24->size;
 if (FUNC_6(VAR_24->dev) || FUNC_4(VAR_24->dev))
  VAR_24->effective_size -= 128;

 VAR_24->virtual_start = FUNC_8(VAR_21, VAR_22);
 if (VAR_24->virtual_start == ((void*)0)) {
  FUNC_0("can not ioremap virtual address for"
     " ring buffer\n");
  return -VAR_1;
 }

 if (!FUNC_1(VAR_20)) {
  VAR_25 = FUNC_7(VAR_24);
  if (VAR_25)
   return VAR_25;
 }

 return 0;
}
