
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev_rh1 {int pcie_mpss; } ;
struct pci_dev {scalar_t__ rh_reserved1; } ;



void FUNC_0(struct pci_dev *VAR_0, u8 VAR_1)
{
 ((struct pci_dev_rh1 *) VAR_0->rh_reserved1)->pcie_mpss = VAR_1;
}
