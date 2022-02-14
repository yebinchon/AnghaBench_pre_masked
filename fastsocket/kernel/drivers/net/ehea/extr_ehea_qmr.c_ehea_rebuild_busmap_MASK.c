
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ehea_top_bmap {struct ehea_top_bmap** dir; scalar_t__* ent; } ;
struct ehea_dir_bmap {struct ehea_dir_bmap** dir; scalar_t__* ent; } ;
struct TYPE_2__ {struct ehea_top_bmap** top; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct ehea_top_bmap*) ;

__attribute__((used)) static void FUNC_1(void)
{
 u64 VAR_4 = VAR_0;
 int VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct ehea_top_bmap *VAR_8;
  int VAR_9 = 0;

  if (!VAR_3->top[VAR_5])
   continue;
  VAR_8 = VAR_3->top[VAR_5];
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   struct ehea_dir_bmap *VAR_10;
   int VAR_11 = 0;

   if (!VAR_8->dir[VAR_6])
    continue;
   VAR_9++;
   VAR_10 = VAR_8->dir[VAR_6];
   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    if (!VAR_10->ent[VAR_7])
     continue;
    VAR_11++;
    VAR_10->ent[VAR_7] = VAR_4;
    VAR_4 += VAR_2;
   }
   if (!VAR_11) {
    VAR_8->dir[VAR_6] = ((void*)0);
    FUNC_0(VAR_10);
   }
  }
  if (!VAR_9) {
   VAR_3->top[VAR_5] = ((void*)0);
   FUNC_0(VAR_8);
  }
 }
}
