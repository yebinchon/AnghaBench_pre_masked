
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_13__ {scalar_t__ ip_kobject; } ;
struct TYPE_12__ {int task; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;

thread_t
FUNC_9(
 ipc_port_t VAR_3)
{
 thread_t VAR_4 = VAR_2;

 if (FUNC_0(VAR_3)) {
  FUNC_5(VAR_3);

  if (FUNC_3(VAR_3) &&
      FUNC_4(VAR_3) == VAR_0) {
   VAR_4 = (thread_t)VAR_3->ip_kobject;
   FUNC_1(VAR_4 != VAR_2);


   if (FUNC_7(FUNC_2(), VAR_4->task) != VAR_1) {
    FUNC_6(VAR_3);
    return VAR_2;
   }

   FUNC_8(VAR_4);
  }

  FUNC_6(VAR_3);
 }

 return (VAR_4);
}
