
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semaphore_signal_all_trap_args {int signal_name; } ;
typedef int semaphore_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

kern_return_t
FUNC_3(
 struct semaphore_signal_all_trap_args *VAR_4)
{
 mach_port_name_t VAR_5 = VAR_4->signal_name;
 semaphore_t VAR_6;
 kern_return_t VAR_7;

 VAR_7 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_7 == VAR_1) {
  VAR_7 = FUNC_2(VAR_6,
    VAR_3,
    VAR_2);
  FUNC_1(VAR_6);
  if (VAR_7 == VAR_0)
   VAR_7 = VAR_1;
 }
 return VAR_7;
}
