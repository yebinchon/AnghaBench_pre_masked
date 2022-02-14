
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semaphore_signal_trap_args {int signal_name; } ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;


 int FUNC_0 (int ) ;

kern_return_t
FUNC_1(
 struct semaphore_signal_trap_args *VAR_0)
{
 mach_port_name_t VAR_1 = VAR_0->signal_name;

 return (FUNC_0(VAR_1));
}
