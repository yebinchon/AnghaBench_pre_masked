
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct pci_dev {int dummy; } ;


 struct resource* FUNC_0 (struct pci_dev*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct resource*) ;

void *FUNC_3(struct pci_dev *VAR_0)
{
 struct resource *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return ((void*)0);

 return FUNC_1(VAR_1->start, FUNC_2(VAR_1));
}
