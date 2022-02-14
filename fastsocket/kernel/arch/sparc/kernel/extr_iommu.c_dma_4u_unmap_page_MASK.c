
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {scalar_t__ strbuf_enabled; } ;
struct iommu {unsigned long page_table_map_base; int lock; scalar_t__ iommu_ctxflush; int * page_table; } ;
struct dma_attrs {int dummy; } ;
struct TYPE_2__ {struct strbuf* stc; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef int iopte_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iommu*,unsigned long) ;
 int FUNC_3 (struct iommu*,unsigned long,unsigned long) ;
 int FUNC_4 (struct iommu*,int *) ;
 unsigned long FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct strbuf*,struct iommu*,unsigned long,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct device *VAR_4, dma_addr_t VAR_5,
         size_t VAR_6, enum dma_data_direction VAR_7,
         struct dma_attrs *VAR_8)
{
 struct iommu *VAR_9;
 struct strbuf *VAR_10;
 iopte_t *VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15;

 if (FUNC_10(VAR_7 == VAR_0)) {
  if (FUNC_6())
   FUNC_1(1);
  return;
 }

 VAR_9 = VAR_4->archdata.iommu;
 VAR_10 = VAR_4->archdata.stc;

 VAR_13 = FUNC_0(VAR_5 + VAR_6) - (VAR_5 & VAR_2);
 VAR_13 >>= VAR_3;
 VAR_11 = VAR_9->page_table +
  ((VAR_5 - VAR_9->page_table_map_base) >> VAR_3);
 VAR_5 &= VAR_2;

 FUNC_7(&VAR_9->lock, VAR_12);


 VAR_14 = 0;
 if (VAR_9->iommu_ctxflush)
  VAR_14 = (FUNC_5(*VAR_11) & VAR_1) >> 47UL;


 if (VAR_10->strbuf_enabled)
  FUNC_9(VAR_10, VAR_9, VAR_5, VAR_14,
        VAR_13, VAR_7);


 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
  FUNC_4(VAR_9, VAR_11 + VAR_15);

 FUNC_3(VAR_9, VAR_5, VAR_13);

 FUNC_2(VAR_9, VAR_14);

 FUNC_8(&VAR_9->lock, VAR_12);
}
