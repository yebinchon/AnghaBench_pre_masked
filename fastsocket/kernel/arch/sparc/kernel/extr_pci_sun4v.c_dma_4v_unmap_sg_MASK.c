
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {unsigned long dma_address; unsigned int dma_length; } ;
struct pci_pbm_info {int devhandle; } ;
struct iommu {unsigned long page_table_map_base; int lock; } ;
struct dma_attrs {int dummy; } ;
struct TYPE_2__ {struct pci_pbm_info* host_controller; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned long) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_2 (unsigned long,unsigned int,int ) ;
 int FUNC_3 (struct iommu*,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (int ,int ,unsigned long) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_3, struct scatterlist *VAR_4,
       int VAR_5, enum dma_data_direction VAR_6,
       struct dma_attrs *VAR_7)
{
 struct pci_pbm_info *VAR_8;
 struct scatterlist *VAR_9;
 struct iommu *VAR_10;
 unsigned long VAR_11;
 u32 VAR_12;

 FUNC_0(VAR_6 == VAR_0);

 VAR_10 = VAR_3->archdata.iommu;
 VAR_8 = VAR_3->archdata.host_controller;
 VAR_12 = VAR_8->devhandle;

 FUNC_6(&VAR_10->lock, VAR_11);

 VAR_9 = VAR_4;
 while (VAR_5--) {
  dma_addr_t VAR_13 = VAR_9->dma_address;
  unsigned int VAR_14 = VAR_9->dma_length;
  unsigned long VAR_15, VAR_16;

  if (!VAR_14)
   break;
  VAR_15 = FUNC_2(VAR_13, VAR_14, VAR_2);
  FUNC_3(VAR_10, VAR_13, VAR_15);

  VAR_16 = ((VAR_13 - VAR_10->page_table_map_base) >> VAR_1);
  while (VAR_15) {
   unsigned long VAR_17;

   VAR_17 = FUNC_4(VAR_12, FUNC_1(0, VAR_16),
          VAR_15);
   VAR_16 += VAR_17;
   VAR_15 -= VAR_17;
  }

  VAR_9 = FUNC_5(VAR_9);
 }

 FUNC_7(&VAR_10->lock, VAR_11);
}
