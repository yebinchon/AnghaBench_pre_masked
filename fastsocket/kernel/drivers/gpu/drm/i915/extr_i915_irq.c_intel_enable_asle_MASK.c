
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_5__ {int irq_lock; } ;
typedef TYPE_1__ drm_i915_private_t ;
struct TYPE_6__ {int gen; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 TYPE_4__* FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct drm_device *VAR_2)
{
 drm_i915_private_t *VAR_3 = VAR_2->dev_private;
 unsigned long VAR_4;


 if (FUNC_2(VAR_2))
  return;

 FUNC_5(&VAR_3->irq_lock, VAR_4);

 if (FUNC_0(VAR_2))
  FUNC_4(VAR_3, VAR_0);
 else {
  FUNC_3(VAR_3, 1,
         VAR_1);
  if (FUNC_1(VAR_2)->gen >= 4)
   FUNC_3(VAR_3, 0,
          VAR_1);
 }

 FUNC_6(&VAR_3->irq_lock, VAR_4);
}
