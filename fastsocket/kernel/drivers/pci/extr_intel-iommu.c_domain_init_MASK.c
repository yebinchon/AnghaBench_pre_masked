
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int ecap; int cap; } ;
struct dmar_domain {int gaw; int agaw; int iommu_coherency; int iommu_snooping; int iommu_count; struct dma_pte* pgd; int devices; int iommu_lock; int iovad; } ;
struct dma_pte {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct intel_iommu*,struct dma_pte*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;
 struct intel_iommu* FUNC_5 (struct dmar_domain*) ;
 int FUNC_6 (struct dmar_domain*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (unsigned long*,int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,unsigned long*) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct dmar_domain *VAR_4, int VAR_5)
{
 struct intel_iommu *VAR_6;
 int VAR_7, VAR_8;
 unsigned long VAR_9;

 FUNC_11(&VAR_4->iovad, VAR_0);
 FUNC_13(&VAR_4->iommu_lock);

 FUNC_6(VAR_4);


 VAR_6 = FUNC_5(VAR_4);
 if (VAR_5 > FUNC_3(VAR_6->cap))
  VAR_5 = FUNC_3(VAR_6->cap);
 VAR_4->gaw = VAR_5;
 VAR_7 = FUNC_10(VAR_5);
 VAR_8 = FUNC_15(VAR_7);
 VAR_9 = FUNC_4(VAR_6->cap);
 if (!FUNC_14(VAR_8, &VAR_9)) {

  FUNC_12("IOMMU: hardware doesn't support agaw %d\n", VAR_8);
  VAR_8 = FUNC_9(&VAR_9, 5, VAR_8);
  if (VAR_8 >= 5)
   return -VAR_1;
 }
 VAR_4->agaw = VAR_8;
 FUNC_0(&VAR_4->devices);

 if (FUNC_7(VAR_6->ecap))
  VAR_4->iommu_coherency = 1;
 else
  VAR_4->iommu_coherency = 0;

 if (FUNC_8(VAR_6->ecap))
  VAR_4->iommu_snooping = 1;
 else
  VAR_4->iommu_snooping = 0;

 VAR_4->iommu_count = 1;


 VAR_4->pgd = (struct dma_pte *)FUNC_2();
 if (!VAR_4->pgd)
  return -VAR_2;
 FUNC_1(VAR_6, VAR_4->pgd, VAR_3);
 return 0;
}
