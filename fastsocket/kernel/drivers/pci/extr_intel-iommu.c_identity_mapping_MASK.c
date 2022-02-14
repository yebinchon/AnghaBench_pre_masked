
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_domain_info* iommu; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct device_domain_info {scalar_t__ domain; } ;


 struct device_domain_info* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_3)
{
 struct device_domain_info *VAR_4;

 if (FUNC_0(!VAR_1))
  return 0;

 VAR_4 = VAR_3->dev.archdata.iommu;
 if (VAR_4 && VAR_4 != VAR_0)
  return (VAR_4->domain == VAR_2);

 return 0;
}
