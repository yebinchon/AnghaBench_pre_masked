
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int * slot; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_2 (int *,size_t) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static void FUNC_3(s32 *VAR_7, s32 *VAR_8, u32 VAR_9)
{
   int VAR_10;

   u32 VAR_11;
   for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
      VAR_7[VAR_11] = VAR_8[VAR_11] = 0;

   VAR_5 = VAR_7;
   VAR_6 = VAR_8;
   for (VAR_10 = 0; VAR_10 < 32; VAR_10++)
      FUNC_2(&VAR_4.slot[VAR_10], VAR_9);

   if (VAR_3 != FUNC_0(VAR_2) * 2352)
   {
      if (VAR_1 > 0)
      {
         if (VAR_9 > VAR_1)
         {
            VAR_9 -= VAR_1;
            VAR_1 = 0;
         }
         else
         {
            VAR_1 -= VAR_9;
            VAR_9 = 0;
         }
      }
      if (VAR_1 == 0)
         FUNC_1(VAR_7, VAR_8, VAR_9);
   }
   if (VAR_3 == FUNC_0(VAR_2) * 2352)
      VAR_1 = VAR_0;
}
