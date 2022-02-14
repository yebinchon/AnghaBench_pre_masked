
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_right_t ;
typedef int mach_port_name_t ;
typedef int mach_port_delta_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_entry_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int *) ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int ,int ) ;

kern_return_t
FUNC_4(
 ipc_space_t VAR_9,
 mach_port_name_t VAR_10,
 mach_port_right_t VAR_11,
 mach_port_delta_t VAR_12)
{
 ipc_entry_t VAR_13;
 kern_return_t VAR_14;

 if (VAR_9 == VAR_0)
  return VAR_2;

 if (VAR_11 >= VAR_5)
  return VAR_3;

 if (!FUNC_0(VAR_10)) {
  if (VAR_11 == VAR_6 ||
      VAR_11 == VAR_7)
   return VAR_4;
  return VAR_1;
 }

 VAR_14 = FUNC_2(VAR_9, VAR_10, &VAR_13);
 if (VAR_14 != VAR_4) {
  FUNC_3(VAR_10, 0, 0, VAR_8);
  return VAR_14;
 }



 VAR_14 = FUNC_1(VAR_9, VAR_10, VAR_13, VAR_11, VAR_12);
 return VAR_14;
}
