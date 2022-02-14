
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dma_length; int dma_address; } ;
struct iommu_table {int dummy; } ;
struct dma_attrs {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* tce_flush ) (struct iommu_table*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iommu_table*,int ,unsigned int) ;
 unsigned int FUNC_2 (int ,int ,int ) ;
 TYPE_1__ VAR_2 ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct iommu_table*) ;

void FUNC_5(struct iommu_table *VAR_3, struct scatterlist *VAR_4,
  int VAR_5, enum dma_data_direction VAR_6,
  struct dma_attrs *VAR_7)
{
 struct scatterlist *VAR_8;

 FUNC_0(VAR_6 == VAR_0);

 if (!VAR_3)
  return;

 VAR_8 = VAR_4;
 while (VAR_5--) {
  unsigned int VAR_9;
  dma_addr_t VAR_10 = VAR_8->dma_address;

  if (VAR_8->dma_length == 0)
   break;
  VAR_9 = FUNC_2(VAR_10, VAR_8->dma_length,
      VAR_1);
  FUNC_1(VAR_3, VAR_10, VAR_9);
  VAR_8 = FUNC_3(VAR_8);
 }





 if (VAR_2.tce_flush)
  VAR_2.tce_flush(VAR_3);
}
