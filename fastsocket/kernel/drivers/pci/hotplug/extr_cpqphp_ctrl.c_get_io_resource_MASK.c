
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_resource {int length; int base; struct pci_resource* next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_resource**) ;
 struct pci_resource* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct pci_resource**) ;

__attribute__((used)) static struct pci_resource *FUNC_3(struct pci_resource **VAR_1, u32 VAR_2)
{
 struct pci_resource *VAR_3;
 struct pci_resource *VAR_4;
 struct pci_resource *VAR_5;
 u32 VAR_6;

 if (!(*VAR_1))
  return ((void*)0);

 if (FUNC_0(VAR_1))
  return ((void*)0);

 if (FUNC_2(VAR_1))
  return ((void*)0);

 for (VAR_4 = *VAR_1; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->length < VAR_2)
   continue;

  if (VAR_4->base & (VAR_2 - 1)) {



   VAR_6 = (VAR_4->base | (VAR_2-1)) + 1;


   if ((VAR_4->length - (VAR_6 - VAR_4->base)) < VAR_2)
    continue;

   VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);

   if (!VAR_5)
    return ((void*)0);

   VAR_5->base = VAR_4->base;
   VAR_5->length = VAR_6 - VAR_4->base;
   VAR_4->base = VAR_6;
   VAR_4->length -= VAR_5->length;


   VAR_5->next = VAR_4->next;
   VAR_4->next = VAR_5;
  }


  if (VAR_4->length > VAR_2) {



   VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);

   if (!VAR_5)
    return ((void*)0);

   VAR_5->base = VAR_4->base + VAR_2;
   VAR_5->length = VAR_4->length - VAR_2;
   VAR_4->length = VAR_2;


   VAR_5->next = VAR_4->next;
   VAR_4->next = VAR_5;
  }


  if (VAR_4->base & 0x300L)
   continue;




  if (*VAR_1 == VAR_4) {
   *VAR_1 = VAR_4->next;
  } else {
   VAR_3 = *VAR_1;
   while (VAR_3->next != VAR_4)
    VAR_3 = VAR_3->next;

   VAR_3->next = VAR_4->next;
  }
  VAR_4->next = ((void*)0);
  break;
 }

 return VAR_4;
}
