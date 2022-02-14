
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_state_t ;
typedef int mach_port_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_exception_data_t ;
typedef int kern_return_t ;
typedef int exception_type_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

kern_return_t
FUNC_1(mach_port_t VAR_1,
                                 exception_type_t VAR_2,
                                 const mach_exception_data_t VAR_3,
                                 mach_msg_type_number_t VAR_4,
                                 int * VAR_5,
                                 const thread_state_t VAR_6,
                                 mach_msg_type_number_t VAR_7,
                                 thread_state_t VAR_8,
                                 mach_msg_type_number_t * VAR_9)
{
#pragma unused(exception_port, exception, code, code_count, flavor, old_state, old_state_count, new_state, new_state_count)
 FUNC_0("Unsupported catch_mach_exception_raise_state");
 return VAR_0;
}
