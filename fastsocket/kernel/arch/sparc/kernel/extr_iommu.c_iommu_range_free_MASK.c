
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_arena {int map; } ;
struct iommu {unsigned long page_table_map_base; struct iommu_arena arena; } ;
typedef unsigned long dma_addr_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long,unsigned long) ;

void FUNC_1(struct iommu *VAR_1, dma_addr_t VAR_2, unsigned long VAR_3)
{
 struct iommu_arena *VAR_4 = &VAR_1->arena;
 unsigned long VAR_5;

 VAR_5 = (VAR_2 - VAR_1->page_table_map_base) >> VAR_0;

 FUNC_0(VAR_4->map, VAR_5, VAR_3);
}
