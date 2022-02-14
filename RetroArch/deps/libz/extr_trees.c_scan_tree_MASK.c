
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ush ;
struct TYPE_7__ {TYPE_1__* bl_tree; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_8__ {int Len; } ;
typedef TYPE_3__ ct_data ;
struct TYPE_6__ {scalar_t__ Freq; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_0 (deflate_state *VAR_3, ct_data *VAR_4, int VAR_5)
{
   int VAR_6;
   int VAR_7 = -1;
   int VAR_8;
   int VAR_9 = VAR_4[0].Len;
   int VAR_10 = 0;
   int VAR_11 = 7;
   int VAR_12 = 4;

   if (VAR_9 == 0) VAR_11 = 138, VAR_12 = 3;
   VAR_4[VAR_5+1].Len = (ush)0xffff;

   for (VAR_6 = 0; VAR_6 <= VAR_5; VAR_6++) {
      VAR_8 = VAR_9; VAR_9 = VAR_4[VAR_6+1].Len;
      if (++VAR_10 < VAR_11 && VAR_8 == VAR_9) {
         continue;
      } else if (VAR_10 < VAR_12) {
         VAR_3->bl_tree[VAR_8].Freq += VAR_10;
      } else if (VAR_8 != 0) {
         if (VAR_8 != VAR_7) VAR_3->bl_tree[VAR_8].Freq++;
         VAR_3->bl_tree[VAR_2].Freq++;
      } else if (VAR_10 <= 10) {
         VAR_3->bl_tree[VAR_1].Freq++;
      } else {
         VAR_3->bl_tree[VAR_0].Freq++;
      }
      VAR_10 = 0; VAR_7 = VAR_8;
      if (VAR_9 == 0) {
         VAR_11 = 138, VAR_12 = 3;
      } else if (VAR_8 == VAR_9) {
         VAR_11 = 6, VAR_12 = 3;
      } else {
         VAR_11 = 7, VAR_12 = 4;
      }
   }
}
