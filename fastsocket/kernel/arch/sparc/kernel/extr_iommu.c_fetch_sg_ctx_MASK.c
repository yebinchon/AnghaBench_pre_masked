
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dma_address; } ;
struct iommu {int page_table_map_base; int * page_table; scalar_t__ iommu_ctxflush; } ;
typedef int iopte_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct iommu *VAR_3, struct scatterlist *VAR_4)
{
 unsigned long VAR_5 = 0;

 if (VAR_3->iommu_ctxflush) {
  iopte_t *VAR_6;
  u32 VAR_7;

  VAR_7 = VAR_4->dma_address & VAR_1;
  VAR_6 = VAR_3->page_table +
   ((VAR_7 - VAR_3->page_table_map_base) >> VAR_2);

  VAR_5 = (FUNC_0(*VAR_6) & VAR_0) >> 47UL;
 }
 return VAR_5;
}
