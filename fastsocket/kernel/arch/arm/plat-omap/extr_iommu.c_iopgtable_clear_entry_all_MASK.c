
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu {int page_table_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (struct iommu*) ;
 int* FUNC_2 (struct iommu*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct iommu *VAR_3)
{
 int VAR_4;

 FUNC_5(&VAR_3->page_table_lock);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  u32 VAR_5;
  u32 *VAR_6;

  VAR_5 = VAR_4 << VAR_0;
  VAR_6 = FUNC_2(VAR_3, VAR_5);

  if (!*VAR_6)
   continue;

  if (*VAR_6 & VAR_1)
   FUNC_3(FUNC_4(VAR_6, 0));

  *VAR_6 = 0;
  FUNC_0(VAR_6, VAR_6);
 }

 FUNC_1(VAR_3);

 FUNC_6(&VAR_3->page_table_lock);
}
