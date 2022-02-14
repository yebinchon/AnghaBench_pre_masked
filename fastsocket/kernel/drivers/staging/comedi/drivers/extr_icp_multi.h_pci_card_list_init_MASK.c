
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcilst_struct {unsigned short vendor; int irq; int * io_addr; int pci_func; int pci_slot; int pci_bus; int device; struct pcilst_struct* next; int pcidev; } ;
struct pci_dev {unsigned short vendor; int irq; int devfn; TYPE_1__* bus; int device; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pcilst_struct* VAR_2 ;
 struct pcilst_struct* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pcilst_struct*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct pci_dev* FUNC_7 (int ,int ,struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(unsigned short VAR_3, char VAR_4)
{
 struct pci_dev *VAR_5;
 struct pcilst_struct *VAR_6, *VAR_7;
 int VAR_8;

 VAR_2 = ((void*)0);
 VAR_7 = ((void*)0);

 for (VAR_5 = FUNC_7(VAR_1, VAR_1, ((void*)0));
      VAR_5 != ((void*)0);
      VAR_5 = FUNC_7(VAR_1, VAR_1, VAR_5)) {
  if (VAR_5->vendor == VAR_3) {
   VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
   if (!VAR_6) {
    FUNC_9
        ("icp_multi: pci_card_list_init: allocation failed\n");
    FUNC_6(VAR_5);
    break;
   }
   FUNC_3(VAR_6, 0, sizeof(*VAR_6));

   VAR_6->pcidev = FUNC_5(VAR_5);
   if (VAR_7) {
    VAR_7->next = VAR_6;
   } else {
    VAR_2 = VAR_6;
   }
   VAR_7 = VAR_6;

   VAR_6->vendor = VAR_5->vendor;
   VAR_6->device = VAR_5->device;
   VAR_6->pci_bus = VAR_5->bus->number;
   VAR_6->pci_slot = FUNC_1(VAR_5->devfn);
   VAR_6->pci_func = FUNC_0(VAR_5->devfn);



   for (VAR_8 = 0; VAR_8 < 5; VAR_8++)
    VAR_6->io_addr[VAR_8] =
        FUNC_8(VAR_5, VAR_8);
   VAR_6->irq = VAR_5->irq;
  }
 }

 if (VAR_4)
  FUNC_4();
}
