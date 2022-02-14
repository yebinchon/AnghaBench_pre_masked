
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ task_name_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_8__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (scalar_t__) ;

task_name_t
FUNC_7(
 ipc_port_t VAR_4)
{
 task_name_t VAR_5 = VAR_3;

 if (FUNC_0(VAR_4)) {
  FUNC_4(VAR_4);

  if ( FUNC_2(VAR_4) &&
    (FUNC_3(VAR_4) == VAR_0 ||
     FUNC_3(VAR_4) == VAR_1)) {
   VAR_5 = (task_name_t)VAR_4->ip_kobject;
   FUNC_1(VAR_5 != VAR_2);

   FUNC_6(VAR_5);
  }

  FUNC_5(VAR_4);
 }

 return (VAR_5);
}
