
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_index; } ;
struct dma_attrs {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 () ;
 int VAR_7 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 (struct iommu_table*,long,long) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (unsigned long) ;

__attribute__((used)) static int FUNC_8(struct iommu_table *VAR_8, long VAR_9,
    long VAR_10, unsigned long VAR_11,
    enum dma_data_direction VAR_12,
    struct dma_attrs *VAR_13)
{
 u64 VAR_14 = 0;
 u64 VAR_15, VAR_16;
 u64 VAR_17;
 int VAR_18 = 0;
 long VAR_19 = VAR_9, VAR_20 = VAR_10;

 VAR_17 = (FUNC_7(VAR_11)) >> VAR_6;
 VAR_15 = VAR_2;
 if (VAR_12 != VAR_0)
  VAR_15 |= VAR_3;

 while (VAR_10--) {
  VAR_16 = VAR_15 | (VAR_17 & VAR_4) << VAR_5;
  VAR_14 = FUNC_1((u64)VAR_8->it_index, (u64)VAR_9 << 12, VAR_16);

  if (FUNC_6(VAR_14 == VAR_1)) {
   VAR_18 = (int)VAR_14;
   FUNC_5(VAR_8, VAR_19,
                      (VAR_20 - (VAR_10 + 1)));
   break;
  }

  if (VAR_14 && FUNC_3()) {
   FUNC_2("tce_build_pSeriesLP: plpar_tce_put failed. rc=%lld\n", VAR_14);
   FUNC_2("\tindex   = 0x%llx\n", (u64)VAR_8->it_index);
   FUNC_2("\ttcenum  = 0x%llx\n", (u64)VAR_9);
   FUNC_2("\ttce val = 0x%llx\n", VAR_16 );
   FUNC_4(VAR_7, (unsigned long *)FUNC_0());
  }

  VAR_9++;
  VAR_17++;
 }
 return VAR_18;
}
