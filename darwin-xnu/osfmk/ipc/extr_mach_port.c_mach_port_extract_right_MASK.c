
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef int mach_msg_type_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_port_t ;
typedef int ipc_object_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int *) ;
 int FUNC_3 (int ) ;

kern_return_t
FUNC_4(
 ipc_space_t VAR_5,
 mach_port_name_t VAR_6,
 mach_msg_type_name_t VAR_7,
 ipc_port_t *VAR_8,
 mach_msg_type_name_t *VAR_9)
{
 kern_return_t VAR_10;

 if (VAR_5 == VAR_0)
  return VAR_2;

 if (!FUNC_0(VAR_7))
  return VAR_3;

 if (!FUNC_1(VAR_6)) {





  return VAR_1;
 }

 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7, (ipc_object_t *) VAR_8);

 if (VAR_10 == VAR_4)
  *VAR_9 = FUNC_3(VAR_7);
 return VAR_10;
}
