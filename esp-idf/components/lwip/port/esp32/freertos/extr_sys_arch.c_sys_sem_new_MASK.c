
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int * sys_sem_t ;
typedef int err_t ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;

err_t
FUNC_4(sys_sem_t *VAR_4, u8_t VAR_5)
{
  FUNC_0("initial_count invalid (neither 0 nor 1)",
             (VAR_5 == 0) || (VAR_5 == 1));

  *VAR_4 = FUNC_2();
  if (*VAR_4 == ((void*)0)) {
      FUNC_1(VAR_2, ("sys_sem_new: out of mem\r\n"));
      return VAR_0;
  }

  if (VAR_5 == 1) {
      BaseType_t VAR_6 = FUNC_3(*VAR_4);
      FUNC_0("sys_sem_new: initial give failed", VAR_6 == VAR_3);
  }

  return VAR_1;
}
