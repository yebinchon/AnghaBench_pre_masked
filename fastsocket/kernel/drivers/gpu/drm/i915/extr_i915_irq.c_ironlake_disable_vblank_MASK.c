
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int irq_lock; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_2, int VAR_3)
{
 drm_i915_private_t *VAR_4 = (drm_i915_private_t *) VAR_2->dev_private;
 unsigned long VAR_5;

 FUNC_1(&VAR_4->irq_lock, VAR_5);
 FUNC_0(VAR_4, (VAR_3 == 0) ?
         VAR_0 : VAR_1);
 FUNC_2(&VAR_4->irq_lock, VAR_5);
}
