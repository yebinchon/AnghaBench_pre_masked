
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ s32 ;
struct TYPE_3__ {int sr; int octave_shift; int krs_shift; int dr; int ar; int rr; scalar_t__ env_step_r; scalar_t__ env_step_a; scalar_t__ env_step_d; scalar_t__ env_step_s; } ;
typedef TYPE_1__ SlotState ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void FUNC_0(SlotState *VAR_2)
{
   if (VAR_2->sr)
   {
      const s32 *VAR_3 = &VAR_1[VAR_2->sr << 1];
      VAR_2->env_step_s = VAR_3[(15 - VAR_2->octave_shift)
                                    >> VAR_2->krs_shift];
   }
   else
      VAR_2->env_step_s = 0;

   if (VAR_2->dr)
   {
      const s32 *VAR_4 = &VAR_1[VAR_2->dr << 1];
      VAR_2->env_step_d = VAR_4[(15 - VAR_2->octave_shift)
                                    >> VAR_2->krs_shift];
   }
   else
      VAR_2->env_step_d = 0;

   if (VAR_2->ar)
   {
      const s32 *VAR_5 = &VAR_0[VAR_2->ar << 1];
      VAR_2->env_step_a = VAR_5[(15 - VAR_2->octave_shift)
                                    >> VAR_2->krs_shift];
   }
   else
      VAR_2->env_step_a = 0;

   if (VAR_2->rr)
   {
      const s32 *VAR_6 = &VAR_1[VAR_2->rr << 1];
      VAR_2->env_step_r = VAR_6[(15 - VAR_2->octave_shift)
                                    >> VAR_2->krs_shift];
   }
   else
      VAR_2->env_step_r = 0;
}
