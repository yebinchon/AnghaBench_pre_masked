
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_1__* bus; TYPE_1__* subordinate; } ;
struct dmar_domain {int dummy; } ;
struct TYPE_2__ {int number; struct pci_dev* self; } ;


 int FUNC_0 (struct dmar_domain*,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 struct pci_dev* FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_4(struct dmar_domain *VAR_0, struct pci_dev *VAR_1,
   int VAR_2)
{
 int VAR_3;
 struct pci_dev *VAR_4, *VAR_5;

 VAR_3 = FUNC_0(VAR_0, FUNC_1(VAR_1->bus),
      VAR_1->bus->number, VAR_1->devfn,
      VAR_2);
 if (VAR_3)
  return VAR_3;


 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4)
  return 0;

 VAR_5 = VAR_1->bus->self;
 while (VAR_5 != VAR_4) {
  VAR_3 = FUNC_0(VAR_0,
       FUNC_1(VAR_5->bus),
       VAR_5->bus->number,
       VAR_5->devfn, VAR_2);
  if (VAR_3)
   return VAR_3;
  VAR_5 = VAR_5->bus->self;
 }
 if (FUNC_3(VAR_4))
  return FUNC_0(VAR_0,
     FUNC_1(VAR_4->subordinate),
     VAR_4->subordinate->number, 0,
     VAR_2);
 else
  return FUNC_0(VAR_0,
        FUNC_1(VAR_4->bus),
        VAR_4->bus->number,
        VAR_4->devfn,
        VAR_2);
}
