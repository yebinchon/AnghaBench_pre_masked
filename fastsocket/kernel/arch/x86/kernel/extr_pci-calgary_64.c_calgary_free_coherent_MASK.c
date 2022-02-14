
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 struct iommu_table* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct iommu_table*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1, size_t VAR_2,
      void *VAR_3, dma_addr_t VAR_4)
{
 unsigned int VAR_5;
 struct iommu_table *VAR_6 = FUNC_1(VAR_1);

 VAR_2 = FUNC_0(VAR_2);
 VAR_5 = VAR_2 >> VAR_0;

 FUNC_4(VAR_6, VAR_4, VAR_5);
 FUNC_2((unsigned long)VAR_3, FUNC_3(VAR_2));
}
