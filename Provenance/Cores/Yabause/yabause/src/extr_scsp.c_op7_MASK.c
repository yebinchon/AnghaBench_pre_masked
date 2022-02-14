
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num; int lfo_counter; int sample_counter; int output; } ;
struct Slot {TYPE_1__ state; } ;
struct Scsp {int * sound_stack; } ;



void FUNC_0(struct Slot * VAR_0, struct Scsp*VAR_1)
{
   u32 VAR_2 = VAR_1->sound_stack[VAR_0->state.num + 32];
   VAR_1->sound_stack[VAR_0->state.num + 32] = VAR_0->state.output;
   VAR_1->sound_stack[VAR_0->state.num] = VAR_2;

   VAR_0->state.sample_counter++;
   VAR_0->state.lfo_counter++;
}
