
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int gaw; struct dma_pte* pgd; scalar_t__ max_addr; scalar_t__ iommu_snooping; scalar_t__ iommu_coherency; scalar_t__ iommu_count; int devices; int agaw; int iommu_lock; int iovad; } ;
struct dma_pte {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct dmar_domain*,struct dma_pte*,int ) ;
 int FUNC_3 (struct dmar_domain*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dmar_domain *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_5(&VAR_3->iovad, VAR_0);
 FUNC_6(&VAR_3->iommu_lock);

 FUNC_3(VAR_3);


 VAR_3->gaw = VAR_4;
 VAR_5 = FUNC_4(VAR_4);
 VAR_3->agaw = FUNC_7(VAR_5);

 FUNC_0(&VAR_3->devices);

 VAR_3->iommu_count = 0;
 VAR_3->iommu_coherency = 0;
 VAR_3->iommu_snooping = 0;
 VAR_3->max_addr = 0;


 VAR_3->pgd = (struct dma_pte *)FUNC_1();
 if (!VAR_3->pgd)
  return -VAR_1;
 FUNC_2(VAR_3, VAR_3->pgd, VAR_2);
 return 0;
}
