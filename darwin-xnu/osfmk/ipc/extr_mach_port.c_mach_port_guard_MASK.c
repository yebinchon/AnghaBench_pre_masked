
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_port_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

kern_return_t
FUNC_5(
 ipc_space_t VAR_8,
 mach_port_name_t VAR_9,
 uint64_t VAR_10,
 boolean_t VAR_11)
{
 kern_return_t VAR_12;
 ipc_port_t VAR_13;

 if (VAR_8 == VAR_0)
  return VAR_3;

 if (!FUNC_0(VAR_9))
  return VAR_2;


 VAR_12 = FUNC_2(VAR_8, VAR_9, &VAR_13);
 if (VAR_12 != VAR_4) {
  FUNC_3(VAR_9, 0, 0,
                            ((VAR_2 == VAR_12) ?
                             VAR_6 :
                             VAR_7));
  return VAR_12;
 }


 VAR_12 = FUNC_4(VAR_13, VAR_10, VAR_11);
 FUNC_1(VAR_13);

 if (VAR_1 == VAR_12) {
  FUNC_3(VAR_9, 0, 0, VAR_5);
 }

 return VAR_12;
}
