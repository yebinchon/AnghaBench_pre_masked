
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct uthread {int dummy; } ;
struct proc {int dummy; } ;
typedef int arm_saved_state_t ;
struct TYPE_5__ {scalar_t__ uthread; int syscalls_unix; int syscalls_mach; int iotier_override; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*) ;
 TYPE_1__* FUNC_1 () ;
 struct proc* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__*,struct uthread*,struct proc*) ;

__attribute__((used)) static void
FUNC_12(arm_saved_state_t *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_2);
 thread_t VAR_4 = FUNC_1();
 struct proc *VAR_5;





 FUNC_10(VAR_2);


 VAR_4->iotier_override = VAR_1;

 if (VAR_3 == (int)VAR_0) {
  FUNC_9(VAR_2);
  FUNC_8("Returned from platform_syscall()?");
 }

 FUNC_6();

 if (VAR_3 < 0) {
  if (VAR_3 == -3) {
   FUNC_4(VAR_2);
   return;
  } else if (VAR_3 == -4) {
   FUNC_5(VAR_2);
   return;
  }


  VAR_4->syscalls_mach++;
  FUNC_7(VAR_2);
 } else {

  VAR_4->syscalls_unix++;
  VAR_5 = FUNC_2(VAR_4);

  FUNC_0(VAR_5);

  FUNC_11(VAR_2, VAR_4, (struct uthread*)VAR_4->uthread, VAR_5);
 }
}
