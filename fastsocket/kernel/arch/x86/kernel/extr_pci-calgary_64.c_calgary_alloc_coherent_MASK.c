
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,unsigned int) ;
 scalar_t__ VAR_5 ;
 struct iommu_table* FUNC_2 (struct device*) ;
 int FUNC_3 (unsigned long,unsigned int) ;
 unsigned int FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (struct device*,struct iommu_table*,void*,unsigned int,int ) ;
 int FUNC_6 (void*,int ,size_t) ;

__attribute__((used)) static void* FUNC_7(struct device *VAR_6, size_t VAR_7,
 dma_addr_t *VAR_8, gfp_t VAR_9)
{
 void *VAR_10 = ((void*)0);
 dma_addr_t VAR_11;
 unsigned int VAR_12, VAR_13;
 struct iommu_table *VAR_14 = FUNC_2(VAR_6);

 VAR_7 = FUNC_0(VAR_7);
 VAR_12 = VAR_7 >> VAR_1;
 VAR_13 = FUNC_4(VAR_7);

 VAR_9 &= ~(VAR_2 | VAR_4 | VAR_3);


 VAR_10 = (void *)FUNC_1(VAR_9, VAR_13);
 if (!VAR_10)
  goto error;
 FUNC_6(VAR_10, 0, VAR_7);


 VAR_11 = FUNC_5(VAR_6, VAR_14, VAR_10, VAR_12, VAR_0);
 if (VAR_11 == VAR_5)
  goto free;
 *VAR_8 = VAR_11;
 return VAR_10;
free:
 FUNC_3((unsigned long)VAR_10, FUNC_4(VAR_7));
 VAR_10 = ((void*)0);
error:
 return VAR_10;
}
