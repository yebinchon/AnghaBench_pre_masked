
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_base; } ;
struct dma_attrs {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static int FUNC_1(struct iommu_table *VAR_7, long VAR_8,
         long VAR_9, unsigned long VAR_10,
         enum dma_data_direction VAR_11,
         struct dma_attrs *VAR_12)
{
 u64 VAR_13;
 u64 *VAR_14;
 u64 VAR_15;

 VAR_13 = VAR_2;

 if (VAR_11 != VAR_0)
  VAR_13 |= VAR_3;

 VAR_14 = ((u64 *)VAR_7->it_base) + VAR_8;

 while (VAR_9--) {

  VAR_15 = (FUNC_0(VAR_10)) >> VAR_6;
  *VAR_14 = VAR_13 | (VAR_15 & VAR_4) << VAR_5;

  VAR_10 += VAR_1;
  VAR_14++;
 }
 return 0;
}
