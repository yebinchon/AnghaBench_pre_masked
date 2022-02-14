
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* task_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_16__ {scalar_t__ ip_kobject; } ;
struct TYPE_15__ {int exec_token; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

task_t
FUNC_9(
 ipc_port_t VAR_2,
 uint32_t *VAR_3)
{
 task_t VAR_4 = VAR_1;

 if (FUNC_0(VAR_2)) {
  FUNC_5(VAR_2);

  if ( FUNC_3(VAR_2) &&
    FUNC_4(VAR_2) == VAR_0 ) {
   task_t VAR_5 = FUNC_2();
   VAR_4 = (task_t)VAR_2->ip_kobject;
   FUNC_1(VAR_4 != VAR_1);

   if (FUNC_7(VAR_5, VAR_4)) {
    FUNC_6(VAR_2);
    return VAR_1;
   }

   if (VAR_3) {
    *VAR_3 = VAR_4->exec_token;
   }
   FUNC_8(VAR_4);
  }

  FUNC_6(VAR_2);
 }

 return (VAR_4);
}
