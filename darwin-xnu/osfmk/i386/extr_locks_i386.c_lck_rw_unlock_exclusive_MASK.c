
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lck_rw_type_t ;
typedef int lck_rw_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__) ;

void
FUNC_2(
 lck_rw_t *VAR_1)
{
 lck_rw_type_t VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 != VAR_0)
  FUNC_1("lck_rw_unlock_exclusive(): lock held in mode: %d\n", VAR_2);
}
