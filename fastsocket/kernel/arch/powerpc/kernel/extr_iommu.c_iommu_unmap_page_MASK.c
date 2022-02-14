
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int dummy; } ;
struct dma_attrs {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iommu_table*,int ,unsigned int) ;
 unsigned int FUNC_2 (int ,size_t,int ) ;

void FUNC_3(struct iommu_table *VAR_2, dma_addr_t VAR_3,
        size_t VAR_4, enum dma_data_direction VAR_5,
        struct dma_attrs *VAR_6)
{
 unsigned int VAR_7;

 FUNC_0(VAR_5 == VAR_0);

 if (VAR_2) {
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_1);
  FUNC_1(VAR_2, VAR_3, VAR_7);
 }
}
