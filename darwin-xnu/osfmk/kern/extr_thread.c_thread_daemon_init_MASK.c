
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * thread_t ;
typedef int thread_continue_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int **) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void
FUNC_5(void)
{
 kern_return_t VAR_16;
 thread_t VAR_17 = ((void*)0);

 FUNC_3(&VAR_12, 0);
 FUNC_2(&VAR_13);
 FUNC_2(&VAR_4);
 FUNC_2(&VAR_15);
 FUNC_2(&VAR_14);
 FUNC_2(&VAR_3);

 VAR_16 = FUNC_0((thread_continue_t)VAR_11, ((void*)0), VAR_2, &VAR_17);
 if (VAR_16 != VAR_1)
  FUNC_1("thread_daemon_init: thread_terminate_daemon");

 FUNC_4(VAR_17);

 FUNC_3(&VAR_9, 0);
 FUNC_2(&VAR_10);

 VAR_16 = FUNC_0((thread_continue_t)VAR_8, ((void*)0), VAR_0, &VAR_17);
 if (VAR_16 != VAR_1)
  FUNC_1("thread_daemon_init: thread_stack_daemon");

 FUNC_4(VAR_17);

 FUNC_3(&VAR_6, 0);
 FUNC_2(&VAR_7);

 VAR_16 = FUNC_0((thread_continue_t)VAR_5, ((void*)0), VAR_2, &VAR_17);
 if (VAR_16 != VAR_1)
  FUNC_1("thread_daemon_init: thread_exception_daemon");

 FUNC_4(VAR_17);
}
