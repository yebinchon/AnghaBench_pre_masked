
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ task_suspension_token_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_8__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (scalar_t__) ;

task_suspension_token_t
FUNC_7(
 ipc_port_t VAR_2)
{
 task_suspension_token_t VAR_3 = VAR_1;

 if (FUNC_0(VAR_2)) {
  FUNC_4(VAR_2);

  if ( FUNC_2(VAR_2) &&
    FUNC_3(VAR_2) == VAR_0) {
   VAR_3 = (task_suspension_token_t)VAR_2->ip_kobject;
   FUNC_1(VAR_3 != VAR_1);

   FUNC_6(VAR_3);
  }

  FUNC_5(VAR_2);
 }

 return (VAR_3);
}
