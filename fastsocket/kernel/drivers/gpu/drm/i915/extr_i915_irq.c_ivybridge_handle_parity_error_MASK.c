
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int error_work; } ;
struct TYPE_4__ {TYPE_1__ l3_parity; int wq; int irq_lock; int gt_irq_mask; } ;
typedef TYPE_2__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_2)
{
 drm_i915_private_t *VAR_3 = (drm_i915_private_t *) VAR_2->dev_private;
 unsigned long VAR_4;

 if (!FUNC_0(VAR_2))
  return;

 FUNC_3(&VAR_3->irq_lock, VAR_4);
 VAR_3->gt_irq_mask |= VAR_1;
 FUNC_1(VAR_0, VAR_3->gt_irq_mask);
 FUNC_4(&VAR_3->irq_lock, VAR_4);

 FUNC_2(VAR_3->wq, &VAR_3->l3_parity.error_work);
}
