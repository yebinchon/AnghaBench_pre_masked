
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int dummy; } ;
struct dma_attrs {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct iommu_table* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iommu_table*,int ,unsigned int) ;
 unsigned int FUNC_2 (int ,size_t,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, dma_addr_t VAR_2,
          size_t VAR_3, enum dma_data_direction VAR_4,
          struct dma_attrs *VAR_5)
{
 struct iommu_table *VAR_6 = FUNC_0(VAR_1);
 unsigned int VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_0);
 FUNC_1(VAR_6, VAR_2, VAR_7);
}
