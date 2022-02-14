
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_func {size_t bus; struct pci_func* next; } ;


 int FUNC_0 (struct pci_func*) ;
 struct pci_func** VAR_0 ;
 int FUNC_1 (struct pci_func*) ;

__attribute__((used)) static int FUNC_2(struct pci_func * VAR_1)
{
 struct pci_func *VAR_2;

 if (VAR_1 == ((void*)0))
  return 1;

 VAR_2 = VAR_0[VAR_1->bus];
 if (VAR_2 == ((void*)0))
  return 1;

 if (VAR_2 == VAR_1) {
  VAR_0[VAR_1->bus] = VAR_1->next;
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
  return 0;
 }

 while ((VAR_2->next != VAR_1) && (VAR_2->next != ((void*)0)))
  VAR_2 = VAR_2->next;

 if (VAR_2->next == VAR_1) {
  VAR_2->next = VAR_1->next;
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
  return 0;
 } else
  return 2;
}
