
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {scalar_t__ strbuf_enabled; } ;
struct scatterlist {unsigned int dma_length; int dma_address; } ;
struct iommu {unsigned long page_table_map_base; int lock; int * page_table; } ;
struct dma_attrs {int dummy; } ;
struct TYPE_2__ {struct strbuf* stc; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef int iopte_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (struct iommu*,struct scatterlist*) ;
 int FUNC_2 (struct iommu*,unsigned long) ;
 unsigned long FUNC_3 (int ,unsigned int,int ) ;
 int FUNC_4 (struct iommu*,int ,unsigned long) ;
 int FUNC_5 (struct iommu*,int *) ;
 struct scatterlist* FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct strbuf*,struct iommu*,int ,unsigned long,unsigned long,int) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_4, struct scatterlist *VAR_5,
       int VAR_6, enum dma_data_direction VAR_7,
       struct dma_attrs *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 struct scatterlist *VAR_11;
 struct strbuf *VAR_12;
 struct iommu *VAR_13;

 FUNC_0(VAR_7 == VAR_0);

 VAR_13 = VAR_4->archdata.iommu;
 VAR_12 = VAR_4->archdata.stc;

 VAR_10 = FUNC_1(VAR_13, VAR_5);

 FUNC_7(&VAR_13->lock, VAR_9);

 VAR_11 = VAR_5;
 while (VAR_6--) {
  dma_addr_t VAR_14 = VAR_11->dma_address;
  unsigned int VAR_15 = VAR_11->dma_length;
  unsigned long VAR_16, VAR_17;
  iopte_t *VAR_18;
  int VAR_19;

  if (!VAR_15)
   break;
  VAR_16 = FUNC_3(VAR_14, VAR_15, VAR_3);
  FUNC_4(VAR_13, VAR_14, VAR_16);

  VAR_17 = ((VAR_14 - VAR_13->page_table_map_base)
    >> VAR_2);
  VAR_18 = VAR_13->page_table + VAR_17;

  VAR_14 &= VAR_1;
  if (VAR_12->strbuf_enabled)
   FUNC_9(VAR_12, VAR_13, VAR_14, VAR_10,
         VAR_16, VAR_7);

  for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++)
   FUNC_5(VAR_13, VAR_18 + VAR_19);

  VAR_11 = FUNC_6(VAR_11);
 }

 FUNC_2(VAR_13, VAR_10);

 FUNC_8(&VAR_13->lock, VAR_9);
}
