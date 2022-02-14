
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {unsigned int pid; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_0 (struct pt_regs*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

void
FUNC_2(struct pt_regs* VAR_5)
{
 if (!VAR_2)
  return;

 if (FUNC_1(VAR_5))
  *(unsigned int*)VAR_4 = VAR_1->pid;
 else
  *(unsigned int*)VAR_4 = 0;

 *(unsigned int*)(VAR_4 + 4) = FUNC_0(VAR_5);
 VAR_4 += 8;

 if (VAR_4 == VAR_3 + VAR_0)
  VAR_4 = VAR_3;
}
