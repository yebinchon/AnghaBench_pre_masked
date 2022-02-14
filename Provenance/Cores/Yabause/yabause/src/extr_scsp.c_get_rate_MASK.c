
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int krs; int fns; int oct; } ;
struct Slot {TYPE_1__ regs; } ;
typedef int s32 ;



s32 FUNC_0(struct Slot * VAR_0, int VAR_1)
{
   s32 VAR_2 = 0;

   if (VAR_0->regs.krs == 0xf)
      VAR_2 = VAR_1 * 2;
   else
   {
      VAR_2 = (VAR_0->regs.krs * 2) + (VAR_1 * 2) + ((VAR_0->regs.fns >> 9) & 1);
      VAR_2 = (8 ^ VAR_0->regs.oct) + (VAR_2 - 8);
   }

   if (VAR_2 <= 0)
      return 0;

   if (VAR_2 >= 0x3c)
      return 0x3c;

   return VAR_2;
}
