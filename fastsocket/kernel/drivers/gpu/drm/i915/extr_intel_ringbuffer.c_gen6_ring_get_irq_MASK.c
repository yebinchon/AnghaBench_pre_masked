
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct intel_ring_buffer {scalar_t__ id; int irq_enable_mask; int irq_refcount; struct drm_device* dev; } ;
struct drm_device {int irq_enabled; TYPE_1__* dev_private; } ;
struct TYPE_3__ {int gt_irq_mask; int irq_lock; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static bool
FUNC_7(struct intel_ring_buffer *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 drm_i915_private_t *VAR_5 = VAR_4->dev_private;
 unsigned long VAR_6;

 if (!VAR_4->irq_enabled)
        return 0;




 FUNC_4(VAR_5);

 FUNC_5(&VAR_5->irq_lock, VAR_6);
 if (VAR_3->irq_refcount++ == 0) {
  if (FUNC_0(VAR_4) && VAR_3->id == VAR_2)
   FUNC_2(VAR_3, ~(VAR_3->irq_enable_mask |
      VAR_0));
  else
   FUNC_2(VAR_3, ~VAR_3->irq_enable_mask);
  VAR_5->gt_irq_mask &= ~VAR_3->irq_enable_mask;
  FUNC_1(VAR_1, VAR_5->gt_irq_mask);
  FUNC_3(VAR_1);
 }
 FUNC_6(&VAR_5->irq_lock, VAR_6);

 return 1;
}
