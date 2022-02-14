
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ring_buffer {int irq_queue; int (* get_seqno ) (struct intel_ring_buffer*,int) ;int * obj; } ;
struct TYPE_2__ {int hangcheck_timer; scalar_t__ hangcheck_count; } ;
struct drm_i915_private {TYPE_1__ gpu_error; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;
 int FUNC_3 (struct intel_ring_buffer*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_3,
   struct intel_ring_buffer *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_3->dev_private;

 if (VAR_4->obj == ((void*)0))
  return;

 FUNC_3(VAR_4, VAR_4->get_seqno(VAR_4, 0));

 FUNC_4(&VAR_4->irq_queue);
 if (VAR_1) {
  VAR_5->gpu_error.hangcheck_count = 0;
  FUNC_0(&VAR_5->gpu_error.hangcheck_timer,
     FUNC_1(VAR_2 + VAR_0));
 }
}
