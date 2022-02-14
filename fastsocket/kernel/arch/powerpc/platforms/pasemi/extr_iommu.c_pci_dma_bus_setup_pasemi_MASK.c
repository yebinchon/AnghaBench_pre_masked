
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {int self; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int * iommu_table; } ;


 TYPE_1__* FUNC_0 (struct device_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct device_node* FUNC_2 (struct pci_bus*) ;
 int FUNC_3 (char*,struct pci_bus*,int ) ;

__attribute__((used)) static void FUNC_4(struct pci_bus *VAR_2)
{
 struct device_node *VAR_3;

 FUNC_3("pci_dma_bus_setup, bus %p, bus->self %p\n", VAR_2, VAR_2->self);

 if (!VAR_1) {
  VAR_1 = 1;
  FUNC_1();
 }

 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3)
  FUNC_0(VAR_3)->iommu_table = &VAR_0;

}
