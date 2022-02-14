
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semaphore_wait_signal_trap_args {int signal_name; int wait_name; } ;
typedef int kern_return_t ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

kern_return_t
FUNC_1(
 struct semaphore_wait_signal_trap_args *VAR_1)
{
 return(FUNC_0(VAR_1->wait_name, VAR_1->signal_name, VAR_0));
}
