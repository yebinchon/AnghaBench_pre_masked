
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_table {scalar_t__ it_offset; } ;
struct dma_attrs {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;
struct TYPE_2__ {int (* tce_build ) (struct iommu_table*,unsigned long,unsigned int,unsigned long,int,struct dma_attrs*) ;int (* tce_flush ) (struct iommu_table*) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct iommu_table*,unsigned long,unsigned int) ;
 unsigned long FUNC_1 (struct device*,struct iommu_table*,unsigned int,int *,unsigned long,unsigned int) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (struct iommu_table*,unsigned long,unsigned int,unsigned long,int,struct dma_attrs*) ;
 int FUNC_4 (struct iommu_table*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static dma_addr_t FUNC_6(struct device *VAR_4, struct iommu_table *VAR_5,
         void *VAR_6, unsigned int VAR_7,
         enum dma_data_direction VAR_8,
         unsigned long VAR_9, unsigned int VAR_10,
         struct dma_attrs *VAR_11)
{
 unsigned long VAR_12;
 dma_addr_t VAR_13 = VAR_0;
 int VAR_14;

 VAR_12 = FUNC_1(VAR_4, VAR_5, VAR_7, ((void*)0), VAR_9, VAR_10);

 if (FUNC_5(VAR_12 == VAR_0))
  return VAR_0;

 VAR_12 += VAR_5->it_offset;
 VAR_13 = VAR_12 << VAR_2;


 VAR_14 = VAR_3.tce_build(VAR_5, VAR_12, VAR_7,
                               (unsigned long)VAR_6 & VAR_1,
                               VAR_8, VAR_11);






 if (FUNC_5(VAR_14)) {
  FUNC_0(VAR_5, VAR_13, VAR_7);
  return VAR_0;
 }


 if (VAR_3.tce_flush)
  VAR_3.tce_flush(VAR_5);


 FUNC_2();

 return VAR_13;
}
