
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int x86_saved_state_t ;
struct TYPE_9__ {void* rip; } ;
struct TYPE_10__ {TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;
struct TYPE_11__ {void* eip; } ;
typedef TYPE_3__ x86_saved_state32_t ;
typedef TYPE_4__* uthread_t ;
typedef void* user_addr_t ;
struct TYPE_13__ {int p_lflag; int p_pid; struct TYPE_13__* p_pptr; } ;
typedef TYPE_5__ proc_t ;
struct TYPE_12__ {scalar_t__ t_dtrace_astpc; scalar_t__ t_dtrace_scrpc; void* t_dtrace_npc; void* t_dtrace_pc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,void*,int ,void*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_3__* FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *) ;

int
FUNC_9(x86_saved_state_t *VAR_3)
{
 x86_saved_state64_t *VAR_4;
 x86_saved_state32_t *VAR_5;
 unsigned int VAR_6;

        if (FUNC_4(VAR_3)) {
                VAR_4 = FUNC_8(VAR_3);
  VAR_5 = ((void*)0);
  VAR_6 = VAR_1;
        } else {
  VAR_4 = ((void*)0);
                VAR_5 = FUNC_7(VAR_3);
  VAR_6 = VAR_0;
        }

 proc_t *VAR_7 = FUNC_0();
 uthread_t VAR_8 = (uthread_t)FUNC_3(FUNC_1());
 user_addr_t VAR_9 = VAR_8->t_dtrace_pc;
 user_addr_t VAR_10 = VAR_8->t_dtrace_npc;

 VAR_8->t_dtrace_pc = 0;
 VAR_8->t_dtrace_npc = 0;
 VAR_8->t_dtrace_scrpc = 0;
 VAR_8->t_dtrace_astpc = 0;






 FUNC_5();
 while (VAR_7->p_lflag & VAR_2)
  VAR_7 = VAR_7->p_pptr;
 FUNC_6();
 if (VAR_6 == VAR_1)
  VAR_4->isf.rip = VAR_9;
 else
  VAR_5->eip = VAR_9;

 FUNC_2(VAR_3, VAR_9, VAR_7->p_pid, VAR_10);

 return (0);
}
