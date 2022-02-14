
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ring_buffer {int irq_enable_mask; int irq_refcount; struct drm_device* dev; } ;
struct drm_device {int irq_enabled; TYPE_1__* dev_private; } ;
struct TYPE_2__ {int irq_lock; int irq_mask; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static bool
FUNC_4(struct intel_ring_buffer *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 drm_i915_private_t *VAR_3 = VAR_2->dev_private;
 unsigned long VAR_4;

 if (!VAR_2->irq_enabled)
  return 0;

 FUNC_2(&VAR_3->irq_lock, VAR_4);
 if (VAR_1->irq_refcount++ == 0) {
  VAR_3->irq_mask &= ~VAR_1->irq_enable_mask;
  FUNC_0(VAR_0, VAR_3->irq_mask);
  FUNC_1(VAR_0);
 }
 FUNC_3(&VAR_3->irq_lock, VAR_4);

 return 1;
}
