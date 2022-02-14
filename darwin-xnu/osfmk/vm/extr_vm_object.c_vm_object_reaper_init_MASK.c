
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int thread_continue_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;

void
FUNC_3(void)
{
 kern_return_t VAR_3;
 thread_t VAR_4;

 VAR_3 = FUNC_0(
  (thread_continue_t) VAR_2,
  ((void*)0),
  VAR_0,
  &VAR_4);
 if (VAR_3 != VAR_1) {
  FUNC_1("failed to launch vm_object_reaper_thread kr=0x%x", VAR_3);
 }
 FUNC_2(VAR_4);
}
