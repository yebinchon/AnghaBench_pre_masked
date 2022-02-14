
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sys_mutex_t ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 () ;

err_t
FUNC_2(sys_mutex_t *VAR_3)
{
  *VAR_3 = FUNC_1();
  if (*VAR_3 == ((void*)0)) {
    FUNC_0(VAR_2, ("sys_mutex_new: out of mem\r\n"));
    return VAR_0;
  }

  FUNC_0(VAR_2, ("sys_mutex_new: m=%p\n", *VAR_3));

  return VAR_1;
}
