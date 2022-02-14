
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s68k_pend_ints; } ;
struct TYPE_4__ {int* s68k_regs; TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(void)
{
  FUNC_2(VAR_0, "cd: soft reset");

  VAR_2->m.s68k_pend_ints = 0;
  FUNC_0();
  FUNC_1();




  FUNC_3(&VAR_2->s68k_regs[0x38], 0, 9);
  VAR_2->s68k_regs[0x38+9] = 0x0f;

  FUNC_4(VAR_1, 12500000/75);


}
