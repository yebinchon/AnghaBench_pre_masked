
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef scalar_t__ user_addr_t ;
struct TYPE_9__ {int p_lflag; struct TYPE_9__* p_pptr; } ;
typedef TYPE_2__ proc_t ;
struct TYPE_10__ {scalar_t__ pc; } ;
typedef TYPE_3__ arm_saved_state_t ;
struct TYPE_8__ {scalar_t__ t_dtrace_astpc; scalar_t__ t_dtrace_scrpc; scalar_t__ t_dtrace_npc; scalar_t__ t_dtrace_pc; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int
FUNC_6(arm_saved_state_t *VAR_1)
{
 proc_t *VAR_2 = FUNC_0();
 uthread_t VAR_3 = (uthread_t)FUNC_3(FUNC_1());
 user_addr_t VAR_4 = VAR_3->t_dtrace_pc;
 user_addr_t VAR_5 = VAR_3->t_dtrace_npc;

 VAR_3->t_dtrace_pc = 0;
 VAR_3->t_dtrace_npc = 0;
 VAR_3->t_dtrace_scrpc = 0;
 VAR_3->t_dtrace_astpc = 0;






 if (VAR_2->p_lflag & VAR_0) {
  FUNC_4();
  while (VAR_2->p_lflag & VAR_0)
   VAR_2 = VAR_2->p_pptr;
  FUNC_5();
 }
        VAR_1->pc = VAR_4;

 FUNC_2(VAR_2, VAR_1, VAR_4, VAR_5);

 return (0);
}
