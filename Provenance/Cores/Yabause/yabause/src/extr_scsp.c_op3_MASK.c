
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int address_pointer; int attenuation; int wave; int output; } ;
struct TYPE_3__ {int pcm8b; } ;
struct Slot {TYPE_2__ state; TYPE_1__ regs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(struct Slot * VAR_0)
{
   u32 VAR_1 = (VAR_0->state.address_pointer) & 0x7FFFF;

   if (VAR_0->state.attenuation > 0x3bf)
      return;

   if (!VAR_0->regs.pcm8b)
      VAR_0->state.wave = FUNC_1(VAR_1);
   else
      VAR_0->state.wave = FUNC_0(VAR_1) << 8;

   VAR_0->state.output = VAR_0->state.wave;
}
