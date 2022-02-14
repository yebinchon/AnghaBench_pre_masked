
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int attenuation; int lfo_counter; int lfo_pos; int waveform_phase_value; } ;
struct TYPE_4__ {int oct; int fns; size_t lfof; int plfows; int plfos; } ;
struct Slot {TYPE_2__ state; TYPE_1__ regs; } ;
struct TYPE_6__ {int* saw_table; int* square_table; int* tri_table; int* noise_table; } ;


 int* VAR_0 ;
 TYPE_3__ VAR_1 ;

void FUNC_0(struct Slot * VAR_2)
{
   u32 VAR_3 = VAR_2->regs.oct ^ 8;
   u32 VAR_4 = VAR_2->regs.fns ^ 0x400;
   u32 VAR_5 = VAR_4 << VAR_3;
   int VAR_6 = 0;
   int VAR_7 = 0;

   if (VAR_2->state.attenuation > 0x3bf)
      return;

   if (VAR_2->state.lfo_counter % VAR_0[VAR_2->regs.lfof] == 0)
   {
      VAR_2->state.lfo_counter = 0;
      VAR_2->state.lfo_pos++;

      if (VAR_2->state.lfo_pos > 0xff)
         VAR_2->state.lfo_pos = 0;
   }

   if (VAR_2->regs.plfows == 0)
      VAR_6 = VAR_1.saw_table[VAR_2->state.lfo_pos];
   else if (VAR_2->regs.plfows == 1)
      VAR_6 = VAR_1.square_table[VAR_2->state.lfo_pos];
   else if (VAR_2->regs.plfows == 2)
      VAR_6 = VAR_1.tri_table[VAR_2->state.lfo_pos];
   else if (VAR_2->regs.plfows == 3)
      VAR_6 = VAR_1.noise_table[VAR_2->state.lfo_pos];

   VAR_7 = (VAR_6 << VAR_2->regs.plfos) >> 2;

   VAR_2->state.waveform_phase_value &= (1 << 18) - 1;
   VAR_2->state.waveform_phase_value += (VAR_5 + VAR_7);
}
