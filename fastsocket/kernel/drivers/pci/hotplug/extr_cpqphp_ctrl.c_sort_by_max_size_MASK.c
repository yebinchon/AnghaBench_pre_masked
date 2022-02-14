
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_resource {scalar_t__ length; struct pci_resource* next; } ;



__attribute__((used)) static int FUNC_0(struct pci_resource **VAR_0)
{
 struct pci_resource *VAR_1;
 struct pci_resource *VAR_2;
 int VAR_3 = 1;

 if (!(*VAR_0))
  return 1;

 if (!((*VAR_0)->next))
  return 0;

 while (VAR_3) {
  VAR_3 = 0;


  if (((*VAR_0)->next) &&
      ((*VAR_0)->length < (*VAR_0)->next->length)) {
   VAR_3++;
   VAR_1 = *VAR_0;
   *VAR_0 = (*VAR_0)->next;
   VAR_1->next = (*VAR_0)->next;
   (*VAR_0)->next = VAR_1;
  }

  VAR_1 = *VAR_0;

  while (VAR_1->next && VAR_1->next->next) {
   if (VAR_1->next->length < VAR_1->next->next->length) {
    VAR_3++;
    VAR_2 = VAR_1->next;
    VAR_1->next = VAR_1->next->next;
    VAR_1 = VAR_1->next;
    VAR_2->next = VAR_1->next;
    VAR_1->next = VAR_2;
   } else
    VAR_1 = VAR_1->next;
  }
 }

 return 0;
}
