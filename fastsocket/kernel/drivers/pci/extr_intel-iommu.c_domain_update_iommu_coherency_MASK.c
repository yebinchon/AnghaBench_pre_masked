
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmar_domain {int iommu_coherency; int iommu_bmp; } ;
struct TYPE_2__ {int ecap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct dmar_domain *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->iommu_bmp, VAR_1);

 VAR_2->iommu_coherency = VAR_3 < VAR_1 ? 1 : 0;

 for (; VAR_3 < VAR_1; ) {
  if (!FUNC_0(VAR_0[VAR_3]->ecap)) {
   VAR_2->iommu_coherency = 0;
   break;
  }
  VAR_3 = FUNC_2(VAR_2->iommu_bmp, VAR_1, VAR_3+1);
 }
}
