
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lfo_fm_shift; scalar_t__ lfo_am_shift; scalar_t__ pcm8b; int outshift_l; int outshift_r; void* audiogen; scalar_t__ ssctl; } ;
typedef TYPE_1__ SlotState ;


 void****** VAR_0 ;

__attribute__((used)) static void FUNC_0(SlotState *VAR_1)
{
   if (VAR_1->ssctl)

      VAR_1->audiogen = VAR_0[0][0][0][0][0];
   else
      VAR_1->audiogen = VAR_0[VAR_1->lfo_fm_shift >= 0]
                                               [VAR_1->lfo_am_shift >= 0]
                                               [VAR_1->pcm8b == 0]
                                               [VAR_1->outshift_l != 31]
                                               [VAR_1->outshift_r != 31];
}
