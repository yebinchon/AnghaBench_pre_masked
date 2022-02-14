
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_arena {unsigned long hint; unsigned long limit; int map; } ;
struct iommu {int page_table_map_base; int (* flush_all ) (struct iommu*) ;struct iommu_arena arena; } ;
struct device {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (struct device*) ;
 unsigned long FUNC_3 (int ,unsigned long,unsigned long,unsigned long,int,unsigned long,int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct iommu*) ;
 int FUNC_7 (struct iommu*) ;
 scalar_t__ FUNC_8 (int) ;

unsigned long FUNC_9(struct device *VAR_2,
    struct iommu *VAR_3,
    unsigned long VAR_4,
    unsigned long *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 struct iommu_arena *VAR_11 = &VAR_3->arena;
 int VAR_12 = 0;




 if (FUNC_8(VAR_4 == 0)) {
  if (FUNC_5())
   FUNC_1(1);
  return VAR_0;
 }

 if (VAR_5 && *VAR_5)
  VAR_8 = *VAR_5;
 else
  VAR_8 = VAR_11->hint;

 VAR_9 = VAR_11->limit;





 if (VAR_8 >= VAR_9) {
  VAR_8 = 0;
  if (VAR_3->flush_all)
   VAR_3->flush_all(VAR_3);
 }

 again:

 if (VAR_2)
  VAR_10 = FUNC_0(FUNC_2(VAR_2) + 1,
          1 << VAR_1);
 else
  VAR_10 = FUNC_0(1UL << 32, 1 << VAR_1);

 VAR_6 = FUNC_3(VAR_11->map, VAR_9, VAR_8, VAR_4,
        VAR_3->page_table_map_base >> VAR_1,
        VAR_10 >> VAR_1, 0);
 if (VAR_6 == -1) {
  if (FUNC_4(VAR_12 < 1)) {

   VAR_8 = 0;
   if (VAR_3->flush_all)
    VAR_3->flush_all(VAR_3);
   VAR_12++;
   goto again;
  } else {

   return VAR_0;
  }
 }

 VAR_7 = VAR_6 + VAR_4;

 VAR_11->hint = VAR_7;


 if (VAR_5)
  *VAR_5 = VAR_7;

 return VAR_6;
}
