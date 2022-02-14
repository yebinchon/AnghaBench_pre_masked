
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int flags; int iommu_bmp; scalar_t__ id; } ;


 int VAR_0 ;
 struct dmar_domain* FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static struct dmar_domain *FUNC_2(void)
{
 struct dmar_domain *VAR_2;

 VAR_2 = FUNC_0();
 if (!VAR_2)
  return ((void*)0);

 VAR_2->id = VAR_1++;
 FUNC_1(VAR_2->iommu_bmp, 0, sizeof(VAR_2->iommu_bmp));
 VAR_2->flags = VAR_0;

 return VAR_2;
}
