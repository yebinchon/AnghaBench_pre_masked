
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct page {int dummy; } ;
struct iommu {unsigned long page_table_map_base; int lock; } ;
struct dma_attrs {int dummy; } ;
struct TYPE_2__ {struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (unsigned long) ;
 long FUNC_3 (unsigned long) ;
 long FUNC_4 () ;
 int FUNC_5 (struct device*,unsigned long,long) ;
 long FUNC_6 (struct device*,struct iommu*,unsigned long,int *) ;
 int FUNC_7 (struct iommu*,unsigned long,unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 scalar_t__ FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static dma_addr_t FUNC_16(struct device *VAR_8, struct page *VAR_9,
      unsigned long VAR_10, size_t VAR_11,
      enum dma_data_direction VAR_12,
      struct dma_attrs *VAR_13)
{
 struct iommu *VAR_14;
 unsigned long VAR_15, VAR_16, VAR_17;
 unsigned long VAR_18, VAR_19;
 u32 VAR_20, VAR_21;
 unsigned long VAR_22;
 long VAR_23;

 VAR_14 = VAR_8->archdata.iommu;

 if (FUNC_15(VAR_12 == VAR_1))
  goto bad;

 VAR_17 = (unsigned long)(FUNC_10(VAR_9) + VAR_10);
 VAR_16 = FUNC_0(VAR_17 + VAR_11) - (VAR_17 & VAR_5);
 VAR_16 >>= VAR_6;

 FUNC_13(&VAR_14->lock, VAR_15);
 VAR_23 = FUNC_6(VAR_8, VAR_14, VAR_16, ((void*)0));
 FUNC_14(&VAR_14->lock, VAR_15);

 if (FUNC_15(VAR_23 == VAR_0))
  goto bad;

 VAR_20 = (VAR_14->page_table_map_base +
      (VAR_23 << VAR_6));
 VAR_21 = VAR_20 | (VAR_17 & ~VAR_5);
 VAR_19 = FUNC_2(VAR_17 & VAR_5);
 VAR_22 = VAR_3;
 if (VAR_12 != VAR_2)
  VAR_22 |= VAR_4;

 FUNC_9(VAR_15);

 FUNC_5(VAR_8, VAR_22, VAR_23);

 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++, VAR_19 += VAR_7) {
  long VAR_24 = FUNC_3(VAR_19);
  if (FUNC_15(VAR_24 < 0L))
   goto iommu_map_fail;
 }
 if (FUNC_15(FUNC_4() < 0L))
  goto iommu_map_fail;

 FUNC_8(VAR_15);

 return VAR_21;

bad:
 if (FUNC_11())
  FUNC_1(1);
 return VAR_0;

iommu_map_fail:

 FUNC_12(&VAR_14->lock);
 FUNC_7(VAR_14, VAR_20, VAR_16);
 FUNC_14(&VAR_14->lock, VAR_15);

 return VAR_0;
}
