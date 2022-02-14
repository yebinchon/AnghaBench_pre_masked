
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ processor_set_name_array_t ;
typedef scalar_t__ processor_set_array_t ;
typedef int mach_port_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
typedef scalar_t__ host_priv_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int VAR_4 ;

kern_return_t
FUNC_2(host_priv_t VAR_5, processor_set_name_array_t * VAR_6, mach_msg_type_number_t * VAR_7)
{
 void * VAR_8;

 if (VAR_5 == VAR_0)
  return (VAR_1);






 VAR_8 = FUNC_1((vm_size_t)sizeof(mach_port_t));
 if (VAR_8 == 0)
  return (VAR_2);


 *((ipc_port_t *)VAR_8) = FUNC_0(&VAR_4);

 *VAR_6 = (processor_set_array_t)VAR_8;
 *VAR_7 = 1;

 return (VAR_3);
}
