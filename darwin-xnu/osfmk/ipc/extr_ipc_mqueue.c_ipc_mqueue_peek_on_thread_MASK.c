
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int mach_msg_option_t ;
typedef TYPE_2__* ipc_mqueue_t ;
struct TYPE_7__ {int imq_messages; } ;
struct TYPE_6__ {int ith_state; TYPE_2__* ith_peekq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(
 ipc_mqueue_t VAR_3,
 mach_msg_option_t VAR_4,
 thread_t VAR_5)
{
 (void)VAR_4;
 FUNC_0(VAR_4 & VAR_1);
 FUNC_0(FUNC_2(&VAR_3->imq_messages) != VAR_0);






 FUNC_1(VAR_3);
 VAR_5->ith_peekq = VAR_3;
 VAR_5->ith_state = VAR_2;
}
