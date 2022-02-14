
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct iommu {int lock; scalar_t__ page_table_map_base; } ;
struct TYPE_2__ {int numa_node; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (unsigned long) ;
 struct page* FUNC_2 (int,int ,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (size_t) ;
 long FUNC_5 (unsigned long) ;
 long FUNC_6 () ;
 int FUNC_7 (struct device*,int,long) ;
 long FUNC_8 (struct device*,struct iommu*,unsigned long,int *) ;
 int FUNC_9 (struct iommu*,scalar_t__,unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (char*,int ,unsigned long) ;
 scalar_t__ FUNC_13 (struct page*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void *FUNC_18(struct device *VAR_6, size_t VAR_7,
       dma_addr_t *VAR_8, gfp_t VAR_9)
{
 unsigned long VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct iommu *VAR_15;
 struct page *VAR_16;
 void *VAR_17;
 long VAR_18;
 int VAR_19;

 VAR_7 = FUNC_0(VAR_7);
 VAR_11 = FUNC_4(VAR_7);
 if (FUNC_17(VAR_11 >= VAR_4))
  return ((void*)0);

 VAR_13 = VAR_7 >> VAR_3;

 VAR_19 = VAR_6->archdata.numa_node;
 VAR_16 = FUNC_2(VAR_19, VAR_9, VAR_11);
 if (FUNC_17(!VAR_16))
  return ((void*)0);

 VAR_12 = (unsigned long) FUNC_13(VAR_16);
 FUNC_12((char *)VAR_12, 0, VAR_5 << VAR_11);

 VAR_15 = VAR_6->archdata.iommu;

 FUNC_15(&VAR_15->lock, VAR_10);
 VAR_18 = FUNC_8(VAR_6, VAR_15, VAR_13, ((void*)0));
 FUNC_16(&VAR_15->lock, VAR_10);

 if (FUNC_17(VAR_18 == VAR_0))
  goto range_alloc_fail;

 *VAR_8 = (VAR_15->page_table_map_base +
        (VAR_18 << VAR_3));
 VAR_17 = (void *) VAR_12;
 VAR_12 = FUNC_1(VAR_12);

 FUNC_11(VAR_10);

 FUNC_7(VAR_6,
     (VAR_1 |
      VAR_2),
     VAR_18);

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  long VAR_20 = FUNC_5(VAR_12 + (VAR_14 * VAR_5));
  if (FUNC_17(VAR_20 < 0L))
   goto iommu_map_fail;
 }

 if (FUNC_17(FUNC_6() < 0L))
  goto iommu_map_fail;

 FUNC_10(VAR_10);

 return VAR_17;

iommu_map_fail:

 FUNC_14(&VAR_15->lock);
 FUNC_9(VAR_15, *VAR_8, VAR_13);
 FUNC_16(&VAR_15->lock, VAR_10);

range_alloc_fail:
 FUNC_3(VAR_12, VAR_11);
 return ((void*)0);
}
