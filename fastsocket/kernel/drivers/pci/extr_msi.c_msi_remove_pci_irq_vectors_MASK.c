
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ msix_enabled; scalar_t__ msi_enabled; } ;


 int FUNC_0 (struct pci_dev*) ;
 int VAR_0 ;

void FUNC_1(struct pci_dev *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return;

 if (VAR_1->msi_enabled || VAR_1->msix_enabled)
  FUNC_0(VAR_1);
}
