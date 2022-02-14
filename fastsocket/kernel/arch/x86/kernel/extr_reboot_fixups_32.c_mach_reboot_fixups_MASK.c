
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device_fixup {int (* reboot_fixup ) (struct pci_dev*) ;int device; int vendor; } ;


 int FUNC_0 (struct device_fixup*) ;
 struct device_fixup* VAR_0 ;
 scalar_t__ FUNC_1 () ;
 struct pci_dev* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct pci_dev*) ;

void FUNC_4(void)
{
 const struct device_fixup *VAR_1;
 struct pci_dev *VAR_2;
 int VAR_3;



 if (FUNC_1())
  return;

 for (VAR_3=0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_1 = &(VAR_0[VAR_3]);
  VAR_2 = FUNC_2(VAR_1->vendor, VAR_1->device, ((void*)0));
  if (!VAR_2)
   continue;

  VAR_1->reboot_fixup(VAR_2);
 }
}
