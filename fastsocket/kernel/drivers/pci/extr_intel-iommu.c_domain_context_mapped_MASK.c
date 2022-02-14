
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_2__* bus; TYPE_1__* subordinate; } ;
struct intel_iommu {int dummy; } ;
struct TYPE_4__ {int number; struct pci_dev* self; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_iommu*,int ,int ) ;
 struct intel_iommu* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 struct pci_dev* FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1)
{
 int VAR_2;
 struct pci_dev *VAR_3, *VAR_4;
 struct intel_iommu *VAR_5;

 VAR_5 = FUNC_1(FUNC_2(VAR_1->bus), VAR_1->bus->number,
    VAR_1->devfn);
 if (!VAR_5)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_5, VAR_1->bus->number, VAR_1->devfn);
 if (!VAR_2)
  return VAR_2;

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3)
  return VAR_2;

 VAR_4 = VAR_1->bus->self;
 while (VAR_4 != VAR_3) {
  VAR_2 = FUNC_0(VAR_5, VAR_4->bus->number,
         VAR_4->devfn);
  if (!VAR_2)
   return VAR_2;
  VAR_4 = VAR_4->bus->self;
 }
 if (FUNC_4(VAR_3))
  return FUNC_0(VAR_5, VAR_3->subordinate->number,
          0);
 else
  return FUNC_0(VAR_5, VAR_3->bus->number,
          VAR_3->devfn);
}
