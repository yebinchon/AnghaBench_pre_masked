
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ipc_importance_task_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

boolean_t
FUNC_3(ipc_importance_task_t VAR_2)
{
 if (VAR_1 == VAR_2) {
    return VAR_0;
 }
 return (!FUNC_0(VAR_2) &&
  !FUNC_1(VAR_2) &&
  !FUNC_2(VAR_2));
}
