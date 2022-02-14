
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int host_t ;
typedef scalar_t__ host_priv_t ;
typedef int host_info_t ;
typedef int host_flavor_t ;


 int FUNC_0 (int ,int ,int ,int *) ;

kern_return_t
FUNC_1(host_priv_t VAR_0, host_flavor_t VAR_1, host_info_t VAR_2, mach_msg_type_number_t * VAR_3)
{
 return (FUNC_0((host_t)VAR_0, VAR_1, VAR_2, VAR_3));
}
