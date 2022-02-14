
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_domain_info* iommu; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct dmar_domain {int dummy; } ;
struct device_domain_info {struct dmar_domain* domain; } ;



__attribute__((used)) static struct dmar_domain *
FUNC_0(struct pci_dev *VAR_0)
{
 struct device_domain_info *VAR_1;


 VAR_1 = VAR_0->dev.archdata.iommu;
 if (VAR_1)
  return VAR_1->domain;
 return ((void*)0);
}
