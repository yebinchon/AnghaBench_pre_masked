
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_resource {struct pci_resource* next; } ;



__attribute__((used)) static inline void FUNC_0(struct pci_resource **VAR_0,
       struct pci_resource *VAR_1)
{
 if (!VAR_1 || !VAR_0)
  return;
 VAR_1->next = *VAR_0;
 *VAR_0 = VAR_1;
}
