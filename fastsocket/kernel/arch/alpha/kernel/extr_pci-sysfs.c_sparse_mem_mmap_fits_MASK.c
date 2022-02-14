
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int * resource; struct pci_controller* sysdata; } ;
struct pci_controller {scalar_t__ sparse_mem_base; scalar_t__ dense_mem_base; } ;
struct pci_bus_region {unsigned long end; } ;


 int FUNC_0 (struct pci_dev*,struct pci_bus_region*,int *) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_0, int VAR_1)
{
 struct pci_bus_region VAR_2;
 struct pci_controller *VAR_3 = VAR_0->sysdata;
 long VAR_4;
 unsigned long VAR_5;

 FUNC_0(VAR_0, &VAR_2, &VAR_0->resource[VAR_1]);





 VAR_4 = (long)(VAR_3->dense_mem_base - VAR_3->sparse_mem_base);
 VAR_5 = VAR_4 >= 0x400000000UL ? 0x20000000 : 0x8000000;

 return VAR_2.end < VAR_5;
}
