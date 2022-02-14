
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev_rh1 {int pcie_flags_reg; } ;
struct pci_dev {scalar_t__ rh_reserved1; } ;


 int VAR_0 ;

int FUNC_0(const struct pci_dev *VAR_1)
{
 return (((struct pci_dev_rh1 *)VAR_1->rh_reserved1)->pcie_flags_reg &
  VAR_0) >> 4;
}
