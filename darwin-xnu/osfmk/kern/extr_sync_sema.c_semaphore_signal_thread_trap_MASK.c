
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
struct semaphore_signal_thread_trap_args {scalar_t__ signal_name; scalar_t__ thread_name; } ;
typedef int semaphore_t ;
typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;

kern_return_t
FUNC_5(
 struct semaphore_signal_thread_trap_args *VAR_5)
{
 mach_port_name_t VAR_6 = VAR_5->signal_name;
 mach_port_name_t VAR_7 = VAR_5->thread_name;
 semaphore_t VAR_8;
 thread_t VAR_9;
 kern_return_t VAR_10;






 if (VAR_7 != VAR_2) {
  VAR_9 = FUNC_1(VAR_7);
  if (VAR_9 == VAR_4)
   return VAR_0;
 } else
  VAR_9 = VAR_4;

 VAR_10 = FUNC_0(VAR_6, &VAR_8);
 if (VAR_10 == VAR_1) {
  VAR_10 = FUNC_3(VAR_8,
    VAR_9,
    VAR_3);
  FUNC_2(VAR_8);
 }
 if (VAR_9 != VAR_4) {
  FUNC_4(VAR_9);
 }
 return VAR_10;
}
