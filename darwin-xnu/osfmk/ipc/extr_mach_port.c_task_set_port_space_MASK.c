
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

kern_return_t
FUNC_4(
  ipc_space_t VAR_3,
  int VAR_4)
{
 kern_return_t VAR_5;

 if (VAR_3 == VAR_0)
  return VAR_1;

 FUNC_2(VAR_3);

 if (!FUNC_1(VAR_3)) {
  FUNC_3(VAR_3);
  return VAR_1;
 }

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 == VAR_2)
  FUNC_3(VAR_3);
 return VAR_5;
}
