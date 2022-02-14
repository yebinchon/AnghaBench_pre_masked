
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ vendor; } ;
struct mite_struct {struct mite_struct* next; TYPE_1__* channels; int pcidev; int lock; } ;
struct TYPE_2__ {unsigned int channel; int done; struct mite_struct* mite; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mite_struct* FUNC_0 (int,int ) ;
 struct mite_struct* VAR_4 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int ,struct pci_dev*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 struct pci_dev *VAR_5;
 struct mite_struct *VAR_6;

 for (VAR_5 = FUNC_3(VAR_2, VAR_2, ((void*)0));
      VAR_5 != ((void*)0);
      VAR_5 = FUNC_3(VAR_2, VAR_2, VAR_5)) {
  if (VAR_5->vendor == VAR_3) {
   unsigned VAR_7;

   VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
   if (!VAR_6) {
    FUNC_4("mite: allocation failed\n");
    FUNC_2(VAR_5);
    return;
   }
   FUNC_5(&VAR_6->lock);
   VAR_6->pcidev = FUNC_1(VAR_5);
   for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
    VAR_6->channels[VAR_7].mite = VAR_6;
    VAR_6->channels[VAR_7].channel = VAR_7;
    VAR_6->channels[VAR_7].done = 1;
   }
   VAR_6->next = VAR_4;
   VAR_4 = VAR_6;
  }
 }
}
