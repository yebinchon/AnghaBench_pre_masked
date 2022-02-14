
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int mask; } ;
struct pt_regs {scalar_t__* gprs; TYPE_2__ psw; } ;
struct TYPE_12__ {int version; int release; } ;
struct TYPE_8__ {scalar_t__ ksp; } ;
struct TYPE_11__ {TYPE_1__ thread; int pid; int comm; } ;
struct TYPE_10__ {int cpu; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_6__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int ,TYPE_4__*,void*,...) ;
 int FUNC_4 (struct pt_regs*) ;
 int FUNC_5 (struct pt_regs*) ;
 int FUNC_6 (int *,unsigned long*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 TYPE_3__* FUNC_8 (TYPE_4__*) ;

void FUNC_9(struct pt_regs *VAR_2)
{
 FUNC_1();
 FUNC_3("CPU: %d %s %s %.*s\n",
        FUNC_8(VAR_1)->cpu, FUNC_2(),
        FUNC_0()->release,
        (int)FUNC_7(FUNC_0()->version, " "),
        FUNC_0()->version);
 FUNC_3("Process %s (pid: %d, task: %p, ksp: %p)\n",
        VAR_1->comm, VAR_1->pid, VAR_1,
        (void *) VAR_1->thread.ksp);
 FUNC_5(VAR_2);

 if (!(VAR_2->psw.mask & VAR_0))
  FUNC_6(((void*)0), (unsigned long *) VAR_2->gprs[15]);
 FUNC_4(VAR_2);
}
