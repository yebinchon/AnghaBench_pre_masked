
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int global_number; } ;
struct pci_bus {int dummy; } ;


 struct pci_controller* FUNC_0 (struct pci_bus*) ;

int FUNC_1(struct pci_bus *VAR_0)
{
 struct pci_controller *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->global_number;
}
