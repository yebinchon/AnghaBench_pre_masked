
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_arena {unsigned long limit; unsigned long hint; int map; } ;
struct ldc_iommu {struct iommu_arena arena; } ;


 int FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static long FUNC_5(struct ldc_iommu *VAR_0, unsigned long VAR_1)
{
 struct iommu_arena *VAR_2 = &VAR_0->arena;
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = VAR_2->limit;
 VAR_5 = VAR_2->hint;
 VAR_8 = 0;

again:
 VAR_3 = FUNC_1(VAR_2->map, VAR_7, VAR_5);
 VAR_6 = VAR_3 + VAR_1;
 if (FUNC_4(VAR_6 >= VAR_7)) {
  if (FUNC_2(VAR_8 < 1)) {
   VAR_7 = VAR_5;
   VAR_5 = 0;
   VAR_8++;
   goto again;
  } else {

   return -1;
  }
 }

 for (VAR_4 = VAR_3; VAR_4 < VAR_6; VAR_4++) {
  if (FUNC_3(VAR_4, VAR_2->map)) {
   VAR_5 = VAR_4 + 1;
   goto again;
  }
 }

 for (VAR_4 = VAR_3; VAR_4 < VAR_6; VAR_4++)
  FUNC_0(VAR_4, VAR_2->map);

 VAR_2->hint = VAR_6;

 return VAR_3;
}
