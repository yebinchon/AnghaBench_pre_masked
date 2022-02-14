
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lck_rw_t ;
typedef int lck_grp_t ;
typedef int lck_attr_t ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *) ;

lck_rw_t *
FUNC_3(
 lck_grp_t *VAR_0,
 lck_attr_t *VAR_1) {
 lck_rw_t *VAR_2;

 if ((VAR_2 = (lck_rw_t *)FUNC_1(sizeof(lck_rw_t))) != 0) {
  FUNC_0(VAR_2, sizeof(lck_rw_t));
  FUNC_2(VAR_2, VAR_0, VAR_1);
 }

 return(VAR_2);
}
