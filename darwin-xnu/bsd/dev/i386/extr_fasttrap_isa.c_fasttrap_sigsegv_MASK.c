
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* uthread_t ;
typedef int user_addr_t ;
typedef int proc_t ;
struct TYPE_4__ {int vc_thread; } ;
struct TYPE_5__ {TYPE_1__ uu_context; scalar_t__ uu_subcode; int uu_exception; int uu_siglist; int uu_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(proc_t *VAR_2, uthread_t VAR_3, user_addr_t VAR_4)
{
 FUNC_0(VAR_2);


 VAR_3->uu_code = VAR_4;
 VAR_3->uu_siglist |= FUNC_2(VAR_1);






 VAR_3->uu_exception = VAR_0;
 VAR_3->uu_subcode = 0;

 FUNC_1(VAR_2);


 FUNC_3(VAR_3->uu_context.vc_thread);
}
