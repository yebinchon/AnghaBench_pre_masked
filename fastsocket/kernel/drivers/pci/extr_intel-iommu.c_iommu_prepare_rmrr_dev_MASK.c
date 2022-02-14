
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iommu; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct dmar_rmrr_unit {scalar_t__ end_address; int base_address; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct dmar_rmrr_unit *VAR_1,
 struct pci_dev *VAR_2)
{
 if (VAR_2->dev.archdata.iommu == VAR_0)
  return 0;
 return FUNC_0(VAR_2, VAR_1->base_address,
  VAR_1->end_address + 1);
}
