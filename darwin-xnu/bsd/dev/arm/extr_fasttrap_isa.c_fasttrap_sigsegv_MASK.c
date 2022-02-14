
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* uthread_t ;
typedef int user_addr_t ;
typedef int proc_t ;
struct TYPE_8__ {scalar_t__ pc; } ;
typedef TYPE_3__ arm_saved_state_t ;
struct TYPE_6__ {int vc_thread; } ;
struct TYPE_7__ {TYPE_1__ uu_context; scalar_t__ uu_subcode; int uu_exception; int uu_siglist; int uu_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(proc_t *VAR_2, uthread_t VAR_3, user_addr_t VAR_4, arm_saved_state_t *VAR_5)
{







#pragma unused(p,t,addr)

 VAR_5->pc = 0;
}
