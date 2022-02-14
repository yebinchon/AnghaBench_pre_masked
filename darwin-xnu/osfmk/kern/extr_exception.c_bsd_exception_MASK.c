
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int thread_t ;
typedef TYPE_1__* task_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_exception_data_t ;
typedef int lck_mtx_t ;
typedef scalar_t__ kern_return_t ;
typedef int exception_type_t ;
struct TYPE_3__ {int exc_actions; int itk_lock_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int *) ;

kern_return_t
FUNC_3(
 exception_type_t VAR_3,
 mach_exception_data_t VAR_4,
 mach_msg_type_number_t VAR_5)
{
 task_t VAR_6;
 lck_mtx_t *VAR_7;
 thread_t VAR_8 = FUNC_1();
 kern_return_t VAR_9;




 VAR_6 = FUNC_0();
 VAR_7 = &VAR_6->itk_lock_data;

 VAR_9 = FUNC_2(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6->exc_actions, VAR_7);

 if (VAR_9 == VAR_1 || VAR_9 == VAR_2)
  return(VAR_1);
 return(VAR_0);
}
