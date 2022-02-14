
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_kobject_t ;
struct TYPE_3__ {scalar_t__ ith_rpc_reply; int ith_messages; scalar_t__ ith_assertions; int * exc_actions; int * ith_special_reply_port; int ith_sself; scalar_t__ ith_self; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;

void
FUNC_5(
 thread_t VAR_2)
{
 ipc_port_t VAR_3;

 VAR_3 = FUNC_2();
 if (VAR_3 == VAR_1)
  FUNC_4("ipc_thread_init");

 VAR_2->ith_self = VAR_3;
 VAR_2->ith_sself = FUNC_3(VAR_3);
 VAR_2->ith_special_reply_port = ((void*)0);
 VAR_2->exc_actions = ((void*)0);

 FUNC_1(VAR_3, (ipc_kobject_t)VAR_2, VAR_0);





 FUNC_0(&VAR_2->ith_messages);

 VAR_2->ith_rpc_reply = VAR_1;
}
