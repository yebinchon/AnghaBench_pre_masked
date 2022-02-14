
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_sys_data {int busnr; } ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 struct pci_bus* FUNC_0 (int ,int *,struct pci_sys_data*) ;

struct pci_bus *FUNC_1(int VAR_1, struct pci_sys_data *VAR_2)
{
 return FUNC_0(VAR_2->busnr, &VAR_0, VAR_2);
}
