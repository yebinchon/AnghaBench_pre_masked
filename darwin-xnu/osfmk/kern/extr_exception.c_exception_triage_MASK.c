
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_exception_data_t ;
typedef int kern_return_t ;
typedef int exception_type_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ) ;

kern_return_t
FUNC_2(
 exception_type_t VAR_0,
 mach_exception_data_t VAR_1,
 mach_msg_type_number_t VAR_2)
{
 thread_t VAR_3 = FUNC_0();
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
