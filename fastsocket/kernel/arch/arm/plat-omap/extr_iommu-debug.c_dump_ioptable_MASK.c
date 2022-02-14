
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu {int page_table_lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int* FUNC_1 (struct iommu*,int ) ;
 int* FUNC_2 (int*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct iommu *VAR_5, char *VAR_6, ssize_t VAR_7)
{
 int VAR_8;
 u32 *VAR_9;
 char *VAR_10 = VAR_6;

 FUNC_3(&VAR_5->page_table_lock);

 VAR_9 = FUNC_1(VAR_5, 0);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++, VAR_9++) {
  int VAR_11, VAR_12;
  u32 *VAR_13;
  u32 VAR_14;

  if (!*VAR_9)
   continue;

  if (!(*VAR_9 & VAR_1)) {
   VAR_14 = VAR_8 << VAR_0;

   VAR_12 = FUNC_0(1, VAR_14, *VAR_9);
   if (VAR_12)
    goto out;
   continue;
  }

  VAR_13 = FUNC_2(VAR_9, 0);

  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++, VAR_13++) {
   if (!*VAR_13)
    continue;

   VAR_14 = (VAR_8 << VAR_0) + (VAR_11 << VAR_2);
   VAR_12 = FUNC_0(2, VAR_14, *VAR_9);
   if (VAR_12)
    goto out;
  }
 }
out:
 FUNC_4(&VAR_5->page_table_lock);

 return VAR_10 - VAR_6;
}
