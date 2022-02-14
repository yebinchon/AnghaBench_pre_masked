
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_ring_buffer {int tail; int size; int (* write_tail ) (struct intel_ring_buffer*,int) ;TYPE_1__* dev; } ;
struct TYPE_4__ {int stop_rings; } ;
struct drm_i915_private {TYPE_2__ gpu_error; } ;
struct TYPE_3__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (struct intel_ring_buffer*) ;
 int FUNC_1 (struct intel_ring_buffer*,int) ;

void FUNC_2(struct intel_ring_buffer *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev->dev_private;

 VAR_0->tail &= VAR_0->size - 1;
 if (VAR_1->gpu_error.stop_rings & FUNC_0(VAR_0))
  return;
 VAR_0->write_tail(VAR_0, VAR_0->tail);
}
