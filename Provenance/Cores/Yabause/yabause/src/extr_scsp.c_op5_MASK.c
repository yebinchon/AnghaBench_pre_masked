
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int attenuation; size_t lfo_pos; scalar_t__ output; } ;
struct TYPE_4__ {int alfows; int alfos; int tl; } ;
struct Slot {TYPE_2__ state; TYPE_1__ regs; } ;
typedef scalar_t__ s16 ;
struct TYPE_6__ {int* saw_table; int* square_table; int* tri_table; int* noise_table; } ;


 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,scalar_t__) ;

void FUNC_1(struct Slot * VAR_1)
{
   if (VAR_1->state.attenuation > 0x3bf)
   {
      VAR_1->state.output = 0;
      return;
   }
   else
   {
      int VAR_2 = 0;
      int VAR_3 = 0;
      s16 VAR_4 = 0;

      if (VAR_1->regs.alfows == 0)
         VAR_2 = VAR_0.saw_table[VAR_1->state.lfo_pos];
      else if (VAR_1->regs.alfows == 1)
         VAR_2 = VAR_0.square_table[VAR_1->state.lfo_pos];
      else if (VAR_1->regs.alfows == 2)
         VAR_2 = VAR_0.tri_table[VAR_1->state.lfo_pos];
      else if (VAR_1->regs.alfows == 3)
         VAR_2 = VAR_0.noise_table[VAR_1->state.lfo_pos];

      VAR_3 = (((VAR_2 + 1)) >> (7 - VAR_1->regs.alfos)) << 1;

      VAR_4 = FUNC_0(VAR_1->regs.tl, VAR_1->state.attenuation + VAR_3, VAR_1->state.output);
      VAR_1->state.output = VAR_4;
   }
}
