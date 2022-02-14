
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef int mach_msg_type_name_t ;
typedef int mach_msg_return_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef int ipc_object_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;

mach_msg_return_t
FUNC_4(
 ipc_space_t VAR_9,
 ipc_object_t VAR_10,
 mach_msg_type_name_t VAR_11,
 mach_port_name_t *VAR_12)
{
 kern_return_t VAR_13;

 if (!FUNC_1(VAR_10)) {
  *VAR_12 = FUNC_0(VAR_10);
  return VAR_5;
 }

 VAR_13 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_8, VAR_12);
 if (VAR_13 != VAR_2) {
  FUNC_3(VAR_10, VAR_11);

  if (VAR_13 == VAR_0)
   *VAR_12 = VAR_6;
  else {
   *VAR_12 = VAR_7;

   if (VAR_13 == VAR_1)
    return VAR_3;
   else
    return VAR_4;
  }
 }

 return VAR_5;
}
