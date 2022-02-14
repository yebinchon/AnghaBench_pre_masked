
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lck_rw_type_t ;
typedef int lck_rw_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;

void
FUNC_3(
 lck_rw_t *VAR_2,
 lck_rw_type_t VAR_3)
{
 if (VAR_3 == VAR_1)
  FUNC_1(VAR_2);
 else if (VAR_3 == VAR_0)
  FUNC_0(VAR_2);
 else
  FUNC_2("lck_rw_unlock(): Invalid RW lock type: %d", VAR_3);
}
