
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_entry_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,int ) ;

kern_return_t
FUNC_4(
 ipc_space_t VAR_5,
 mach_port_name_t VAR_6)
{
 ipc_entry_t VAR_7;
 kern_return_t VAR_8;

 if (VAR_5 == VAR_0)
  return VAR_1;

 if (!FUNC_0(VAR_6))
  return VAR_2;

 VAR_8 = FUNC_2(VAR_5, VAR_6, &VAR_7);
 if (VAR_8 != VAR_2) {
  FUNC_3(VAR_6, 0, 0, VAR_4);
  return VAR_8;
 }


 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_3, 0);
 return VAR_8;
}
