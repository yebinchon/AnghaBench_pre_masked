
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {size_t step_count; int envelope_steps_taken; } ;
struct Slot {TYPE_1__ state; } ;


 int VAR_0 ;
 int** VAR_1 ;

int FUNC_0(int VAR_2, u32 VAR_3, struct Slot* VAR_4)
{
   if (VAR_3 == 0)
      return 0;

   if (VAR_2 == 0 || VAR_2 == 1)
   {
      return 0;
   }
   else if (VAR_2 >= 0x30)
   {
      if ((VAR_3 & 1) == 0)
      {
         VAR_4->state.envelope_steps_taken++;
         return 1;
      }
      else
         return 0;
   }
   else
   {
      int VAR_5 = VAR_2 - 2;

      int VAR_6 = 0;

      int VAR_7 = VAR_1[VAR_5][VAR_4->state.step_count];

      if (VAR_3 % VAR_7 == 0)
      {
         VAR_6 = 1;

         VAR_4->state.envelope_steps_taken++;
         VAR_4->state.step_count++;

         if (VAR_1[VAR_5][VAR_4->state.step_count] == VAR_0)
            VAR_4->state.step_count = 0;
      }

      return VAR_6;
   }
   return 0;
}
