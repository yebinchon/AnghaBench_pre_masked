
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef int mach_port_mscount_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_port_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int *) ;

kern_return_t
FUNC_4(
 ipc_space_t VAR_4,
 mach_port_name_t VAR_5,
 mach_port_mscount_t VAR_6)
{
 ipc_port_t VAR_7;
 kern_return_t VAR_8;

 if (VAR_4 == VAR_0)
  return VAR_2;

 if (!FUNC_0(VAR_5))
  return VAR_1;

 VAR_8 = FUNC_3(VAR_4, VAR_5, &VAR_7);
 if (VAR_8 != VAR_3)
  return VAR_8;


 FUNC_2(VAR_7, VAR_6);

 FUNC_1(VAR_7);
 return VAR_3;
}
