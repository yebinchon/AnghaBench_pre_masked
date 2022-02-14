
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ring_buffer {char* name; size_t id; int init; int * signal_mbox; int * semaphore_register; int sync_to; int dispatch_execbuffer; int irq_put; int irq_get; int irq_enable_mask; int set_seqno; int get_seqno; int add_request; int flush; int write_tail; int mmio_base; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {struct intel_ring_buffer* ring; } ;
typedef TYPE_1__ drm_i915_private_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_15 ;
 int FUNC_0 (struct drm_device*,struct intel_ring_buffer*) ;
 int VAR_16 ;
 int VAR_17 ;

int FUNC_1(struct drm_device *VAR_18)
{
 drm_i915_private_t *VAR_19 = VAR_18->dev_private;
 struct intel_ring_buffer *VAR_20 = &VAR_19->ring[VAR_0];

 VAR_20->name = "blitter ring";
 VAR_20->id = VAR_0;

 VAR_20->mmio_base = VAR_1;
 VAR_20->write_tail = VAR_17;
 VAR_20->flush = VAR_8;
 VAR_20->add_request = VAR_9;
 VAR_20->get_seqno = VAR_12;
 VAR_20->set_seqno = VAR_16;
 VAR_20->irq_enable_mask = VAR_2;
 VAR_20->irq_get = VAR_11;
 VAR_20->irq_put = VAR_13;
 VAR_20->dispatch_execbuffer = VAR_10;
 VAR_20->sync_to = VAR_14;
 VAR_20->semaphore_register[0] = VAR_5;
 VAR_20->semaphore_register[1] = VAR_6;
 VAR_20->semaphore_register[2] = VAR_7;
 VAR_20->signal_mbox[0] = VAR_3;
 VAR_20->signal_mbox[1] = VAR_4;
 VAR_20->init = VAR_15;

 return FUNC_0(VAR_18, VAR_20);
}
