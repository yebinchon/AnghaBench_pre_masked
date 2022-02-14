
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_urefs_t ;
typedef int mach_port_type_t ;
typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_entry_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ,int*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int *) ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;

kern_return_t
FUNC_3(
 ipc_space_t VAR_10,
 mach_port_name_t VAR_11,
 mach_port_type_t *VAR_12)
{
 mach_port_urefs_t VAR_13;
 ipc_entry_t VAR_14;
 kern_return_t VAR_15;

 if (VAR_10 == VAR_0)
  return VAR_2;

 if (VAR_11 == VAR_5)
  return VAR_1;

 if (VAR_11 == VAR_4) {
  *VAR_12 = VAR_6;
  return VAR_3;
 }

 VAR_15 = FUNC_1(VAR_10, VAR_11, &VAR_14);
 if (VAR_15 != VAR_3) {
  FUNC_2(VAR_11, 0, 0, VAR_9);
  return VAR_15;
 }


 VAR_15 = FUNC_0(VAR_10, VAR_11, VAR_14, VAR_12, &VAR_13);




        *VAR_12 &= ~(VAR_7 | VAR_8);


 return VAR_15;
}
