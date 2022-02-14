
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int installed; int lock; } ;
struct radeon_device {int msi_enabled; TYPE_1__ irq; int ddev; int dev; int pdev; int num_crtc; int audio_work; int hotplug_work; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct radeon_device *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_2->hotplug_work, VAR_1);
 FUNC_1(&VAR_2->audio_work, VAR_0);

 FUNC_7(&VAR_2->irq.lock);
 VAR_3 = FUNC_4(VAR_2->ddev, VAR_2->num_crtc);
 if (VAR_3) {
  return VAR_3;
 }

 VAR_2->msi_enabled = 0;

 if (FUNC_6(VAR_2)) {
  int VAR_4 = FUNC_5(VAR_2->pdev);
  if (!VAR_4) {
   VAR_2->msi_enabled = 1;
   FUNC_2(VAR_2->dev, "radeon: using MSI.\n");
  }
 }
 VAR_2->irq.installed = 1;
 VAR_3 = FUNC_3(VAR_2->ddev);
 if (VAR_3) {
  VAR_2->irq.installed = 0;
  return VAR_3;
 }
 FUNC_0("radeon: irq initialized.\n");
 return 0;
}
