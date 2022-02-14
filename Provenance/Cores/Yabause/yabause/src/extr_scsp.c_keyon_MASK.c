
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sa; } ;
struct TYPE_5__ {scalar_t__ envelope; int attenuation; scalar_t__ envelope_steps_taken; scalar_t__ sample_offset; scalar_t__ step_count; scalar_t__ sample_counter; } ;
struct Slot {TYPE_1__ regs; TYPE_2__ state; } ;
struct TYPE_6__ {scalar_t__ debug_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct Slot * VAR_3)
{
   if (VAR_3->state.envelope == VAR_1)
   {
      VAR_3->state.envelope = VAR_0;
      VAR_3->state.attenuation = 0x280;
      VAR_3->state.sample_counter = 0;
      VAR_3->state.step_count = 0;
      VAR_3->state.sample_offset = 0;
      VAR_3->state.envelope_steps_taken = 0;

      if (VAR_2.debug_mode)
         FUNC_0(VAR_3->regs.sa);
   }

}
