
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* driver; int irq_enabled; } ;
struct TYPE_2__ {int (* irq_postinstall ) (struct drm_device*) ;int (* irq_preinstall ) (struct drm_device*) ;int (* irq_uninstall ) (struct drm_device*) ;int (* vgaarb_irq ) (struct drm_device*,int) ;} ;


 int FUNC_0 (struct drm_device*,int) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, bool VAR_1)
{
 struct drm_device *VAR_2 = VAR_0;

 if (VAR_2->driver->vgaarb_irq) {
  VAR_2->driver->vgaarb_irq(VAR_2, VAR_1);
  return;
 }

 if (!VAR_2->irq_enabled)
  return;

 if (VAR_1) {
  if (VAR_2->driver->irq_uninstall)
   VAR_2->driver->irq_uninstall(VAR_2);
 } else {
  if (VAR_2->driver->irq_preinstall)
   VAR_2->driver->irq_preinstall(VAR_2);
  if (VAR_2->driver->irq_postinstall)
   VAR_2->driver->irq_postinstall(VAR_2);
 }
}
