
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ const sa; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0(const u32 VAR_2, int* VAR_3, int * VAR_4)
{
   int VAR_5 = 0;
   *VAR_3 = 0;
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   {
      if (VAR_1[VAR_5].sa == VAR_2)
      {
         *VAR_3 = 1;
         break;
      }
   }

   *VAR_4 = VAR_5;
}
