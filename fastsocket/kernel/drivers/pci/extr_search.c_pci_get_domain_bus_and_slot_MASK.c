
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {unsigned int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {unsigned int number; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct pci_dev* FUNC_1 (int ,int ,struct pci_dev*) ;

struct pci_dev *FUNC_2(int VAR_1, unsigned int VAR_2,
         unsigned int VAR_3)
{
 struct pci_dev *VAR_4 = ((void*)0);

 while ((VAR_4 = FUNC_1(VAR_0, VAR_0, VAR_4)) != ((void*)0)) {
  if (FUNC_0(VAR_4->bus) == VAR_1 &&
      (VAR_4->bus->number == VAR_2 && VAR_4->devfn == VAR_3))
   return VAR_4;
 }
 return ((void*)0);
}
