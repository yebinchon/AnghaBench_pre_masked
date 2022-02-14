
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_port_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

kern_return_t
FUNC_5(
 ipc_space_t VAR_6,
 mach_port_name_t VAR_7,
 uint64_t VAR_8)
{

 kern_return_t VAR_9;
 ipc_port_t VAR_10;

 if (VAR_6 == VAR_0)
  return VAR_2;

 if (!FUNC_0(VAR_7))
  return VAR_1;

 VAR_9 = FUNC_2(VAR_6, VAR_7, &VAR_10);
 if (VAR_9 != VAR_3) {
  FUNC_3(VAR_7, 0, 0,
                            ((VAR_1 == VAR_9) ?
                             VAR_4 :
                             VAR_5));
  return VAR_9;
 }


 VAR_9 = FUNC_4(VAR_10, VAR_7, VAR_8);
 FUNC_1(VAR_10);

 return VAR_9;
}
