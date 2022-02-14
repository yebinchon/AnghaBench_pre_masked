
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {struct dmar_domain* priv; } ;
struct dmar_domain {int dummy; } ;


 int FUNC_0 (struct dmar_domain*) ;

__attribute__((used)) static void FUNC_1(struct iommu_domain *VAR_0)
{
 struct dmar_domain *VAR_1 = VAR_0->priv;

 VAR_0->priv = ((void*)0);
 FUNC_0(VAR_1);
}
