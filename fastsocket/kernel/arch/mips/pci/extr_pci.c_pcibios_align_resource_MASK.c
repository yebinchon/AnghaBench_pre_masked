
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; int flags; } ;
struct pci_dev {struct pci_controller* sysdata; } ;
struct pci_controller {TYPE_2__* mem_resource; TYPE_1__* io_resource; } ;
typedef int resource_size_t ;
struct TYPE_4__ {int start; } ;
struct TYPE_3__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_0(void *VAR_4, struct resource *VAR_5,
         resource_size_t VAR_6, resource_size_t VAR_7)
{
 struct pci_dev *VAR_8 = VAR_4;
 struct pci_controller *VAR_9 = VAR_8->sysdata;
 resource_size_t VAR_10 = VAR_5->start;

 if (VAR_5->flags & VAR_0) {

  if (VAR_10 < VAR_2 + VAR_9->io_resource->start)
   VAR_10 = VAR_2 + VAR_9->io_resource->start;




  if (VAR_10 & 0x300)
   VAR_10 = (VAR_10 + 0x3ff) & ~0x3ff;
 } else if (VAR_5->flags & VAR_1) {

  if (VAR_10 < VAR_3 + VAR_9->mem_resource->start)
   VAR_10 = VAR_3 + VAR_9->mem_resource->start;
 }

 VAR_5->start = VAR_10;
}
