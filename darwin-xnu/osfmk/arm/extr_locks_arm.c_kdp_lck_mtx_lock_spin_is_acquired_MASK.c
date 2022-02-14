
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lck_mtx_t ;
typedef int boolean_t ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 uintptr_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 uintptr_t FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

boolean_t
FUNC_3(lck_mtx_t *VAR_5)
{
 uintptr_t VAR_6;

 if (VAR_4) {
  FUNC_2("panic: spinlock acquired check done outside of kernel debugger");
 }
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == VAR_2)
  return VAR_0;
 if (FUNC_0(VAR_6) || (VAR_6 & VAR_1))
  return VAR_3;
 return VAR_0;
}
