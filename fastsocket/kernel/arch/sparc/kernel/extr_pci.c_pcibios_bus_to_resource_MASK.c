
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; int end; int start; } ;
struct pci_pbm_info {struct resource mem_space; struct resource io_space; } ;
struct pci_dev {TYPE_1__* bus; } ;
struct pci_bus_region {int end; int start; } ;
struct TYPE_2__ {struct pci_pbm_info* sysdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct resource*,struct resource*) ;

void FUNC_1(struct pci_dev *VAR_1, struct resource *VAR_2,
        struct pci_bus_region *VAR_3)
{
 struct pci_pbm_info *VAR_4 = VAR_1->bus->sysdata;
 struct resource *VAR_5;

 VAR_2->start = VAR_3->start;
 VAR_2->end = VAR_3->end;

 if (VAR_2->flags & VAR_0)
  VAR_5 = &VAR_4->io_space;
 else
  VAR_5 = &VAR_4->mem_space;

 FUNC_0(VAR_2, VAR_5);
}
