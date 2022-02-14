
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_type; scalar_t__ it_index; } ;
struct dma_attrs {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct iommu_table *VAR_11, long VAR_12, long VAR_13,
  unsigned long VAR_14, enum dma_data_direction VAR_15,
  struct dma_attrs *VAR_16)
{
 u64 VAR_17;
 u64 VAR_18, VAR_19;

 while (VAR_13--) {
  VAR_19 = FUNC_2(VAR_14) >> VAR_7;
  VAR_18 = (VAR_19 & VAR_5) << VAR_6;

  if (VAR_11->it_type == VAR_9) {

   VAR_18 |= VAR_8|VAR_1;
   if (VAR_15 != VAR_0)
    VAR_18 |= VAR_10;
  } else {

   VAR_18 |= VAR_3;
   if (VAR_15 != VAR_0)
    VAR_18 |= VAR_4;
  }

  VAR_17 = FUNC_0((u64)VAR_11->it_index, (u64)VAR_12, VAR_18);
  if (VAR_17)
   FUNC_1("PCI_DMA: HvCallXm_setTce failed, Rc: 0x%llx\n",
     VAR_17);
  VAR_12++;
  VAR_14 += VAR_2;
 }
 return 0;
}
