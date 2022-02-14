
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iommu_table {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (size_t) ;
 struct page* FUNC_1 (int,int ,unsigned int) ;
 int FUNC_2 (unsigned long,unsigned int) ;
 unsigned int FUNC_3 (size_t) ;
 unsigned int FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (struct device*,struct iommu_table*,void*,unsigned int,int ,unsigned long,unsigned int,int *) ;
 int FUNC_6 (void*,int ,size_t) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (char*,size_t) ;

void *FUNC_9(struct device *VAR_4, struct iommu_table *VAR_5,
      size_t VAR_6, dma_addr_t *VAR_7,
      unsigned long VAR_8, gfp_t VAR_9, int VAR_10)
{
 void *VAR_11 = ((void*)0);
 dma_addr_t VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14, VAR_15;
 struct page *VAR_16;

 VAR_6 = FUNC_0(VAR_6);
 VAR_13 = FUNC_4(VAR_6);






 if (VAR_13 >= VAR_2) {
  FUNC_8("iommu_alloc_consistent size too large: 0x%lx\n", VAR_6);
  return ((void*)0);
 }

 if (!VAR_5)
  return ((void*)0);


 VAR_16 = FUNC_1(VAR_10, VAR_9, VAR_13);
 if (!VAR_16)
  return ((void*)0);
 VAR_11 = FUNC_7(VAR_16);
 FUNC_6(VAR_11, 0, VAR_6);


 VAR_14 = VAR_6 >> VAR_3;
 VAR_15 = FUNC_3(VAR_6);
 VAR_12 = FUNC_5(VAR_4, VAR_5, VAR_11, VAR_14, VAR_0,
         VAR_8 >> VAR_3, VAR_15, ((void*)0));
 if (VAR_12 == VAR_1) {
  FUNC_2((unsigned long)VAR_11, VAR_13);
  return ((void*)0);
 }
 *VAR_7 = VAR_12;
 return VAR_11;
}
