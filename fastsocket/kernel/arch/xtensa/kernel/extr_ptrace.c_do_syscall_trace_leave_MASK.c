
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int ptrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct pt_regs *VAR_3)
{
 if ((FUNC_1(VAR_1))
   && (VAR_2->ptrace & VAR_0))
  FUNC_0();
}
