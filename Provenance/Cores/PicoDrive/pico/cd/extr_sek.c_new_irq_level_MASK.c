
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s68k_pend_ints; } ;
struct TYPE_4__ {int* s68k_regs; TYPE_1__ m; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
  int VAR_2 = 0, VAR_3;
  VAR_0->m.s68k_pend_ints &= ~(1 << VAR_1);
  VAR_3 = VAR_0->m.s68k_pend_ints;
  VAR_3 &= VAR_0->s68k_regs[0x33];
  while ((VAR_3 >>= 1)) VAR_2++;

  return VAR_2;
}
