
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;
struct intel_quirk {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; int (* hook ) (struct drm_device*) ;int * dmi_id_list; } ;
struct drm_device {struct pci_dev* pdev; } ;


 int FUNC_0 (struct intel_quirk*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct intel_quirk* VAR_1 ;
 struct intel_quirk* VAR_2 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  struct intel_quirk *VAR_6 = &VAR_2[VAR_5];

  if (VAR_4->device == VAR_6->device &&
      (VAR_4->subsystem_vendor == VAR_6->subsystem_vendor ||
       VAR_6->subsystem_vendor == VAR_0) &&
      (VAR_4->subsystem_device == VAR_6->subsystem_device ||
       VAR_6->subsystem_device == VAR_0))
   VAR_6->hook(VAR_3);
 }
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (FUNC_1(*VAR_1[VAR_5].dmi_id_list) != 0)
   VAR_1[VAR_5].hook(VAR_3);
 }
}
