
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;
typedef int mach_port_right_t ;
typedef int mach_port_qos_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;


 int FUNC_0 (int ,int ,int ,int *,int *) ;

kern_return_t
FUNC_1(
 ipc_space_t VAR_0,
 mach_port_right_t VAR_1,
 mach_port_t VAR_2,
 mach_port_qos_t *VAR_3,
 mach_port_name_t *VAR_4)
{
 kern_return_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return (VAR_5);
}
