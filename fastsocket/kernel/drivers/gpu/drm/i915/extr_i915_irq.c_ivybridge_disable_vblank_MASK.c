
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int irq_lock; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_1, int VAR_2)
{
 drm_i915_private_t *VAR_3 = (drm_i915_private_t *) VAR_1->dev_private;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->irq_lock, VAR_4);
 FUNC_0(VAR_3,
         VAR_0 << (VAR_2 * 5));
 FUNC_2(&VAR_3->irq_lock, VAR_4);
}
