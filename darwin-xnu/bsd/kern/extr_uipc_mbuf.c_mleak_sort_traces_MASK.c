
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtrace {scalar_t__ allocs; } ;


 int VAR_0 ;
 struct mtrace** VAR_1 ;
 int VAR_2 ;
 struct mtrace* VAR_3 ;

__attribute__((used)) static void
FUNC_0()
{
 int VAR_4, VAR_5, VAR_6;
 struct mtrace *VAR_7;

 for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_1[VAR_4] = ((void*)0);

 for(VAR_4 = 0, VAR_5 = 0; VAR_5 < VAR_0 && VAR_4 < VAR_2; VAR_4++)
 {
  if (VAR_3[VAR_4].allocs <= 0)
   continue;

  VAR_1[VAR_5] = &VAR_3[VAR_4];
  for (VAR_6 = VAR_5; VAR_6 > 0; VAR_6--) {
   if (VAR_1[VAR_6]->allocs <=
       VAR_1[VAR_6-1]->allocs)
    break;

   VAR_7 = VAR_1[VAR_6-1];
   VAR_1[VAR_6-1] = VAR_1[VAR_6];
   VAR_1[VAR_6] = VAR_7;
  }
  VAR_5++;
 }

 VAR_5--;
 for(; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3[VAR_4].allocs <= VAR_1[VAR_5]->allocs)
   continue;

  VAR_1[VAR_5] = &VAR_3[VAR_4];

  for (VAR_6 = VAR_5; VAR_6 > 0; VAR_6--) {
   if (VAR_1[VAR_6]->allocs <=
       VAR_1[VAR_6-1]->allocs)
    break;

   VAR_7 = VAR_1[VAR_6-1];
   VAR_1[VAR_6-1] = VAR_1[VAR_6];
   VAR_1[VAR_6] = VAR_7;
  }
 }
}
