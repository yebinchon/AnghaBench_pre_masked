
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_resource {scalar_t__ base; scalar_t__ length; struct pci_resource* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_resource**) ;
 int FUNC_1 (char*) ;
 struct pci_resource* FUNC_2 (int,int ) ;

__attribute__((used)) static struct pci_resource *FUNC_3(struct pci_resource **VAR_1,
    struct pci_resource **VAR_2, u32 VAR_3)
{
 struct pci_resource *VAR_4 = ((void*)0);
 struct pci_resource *VAR_5;
 struct pci_resource *VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 FUNC_1("do_pre_bridge_resource_split\n");

 if (!(*VAR_1) || !(*VAR_2))
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_1);

 if (VAR_7)
  return ((void*)0);

 if ((*VAR_1)->base != (*VAR_2)->base)
  return ((void*)0);

 if ((*VAR_1)->length == (*VAR_2)->length)
  return ((void*)0);






 VAR_5 = *VAR_1;

 if (VAR_5->length & (VAR_3 -1)) {



  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);

  if (!VAR_6)
   return ((void*)0);

  VAR_8 = (VAR_5->length | (VAR_3-1)) + 1 - VAR_3;

  VAR_6->base = VAR_5->base;
  VAR_6->length = VAR_8;

  VAR_5->length -= VAR_8;
  VAR_5->base += VAR_6->length;


  *VAR_1 = VAR_6;
  VAR_6->next = VAR_5;
 }

 if (VAR_5->length < VAR_3)
  return ((void*)0);


 if (*VAR_1 == VAR_5) {
  *VAR_1 = VAR_5->next;
 } else {
  VAR_4 = *VAR_1;
  while (VAR_4->next != VAR_5)
   VAR_4 = VAR_4->next;

  VAR_4->next = VAR_5->next;
 }
 VAR_5->next = ((void*)0);

 return VAR_5;
}
