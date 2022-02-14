
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu {int page_table_map_base; int lock; int * page_table; } ;
struct TYPE_2__ {struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef int iopte_t ;
typedef int dma_addr_t ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (size_t) ;
 int FUNC_3 (struct iommu*,int,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_1, size_t VAR_2,
     void *VAR_3, dma_addr_t VAR_4)
{
 struct iommu *VAR_5;
 iopte_t *VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_2) >> VAR_0;
 VAR_5 = VAR_1->archdata.iommu;
 VAR_6 = VAR_5->page_table +
  ((VAR_4 - VAR_5->page_table_map_base) >> VAR_0);

 FUNC_4(&VAR_5->lock, VAR_7);

 FUNC_3(VAR_5, VAR_4, VAR_9);

 FUNC_5(&VAR_5->lock, VAR_7);

 VAR_8 = FUNC_2(VAR_2);
 if (VAR_8 < 10)
  FUNC_1((unsigned long)VAR_3, VAR_8);
}
