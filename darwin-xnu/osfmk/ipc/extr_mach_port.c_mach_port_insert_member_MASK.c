
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
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
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ,scalar_t__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int,int ) ;

kern_return_t
FUNC_11(
 ipc_space_t VAR_8,
 mach_port_name_t VAR_9,
 mach_port_name_t VAR_10)
{
 ipc_object_t VAR_11;
 ipc_object_t VAR_12;
 kern_return_t VAR_13;
 uint64_t VAR_14;
 uint64_t VAR_15;

 if (VAR_8 == VAR_1)
  return VAR_3;

 if (!FUNC_0(VAR_9) || !FUNC_0(VAR_10))
  return VAR_2;

 VAR_14 = FUNC_8(((void*)0));
 VAR_15 = FUNC_10(((void*)0), 10,
          VAR_7);
 VAR_13 = FUNC_6(VAR_8, VAR_10);
 if (VAR_13 != VAR_4)
  goto done;


 VAR_13 = FUNC_4(VAR_8,
          VAR_9, VAR_6, &VAR_11,
          VAR_10, VAR_5, &VAR_12);
 if (VAR_13 != VAR_4)
  goto done;


 FUNC_2(VAR_12 != VAR_0);
 FUNC_2(VAR_11 != VAR_0);

 FUNC_1(VAR_13 = FUNC_5((ipc_pset_t)VAR_12, (ipc_port_t)VAR_11,
         &VAR_14, &VAR_15));

 FUNC_3(VAR_12);
 FUNC_3(VAR_11);

 done:

 FUNC_7(VAR_14);
 FUNC_9(VAR_15);

 return VAR_13;
}
