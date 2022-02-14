
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct iommu_domain {struct dmar_domain* priv; } ;
struct dmar_domain {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct dmar_domain*,struct pci_dev*) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct iommu_domain *VAR_0,
          struct device *VAR_1)
{
 struct dmar_domain *VAR_2 = VAR_0->priv;
 struct pci_dev *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_3);
}
