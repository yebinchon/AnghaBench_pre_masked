
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
typedef int thread_state_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,int,int ,int ) ;

kern_return_t
FUNC_2(
 thread_t VAR_1,
 int VAR_2,
 thread_state_t VAR_3,
 mach_msg_type_number_t VAR_4)
{
    if (VAR_1 == FUNC_0())
     return (VAR_0);

    return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4));

}
