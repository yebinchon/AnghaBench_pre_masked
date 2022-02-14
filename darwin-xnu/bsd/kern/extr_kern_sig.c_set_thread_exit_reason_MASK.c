
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {scalar_t__ uu_exit_reason; } ;
struct task {int dummy; } ;
typedef int * proc_t ;
typedef scalar_t__ os_reason_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct task*) ;
 struct uthread* FUNC_2 (void*) ;
 struct task* FUNC_3 (void*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(void *VAR_1, void *VAR_2, boolean_t VAR_3)
{
 struct uthread *VAR_4 = FUNC_2(VAR_1);
 struct task *VAR_5 = ((void*)0);
 proc_t VAR_6 = ((void*)0);

 os_reason_t VAR_7 = (os_reason_t)VAR_2;

 if (VAR_7 == VAR_0)
  return;

 if (!VAR_3) {
  VAR_5 = FUNC_3(VAR_1);
  VAR_6 = (proc_t)(FUNC_1(VAR_5));

  FUNC_5(VAR_6);
 }

 if (VAR_4->uu_exit_reason == VAR_0) {
  VAR_4->uu_exit_reason = VAR_7;
 } else {

  FUNC_4(VAR_7);
 }

 if (!VAR_3) {
  FUNC_0(VAR_6 != ((void*)0));
  FUNC_6(VAR_6);
 }
}
