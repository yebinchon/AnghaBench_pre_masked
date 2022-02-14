
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmar_domain {int agaw; int iommu_bmp; } ;
struct TYPE_2__ {int agaw; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct dmar_domain *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2->agaw;

 VAR_3 = FUNC_0(VAR_2->iommu_bmp, VAR_1);
 for (; VAR_3 < VAR_1; ) {
  if (VAR_4 > VAR_0[VAR_3]->agaw)
   VAR_4 = VAR_0[VAR_3]->agaw;

  VAR_3 = FUNC_1(VAR_2->iommu_bmp, VAR_1, VAR_3+1);
 }

 return VAR_4;
}
