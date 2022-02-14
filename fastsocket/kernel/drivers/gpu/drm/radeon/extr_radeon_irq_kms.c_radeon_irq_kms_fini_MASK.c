
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int installed; } ;
struct radeon_device {int hotplug_work; int pdev; scalar_t__ msi_enabled; TYPE_1__ irq; int ddev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct radeon_device *VAR_0)
{
 FUNC_1(VAR_0->ddev);
 if (VAR_0->irq.installed) {
  FUNC_0(VAR_0->ddev);
  VAR_0->irq.installed = 0;
  if (VAR_0->msi_enabled)
   FUNC_3(VAR_0->pdev);
 }
 FUNC_2(&VAR_0->hotplug_work);
}
