
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int dummy; } ;
struct dmar_domain {int flags; int iommu_bmp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 struct intel_iommu** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct intel_iommu *FUNC_2(struct dmar_domain *VAR_4)
{
 int VAR_5;


 FUNC_0(VAR_4->flags & VAR_1);
 FUNC_0(VAR_4->flags & VAR_0);

 VAR_5 = FUNC_1(VAR_4->iommu_bmp, VAR_3);
 if (VAR_5 < 0 || VAR_5 >= VAR_3)
  return ((void*)0);

 return VAR_2[VAR_5];
}
