
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dl; int rr; int d2r; int d1r; int ar; } ;
struct TYPE_3__ {int envelope_steps_taken; int attenuation; scalar_t__ envelope; int sample_counter; } ;
struct Slot {TYPE_2__ regs; TYPE_1__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int** VAR_4 ;
 int FUNC_0 (struct Slot*,scalar_t__) ;
 int FUNC_1 (struct Slot*,int ) ;
 int FUNC_2 (struct Slot*,int ) ;
 int FUNC_3 (int,int ,struct Slot*) ;

void FUNC_4(struct Slot * VAR_5)
{
   int VAR_6 = VAR_5->state.envelope_steps_taken & 3;

   if (VAR_5->state.attenuation >= 0x3bf)
      return;

   if (VAR_5->state.envelope == VAR_0)
   {
      int VAR_7 = FUNC_2(VAR_5, VAR_5->regs.ar);
      int VAR_8 = FUNC_3(VAR_7, VAR_5->state.sample_counter, VAR_5);

      if (VAR_8)
      {
         int VAR_9 = 0;

         if (VAR_7 <= 0x30)
            VAR_9 = VAR_4[0][VAR_6];
         else
            VAR_9 = VAR_4[VAR_7 - 0x30][VAR_6];

         VAR_5->state.attenuation -= ((VAR_5->state.attenuation >> VAR_9)) + 1;

         if (VAR_5->state.attenuation == 0)
            FUNC_0(VAR_5, VAR_1);
      }
   }
   else if (VAR_5->state.envelope == VAR_1)
   {
      FUNC_1(VAR_5,VAR_5->regs.d1r);

      if ((VAR_5->state.attenuation >> 5) >= VAR_5->regs.dl)
         FUNC_0(VAR_5, VAR_2);
   }
   else if (VAR_5->state.envelope == VAR_2)
      FUNC_1(VAR_5, VAR_5->regs.d2r);
   else if (VAR_5->state.envelope == VAR_3)
      FUNC_1(VAR_5, VAR_5->regs.rr);
}
