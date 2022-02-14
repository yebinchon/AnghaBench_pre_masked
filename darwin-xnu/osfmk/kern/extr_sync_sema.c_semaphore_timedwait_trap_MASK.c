
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semaphore_timedwait_trap_args {int nsec; int sec; int wait_name; } ;
typedef int kern_return_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;

kern_return_t
FUNC_1(
 struct semaphore_timedwait_trap_args *VAR_1)
{

 return(FUNC_0(VAR_1->wait_name, VAR_1->sec, VAR_1->nsec, VAR_0));
}
