
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev_rh1 {int * msi_kset; } ;
struct pci_dev {int msix_enabled; struct pci_dev_rh1* rh_reserved1; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct pci_dev*) ;

void FUNC_3(struct pci_dev *VAR_1)
{
 struct pci_dev_rh1 *VAR_2 = VAR_1->rh_reserved1;

 if (!VAR_0 || !VAR_1 || !VAR_1->msix_enabled)
  return;

 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 if (VAR_2 && VAR_2->msi_kset) {
  FUNC_1(VAR_2->msi_kset);
  VAR_2->msi_kset = ((void*)0);
 }
}
