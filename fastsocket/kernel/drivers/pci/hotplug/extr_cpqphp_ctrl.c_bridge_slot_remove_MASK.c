
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pci_func {int* config_space; size_t bus; struct pci_func* next; } ;


 struct pci_func** VAR_0 ;
 int FUNC_0 (struct pci_func*) ;
 int FUNC_1 (struct pci_func*) ;

__attribute__((used)) static int FUNC_2(struct pci_func *VAR_1)
{
 u8 VAR_2, VAR_3;
 u8 VAR_4;
 struct pci_func *VAR_5;

 VAR_3 = (VAR_1->config_space[0x06] >> 8) & 0xFF;
 VAR_2 = (VAR_1->config_space[0x06] >> 16) & 0xFF;

 for (VAR_4 = VAR_3; VAR_4 <= VAR_2; VAR_4++) {
  VAR_5 = VAR_0[VAR_4];

  while (!FUNC_1(VAR_5))
   VAR_5 = VAR_0[VAR_4];
 }

 VAR_5 = VAR_0[VAR_1->bus];

 if (VAR_5 == ((void*)0))
  return 1;

 if (VAR_5 == VAR_1) {
  VAR_0[VAR_1->bus] = VAR_1->next;
  goto out;
 }

 while ((VAR_5->next != VAR_1) && (VAR_5->next != ((void*)0)))
  VAR_5 = VAR_5->next;

 if (VAR_5->next != VAR_1)
  return 2;
 VAR_5->next = VAR_1->next;
out:
 FUNC_0(VAR_1);
 return 0;
}
