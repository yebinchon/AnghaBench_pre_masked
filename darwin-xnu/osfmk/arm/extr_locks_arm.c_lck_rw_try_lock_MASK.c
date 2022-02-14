
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lck_rw_type_t ;
typedef int lck_rw_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;

boolean_t
FUNC_3(
 lck_rw_t *VAR_3,
 lck_rw_type_t VAR_4)
{
 if (VAR_4 == VAR_2)
  return FUNC_1(VAR_3);
 else if (VAR_4 == VAR_1)
  return FUNC_0(VAR_3);
 else
  FUNC_2("lck_rw_try_lock(): Invalid rw lock type: %x", VAR_4);
 return VAR_0;
}
