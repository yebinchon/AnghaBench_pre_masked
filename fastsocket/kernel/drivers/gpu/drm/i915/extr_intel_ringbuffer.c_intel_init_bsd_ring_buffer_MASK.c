
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ring_buffer {char* name; size_t id; int init; int dispatch_execbuffer; int irq_put; int irq_get; int irq_enable_mask; void* set_seqno; int get_seqno; int add_request; int flush; int mmio_base; int * signal_mbox; int * semaphore_register; int sync_to; int write_tail; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {struct intel_ring_buffer* ring; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (struct drm_device*,struct intel_ring_buffer*) ;
 int VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;

int FUNC_4(struct drm_device *VAR_30)
{
 drm_i915_private_t *VAR_31 = VAR_30->dev_private;
 struct intel_ring_buffer *VAR_32 = &VAR_31->ring[VAR_10];

 VAR_32->name = "bsd ring";
 VAR_32->id = VAR_10;

 VAR_32->write_tail = VAR_29;
 if (FUNC_1(VAR_30) || FUNC_2(VAR_30)) {
  VAR_32->mmio_base = VAR_1;

  if (FUNC_1(VAR_30))
   VAR_32->write_tail = VAR_15;
  VAR_32->flush = VAR_17;
  VAR_32->add_request = VAR_14;
  VAR_32->get_seqno = VAR_19;
  VAR_32->set_seqno = VAR_28;
  VAR_32->irq_enable_mask = VAR_2;
  VAR_32->irq_get = VAR_18;
  VAR_32->irq_put = VAR_20;
  VAR_32->dispatch_execbuffer = VAR_16;
  VAR_32->sync_to = VAR_21;
  VAR_32->semaphore_register[0] = VAR_9;
  VAR_32->semaphore_register[1] = VAR_7;
  VAR_32->semaphore_register[2] = VAR_8;
  VAR_32->signal_mbox[0] = VAR_4;
  VAR_32->signal_mbox[1] = VAR_3;
 } else {
  VAR_32->mmio_base = VAR_0;
  VAR_32->flush = VAR_11;
  VAR_32->add_request = VAR_23;
  VAR_32->get_seqno = VAR_27;
  VAR_32->set_seqno = VAR_28;
  if (FUNC_0(VAR_30)) {
   VAR_32->irq_enable_mask = VAR_5;
   VAR_32->irq_get = VAR_12;
   VAR_32->irq_put = VAR_13;
  } else {
   VAR_32->irq_enable_mask = VAR_6;
   VAR_32->irq_get = VAR_24;
   VAR_32->irq_put = VAR_25;
  }
  VAR_32->dispatch_execbuffer = VAR_22;
 }
 VAR_32->init = VAR_26;

 return FUNC_3(VAR_30, VAR_32);
}
