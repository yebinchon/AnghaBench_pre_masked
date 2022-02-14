
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {scalar_t__ flags; int iommu_bmp; } ;


 struct dmar_domain* FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static struct dmar_domain *FUNC_2(void)
{
 struct dmar_domain *VAR_0;

 VAR_0 = FUNC_0();
 if (!VAR_0)
  return ((void*)0);

 FUNC_1(VAR_0->iommu_bmp, 0, sizeof(VAR_0->iommu_bmp));
 VAR_0->flags = 0;

 return VAR_0;
}
