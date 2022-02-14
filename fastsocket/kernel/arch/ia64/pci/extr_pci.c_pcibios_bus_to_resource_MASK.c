
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; scalar_t__ start; scalar_t__ end; } ;
struct TYPE_2__ {int flags; scalar_t__ start; scalar_t__ end; } ;
struct pci_window {unsigned long offset; TYPE_1__ resource; } ;
struct pci_dev {int dummy; } ;
struct pci_controller {int windows; struct pci_window* window; } ;
struct pci_bus_region {scalar_t__ start; scalar_t__ end; } ;


 struct pci_controller* FUNC_0 (struct pci_dev*) ;

void FUNC_1(struct pci_dev *VAR_0,
  struct resource *VAR_1, struct pci_bus_region *VAR_2)
{
 struct pci_controller *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->windows; VAR_5++) {
  struct pci_window *VAR_6 = &VAR_3->window[VAR_5];
  if (!(VAR_6->resource.flags & VAR_1->flags))
   continue;
  if (VAR_6->resource.start - VAR_6->offset > VAR_2->start)
   continue;
  if (VAR_6->resource.end - VAR_6->offset < VAR_2->end)
   continue;
  VAR_4 = VAR_6->offset;
  break;
 }

 VAR_1->start = VAR_2->start + VAR_4;
 VAR_1->end = VAR_2->end + VAR_4;
}
