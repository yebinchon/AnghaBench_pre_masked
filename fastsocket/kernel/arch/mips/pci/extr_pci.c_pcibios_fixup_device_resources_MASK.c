
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* resource; } ;
struct pci_controller {unsigned long io_offset; unsigned long mem_offset; } ;
struct pci_bus {scalar_t__ sysdata; } ;
struct TYPE_2__ {int flags; unsigned long end; scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_4,
 struct pci_bus *VAR_5)
{

 struct pci_controller *VAR_6 = (struct pci_controller *)VAR_5->sysdata;
 unsigned long VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (!VAR_4->resource[VAR_8].start)
   continue;
  if (VAR_4->resource[VAR_8].flags & VAR_2)
   continue;
  if (VAR_4->resource[VAR_8].flags & VAR_0)
   VAR_7 = VAR_6->io_offset;
  else if (VAR_4->resource[VAR_8].flags & VAR_1)
   VAR_7 = VAR_6->mem_offset;

  VAR_4->resource[VAR_8].start += VAR_7;
  VAR_4->resource[VAR_8].end += VAR_7;
 }
}
