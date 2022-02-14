
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_continue_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *,scalar_t__*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(void)
{

 FUNC_0();
 FUNC_1((thread_continue_t)VAR_2, ((void*)0),
     &VAR_1);
 if (VAR_1 == VAR_0)
  FUNC_2("audit_worker_init: Couldn't create audit_worker thread");
}
