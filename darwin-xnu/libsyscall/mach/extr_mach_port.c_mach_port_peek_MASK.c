
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_seqno_t ;
typedef int mach_port_name_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_msg_trailer_type_t ;
typedef int mach_msg_trailer_info_t ;
typedef int mach_msg_size_t ;
typedef int mach_msg_id_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;


 int FUNC_0 (int ,int ,int ,int *,int *,int *,int ,int *) ;

kern_return_t
FUNC_1(
 ipc_space_t VAR_0,
 mach_port_name_t VAR_1,
 mach_msg_trailer_type_t VAR_2,
 mach_port_seqno_t *VAR_3,
 mach_msg_size_t *VAR_4,
 mach_msg_id_t *VAR_5,
 mach_msg_trailer_info_t VAR_6,
 mach_msg_type_number_t *VAR_7)
{
 kern_return_t VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2,
           VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7);

 return (VAR_8);
}
