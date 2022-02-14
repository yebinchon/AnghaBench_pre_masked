
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;
typedef int ipc_info_tree_name_array_t ;
typedef int ipc_info_space_t ;
typedef int ipc_info_name_array_t ;


 int FUNC_0 (int ,int *,int *,int *,int *,int *) ;

kern_return_t
FUNC_1(
 ipc_space_t VAR_0,
 ipc_info_space_t *VAR_1,
 ipc_info_name_array_t *VAR_2,
 mach_msg_type_number_t *VAR_3,
 ipc_info_tree_name_array_t *VAR_4,
 mach_msg_type_number_t *VAR_5)
{
 kern_return_t VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_5);

 return (VAR_6);
}
