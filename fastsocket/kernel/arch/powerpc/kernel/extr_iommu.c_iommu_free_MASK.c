
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_table {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* tce_flush ) (struct iommu_table*) ;} ;


 int FUNC_0 (struct iommu_table*,int ,unsigned int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct iommu_table*) ;

__attribute__((used)) static void FUNC_2(struct iommu_table *VAR_1, dma_addr_t VAR_2,
  unsigned int VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_3);





 if (VAR_0.tce_flush)
  VAR_0.tce_flush(VAR_1);
}
