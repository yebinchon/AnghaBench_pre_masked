
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct iommu {unsigned long dma_addr_mask; } ;
struct TYPE_2__ {struct iommu* iommu; } ;
struct device {int * bus; TYPE_1__ archdata; } ;


 int FUNC_0 (int ,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_1, u64 VAR_2)
{
 struct iommu *VAR_3 = VAR_1->archdata.iommu;
 u64 VAR_4 = VAR_3->dma_addr_mask;

 if (VAR_2 >= (1UL << 32UL))
  return 0;

 if ((VAR_2 & VAR_4) == VAR_4)
  return 1;






 return 0;
}
