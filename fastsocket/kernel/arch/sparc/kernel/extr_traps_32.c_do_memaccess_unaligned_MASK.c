
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int psr; scalar_t__ pc; int * u_regs; } ;
struct TYPE_3__ {scalar_t__ si_trapno; void* si_addr; int si_code; scalar_t__ si_errno; int si_signo; } ;
typedef TYPE_1__ siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,struct pt_regs*) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (struct pt_regs*) ;

void FUNC_5(struct pt_regs *VAR_5, unsigned long VAR_6, unsigned long VAR_7,
       unsigned long VAR_8)
{
 siginfo_t VAR_9;

 if(VAR_5->psr & VAR_1) {
  FUNC_2("KERNEL MNA at pc %08lx npc %08lx called by %08lx\n", VAR_6, VAR_7,
         VAR_5->u_regs[VAR_3]);
  FUNC_0("BOGUS", VAR_5);

 }





 VAR_9.si_signo = VAR_2;
 VAR_9.si_errno = 0;
 VAR_9.si_code = VAR_0;
 VAR_9.si_addr = (void *)0;
 VAR_9.si_trapno = 0;
 FUNC_3(VAR_2, &VAR_9, VAR_4);
}
