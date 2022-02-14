
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ task_t ;
typedef int spl_t ;
typedef TYPE_1__* semaphore_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_11__ {int ip_srights; } ;
struct TYPE_10__ {scalar_t__ owner; scalar_t__ active; TYPE_2__* port; int ref_count; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,TYPE_1__*) ;

void
FUNC_13(
 semaphore_t VAR_2)
{
 uint32_t VAR_3;
 spl_t VAR_4;

 if (VAR_2 == ((void*)0))
  return;

 if (FUNC_4(&VAR_2->ref_count) > 0) {
  return;
 }







 ipc_port_t VAR_5 = VAR_2->port;

 if (FUNC_0(VAR_5)) {
  FUNC_1(!VAR_5->ip_srights);
  FUNC_2(VAR_5);
 }





 VAR_4 = FUNC_8();
 FUNC_6(VAR_2);
 for (VAR_3 = 0; VAR_2->active; VAR_3++) {
  task_t VAR_6 = VAR_2->owner;

  FUNC_1(VAR_6 != VAR_0);

  if (FUNC_10(VAR_6)) {
   FUNC_5(VAR_6, VAR_2);

   FUNC_9(VAR_4);
   FUNC_11(VAR_6);
   goto out;
  }


  FUNC_7(VAR_2);
  FUNC_9(VAR_4);
  FUNC_3(VAR_3);
  VAR_4 = FUNC_8();
  FUNC_6(VAR_2);
 }
 FUNC_7(VAR_2);
 FUNC_9(VAR_4);

 out:
 FUNC_12(VAR_1, VAR_2);
}
