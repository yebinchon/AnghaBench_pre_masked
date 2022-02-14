
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_pset_t ;
typedef int ipc_port_t ;
typedef scalar_t__ ipc_object_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ,scalar_t__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

kern_return_t
FUNC_6(
 ipc_space_t VAR_7,
 mach_port_name_t VAR_8,
 mach_port_name_t VAR_9)
{
 ipc_object_t VAR_10;
 ipc_object_t VAR_11;
 kern_return_t VAR_12;

 if (VAR_7 == VAR_1)
  return VAR_3;

 if (!FUNC_0(VAR_8) || !FUNC_0(VAR_9))
  return VAR_2;

 VAR_12 = FUNC_4(VAR_7,
          VAR_8, VAR_6, &VAR_11,
          VAR_9, VAR_5, &VAR_10);
 if (VAR_12 != VAR_4)
  return VAR_12;


 FUNC_2(VAR_10 != VAR_0);
 FUNC_2(VAR_11 != VAR_0);

 FUNC_1(VAR_12 = FUNC_5((ipc_pset_t)VAR_10, (ipc_port_t)VAR_11));

 FUNC_3(VAR_10);
 FUNC_3(VAR_11);

 return VAR_12;
}
