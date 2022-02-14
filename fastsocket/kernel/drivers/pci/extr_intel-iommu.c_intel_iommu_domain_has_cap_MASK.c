
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {struct dmar_domain* priv; } ;
struct dmar_domain {int iommu_snooping; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct iommu_domain *VAR_3,
          unsigned long VAR_4)
{
 struct dmar_domain *VAR_5 = VAR_3->priv;

 if (VAR_4 == VAR_0)
  return VAR_5->iommu_snooping;
 if (VAR_4 == VAR_1)
  return VAR_2;

 return 0;
}
