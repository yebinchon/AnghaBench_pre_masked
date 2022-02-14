
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcilst_struct {unsigned short vendor; unsigned short device; unsigned short pci_bus; unsigned short pci_slot; int used; struct pcilst_struct* next; } ;


 struct pcilst_struct* VAR_0 ;
 int FUNC_0 (char*,unsigned short,unsigned short) ;

int FUNC_1(unsigned short VAR_1,
         unsigned short VAR_2,
         unsigned short VAR_3,
         unsigned short VAR_4,
         struct pcilst_struct **VAR_5)
{
 struct pcilst_struct *VAR_6, *VAR_7;

 *VAR_5 = ((void*)0);
 for (VAR_6 = VAR_0; VAR_6; VAR_6 = VAR_7) {
  VAR_7 = VAR_6->next;
  if ((VAR_6->vendor == VAR_1) && (VAR_6->device == VAR_2)
      && (VAR_6->pci_bus == VAR_3)
      && (VAR_6->pci_slot == VAR_4)) {
   if (!(VAR_6->used)) {
    *VAR_5 = VAR_6;
    return 0;
   } else {
    FUNC_0(" - \nCard on requested position is used b:s %d:%d!\n",
       VAR_3, VAR_4);
    return 2;
   }
  }
 }


 return 1;
}
