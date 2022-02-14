
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int envelope; scalar_t__ step_count; } ;
struct Slot {TYPE_1__ state; } ;
typedef enum EnvelopeStates { ____Placeholder_EnvelopeStates } EnvelopeStates ;



void FUNC_0(struct Slot * VAR_0, enum EnvelopeStates VAR_1)
{
   VAR_0->state.envelope = VAR_1;
   VAR_0->state.step_count = 0;
}
