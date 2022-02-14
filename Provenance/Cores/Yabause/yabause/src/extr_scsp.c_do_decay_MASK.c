
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int envelope_steps_taken; int attenuation; int sample_counter; } ;
struct Slot {TYPE_1__ state; } ;


 int** VAR_0 ;
 int FUNC_0 (struct Slot*,int) ;
 scalar_t__ FUNC_1 (int,int ,struct Slot*) ;

void FUNC_2(struct Slot * VAR_1, int VAR_2)
{
   int VAR_3 = FUNC_0(VAR_1, VAR_2);
   int VAR_4 = VAR_1->state.envelope_steps_taken & 3;
   int VAR_5;

   if (VAR_3 <= 0x30)
      VAR_5 = VAR_0[0][VAR_4];
   else
      VAR_5 = VAR_0[VAR_3 - 0x30][VAR_4];

   if (FUNC_1(VAR_3, VAR_1->state.sample_counter, VAR_1))
   {
      if (VAR_1->state.attenuation < 0x3bf)
         VAR_1->state.attenuation += VAR_5;
   }
}
