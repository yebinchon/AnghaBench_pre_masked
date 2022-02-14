
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_controller {int dummy; } ;
struct pci_bus {TYPE_3__* legacy_io; TYPE_2__* legacy_mem; struct pci_controller* sysdata; } ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;
struct TYPE_8__ {char* name; } ;
struct TYPE_7__ {int size; TYPE_4__ attr; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_6__ {int size; TYPE_1__ attr; } ;


 int FUNC_0 (struct pci_controller*,int) ;
 int VAR_0 ;

void FUNC_1(struct pci_bus *VAR_1, enum pci_mmap_state VAR_2)
{
 struct pci_controller *VAR_3 = VAR_1->sysdata;

 if (!FUNC_0(VAR_3, VAR_2))
  return;

 if (VAR_2 == VAR_0) {
  VAR_1->legacy_mem->attr.name = "legacy_mem_sparse";
  VAR_1->legacy_mem->size <<= 5;
 } else {
  VAR_1->legacy_io->attr.name = "legacy_io_sparse";
  VAR_1->legacy_io->size <<= 5;
 }
 return;
}
