
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int cfg_data; } ;
typedef int PCI_IO_ADDR ;



__attribute__((used)) static inline PCI_IO_ADDR FUNC_0(
     struct pci_controller *VAR_0)
{






 return VAR_0->cfg_data;
}
