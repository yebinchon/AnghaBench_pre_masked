
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_table {unsigned long it_offset; int it_map; } ;
struct iommu_pool {int lock; } ;
typedef unsigned long dma_addr_t ;
struct TYPE_2__ {int (* tce_free ) (struct iommu_table*,unsigned long,unsigned int) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long,unsigned int) ;
 struct iommu_pool* FUNC_1 (struct iommu_table*,unsigned long) ;
 int FUNC_2 (struct iommu_table*,unsigned long,unsigned int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct iommu_table*,unsigned long,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct iommu_table *VAR_2, dma_addr_t VAR_3,
   unsigned int VAR_4)
{
 unsigned long VAR_5, VAR_6;
 unsigned long VAR_7;
 struct iommu_pool *VAR_8;

 VAR_5 = VAR_3 >> VAR_0;
 VAR_6 = VAR_5 - VAR_2->it_offset;

 VAR_8 = FUNC_1(VAR_2, VAR_6);

 if (!FUNC_2(VAR_2, VAR_3, VAR_4))
  return;

 VAR_1.tce_free(VAR_2, VAR_5, VAR_4);

 FUNC_3(&(VAR_8->lock), VAR_7);
 FUNC_0(VAR_2->it_map, VAR_6, VAR_4);
 FUNC_4(&(VAR_8->lock), VAR_7);
}
