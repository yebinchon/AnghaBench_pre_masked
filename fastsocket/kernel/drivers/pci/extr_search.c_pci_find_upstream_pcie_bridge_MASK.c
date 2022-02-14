
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

struct pci_dev *
FUNC_4(struct pci_dev *VAR_1)
{
 struct pci_dev *VAR_2 = ((void*)0);

 if (FUNC_1(VAR_1))
  return ((void*)0);
 while (1) {
  if (FUNC_2(VAR_1->bus))
   break;
  VAR_1 = VAR_1->bus->self;

  if (!FUNC_1(VAR_1)) {
   VAR_2 = VAR_1;
   continue;
  }

  if (FUNC_3(VAR_1) != VAR_0) {

   FUNC_0(1);
   return ((void*)0);
  }
  return VAR_1;
 }

 return VAR_2;
}
