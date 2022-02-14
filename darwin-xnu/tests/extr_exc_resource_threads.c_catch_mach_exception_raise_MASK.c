
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int mach_port_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_exception_data_t ;
typedef int kern_return_t ;
typedef int exception_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;

kern_return_t
FUNC_5(mach_port_t VAR_4,
                           mach_port_t VAR_5,
                           mach_port_t VAR_6,
                           exception_type_t VAR_7,
                           mach_exception_data_t VAR_8,
                           mach_msg_type_number_t VAR_9)
{
#pragma unused(exception_port, thread, task, code, code_count)
 pid_t VAR_10;
 FUNC_4(VAR_6, &VAR_10);
 FUNC_0(VAR_7, VAR_0, "exception type");
 FUNC_1(FUNC_3(VAR_10, VAR_2), "kill");
 FUNC_2(VAR_3);
 return VAR_1;
}
