
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ task_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_8__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

task_t
FUNC_10(ipc_port_t VAR_2)
{
 int VAR_3 = 0;

 while (FUNC_0(VAR_2)) {
  task_t VAR_4 = FUNC_2();
  task_t VAR_5;

  FUNC_5(VAR_2);
  if (!FUNC_3(VAR_2) || (FUNC_4(VAR_2) != VAR_0)) {
   FUNC_6(VAR_2);
   return VAR_1;
  }
  VAR_5 = (task_t) VAR_2->ip_kobject;
  FUNC_1(VAR_5 != VAR_1);

  if (FUNC_8(VAR_4, VAR_5)) {
   FUNC_6(VAR_2);
   return VAR_1;
  }





  if (FUNC_9(VAR_5)) {
   FUNC_6(VAR_2);
   return(VAR_5);
  }
  VAR_3++;

  FUNC_6(VAR_2);
  FUNC_7(VAR_3);
 }
 return VAR_1;
}
