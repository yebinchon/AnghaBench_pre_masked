
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef scalar_t__ ipc_port_t ;
struct TYPE_7__ {scalar_t__ ith_self; scalar_t__ ith_sself; scalar_t__ ith_assertions; scalar_t__ ith_special_reply_port; scalar_t__ ith_rpc_reply; int ith_messages; TYPE_1__* exc_actions; } ;
struct TYPE_6__ {scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;

void
FUNC_8(
 thread_t VAR_4)
{
 ipc_port_t VAR_5 = VAR_4->ith_self;

 if (VAR_5 != VAR_2) {
  int VAR_6;

  if (FUNC_0(VAR_4->ith_sself))
   FUNC_5(VAR_4->ith_sself);

  VAR_4->ith_sself = VAR_4->ith_self = VAR_2;

  if (VAR_4->exc_actions != ((void*)0)) {
   for (VAR_6 = VAR_1; VAR_6 < VAR_0; ++VAR_6) {
    if (FUNC_0(VAR_4->exc_actions[VAR_6].port))
     FUNC_5(VAR_4->exc_actions[VAR_6].port);
   }
   FUNC_7(VAR_4);
  }

  FUNC_3(VAR_5);
 }






 if (FUNC_0(VAR_4->ith_special_reply_port)) {
  FUNC_6(VAR_4, VAR_3);
 }

 FUNC_1(FUNC_2(&VAR_4->ith_messages));

 if (VAR_4->ith_rpc_reply != VAR_2)
  FUNC_4(VAR_4->ith_rpc_reply);

 VAR_4->ith_rpc_reply = VAR_2;
}
