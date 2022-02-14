
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu {int page_table_lock; } ;


 int FUNC_0 (struct iommu*,int ) ;
 size_t FUNC_1 (struct iommu*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

size_t FUNC_4(struct iommu *VAR_0, u32 VAR_1)
{
 size_t VAR_2;

 FUNC_2(&VAR_0->page_table_lock);

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_1);

 FUNC_3(&VAR_0->page_table_lock);

 return VAR_2;
}
