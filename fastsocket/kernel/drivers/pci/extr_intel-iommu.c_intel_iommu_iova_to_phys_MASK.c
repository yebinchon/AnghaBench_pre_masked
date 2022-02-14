
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_domain {struct dmar_domain* priv; } ;
struct dmar_domain {int dummy; } ;
struct dma_pte {int dummy; } ;
typedef int phys_addr_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct dma_pte*) ;
 struct dma_pte* FUNC_1 (struct dmar_domain*,unsigned long) ;

__attribute__((used)) static phys_addr_t FUNC_2(struct iommu_domain *VAR_1,
         unsigned long VAR_2)
{
 struct dmar_domain *VAR_3 = VAR_1->priv;
 struct dma_pte *VAR_4;
 u64 VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_3, VAR_2 >> VAR_0);
 if (VAR_4)
  VAR_5 = FUNC_0(VAR_4);

 return VAR_5;
}
