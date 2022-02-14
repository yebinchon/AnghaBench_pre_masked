
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcilst_struct {unsigned short vendor; int irq; int * io_addr; int pci_func; int pci_slot; int pci_bus; int device; struct pcilst_struct* next; struct pci_dev* pcidev; } ;
struct pci_dev {unsigned short vendor; int irq; int devfn; TYPE_1__* bus; int device; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pcilst_struct* VAR_2 ;
 unsigned short* VAR_3 ;
 struct pcilst_struct* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pcilst_struct*,int ,int) ;
 struct pci_dev* FUNC_4 (int ,int ,struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 () ;

void FUNC_7(unsigned short VAR_4, char VAR_5)
{
 struct pci_dev *VAR_6;
 struct pcilst_struct *VAR_7, *VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 VAR_2 = ((void*)0);
 VAR_8 = ((void*)0);

 for (VAR_6 = FUNC_4(VAR_1, VAR_1, ((void*)0));
      VAR_6 != ((void*)0);
      VAR_6 = FUNC_4(VAR_1, VAR_1, VAR_6)) {
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   VAR_4 = VAR_3[VAR_10];
   if (VAR_6->vendor == VAR_4) {
    VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);
    if (VAR_7 == ((void*)0))
     continue;

    FUNC_3(VAR_7, 0, sizeof(*VAR_7));

    VAR_7->pcidev = VAR_6;
    if (VAR_8)
     VAR_8->next = VAR_7;
    else
     VAR_2 = VAR_7;
    VAR_8 = VAR_7;

    VAR_7->vendor = VAR_6->vendor;
    VAR_7->device = VAR_6->device;
    VAR_7->pci_bus = VAR_6->bus->number;
    VAR_7->pci_slot = FUNC_1(VAR_6->devfn);
    VAR_7->pci_func = FUNC_0(VAR_6->devfn);



    for (VAR_9 = 0; VAR_9 < 5; VAR_9++)
     VAR_7->io_addr[VAR_9] =
         FUNC_5(VAR_6, VAR_9);
    VAR_7->irq = VAR_6->irq;

   }
  }
 }

 if (VAR_5)
  FUNC_6();
}
