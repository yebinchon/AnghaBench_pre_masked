
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_pagefault; } ;
struct lg_cpu {TYPE_2__* regs; TYPE_1__ arch; scalar_t__ ts; } ;
struct TYPE_4__ {int trapnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct lg_cpu*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;

void FUNC_8(struct lg_cpu *VAR_4)
{





 if (VAR_4->ts)
  FUNC_6(VAR_3);
 if (FUNC_0(VAR_1))
  FUNC_7(VAR_0, 0, 0);






 FUNC_5(VAR_4, FUNC_1(FUNC_3()));
  if (FUNC_0(VAR_1))
  FUNC_7(VAR_0, VAR_2, 0);







 if (VAR_4->regs->trapnum == 14)
  VAR_4->arch.last_pagefault = FUNC_4();







 else if (VAR_4->regs->trapnum == 7)
  FUNC_2();
}
