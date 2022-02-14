
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef int mach_msg_type_name_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_object_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int ,int ,int ) ;

kern_return_t
FUNC_4(
 ipc_space_t VAR_5,
 mach_port_name_t VAR_6,
 ipc_port_t VAR_7,
 mach_msg_type_name_t VAR_8)
{
 if (VAR_5 == VAR_1)
  return VAR_3;

 if (!FUNC_2(VAR_6) ||
     !FUNC_1(VAR_8))
  return VAR_4;

 if (!FUNC_0((ipc_object_t) VAR_7))
  return VAR_2;

 return FUNC_3(VAR_5, (ipc_object_t) VAR_7,
           VAR_8, VAR_0, VAR_6);
}
