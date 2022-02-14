
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lck_mtx_t ;
typedef int lck_grp_t ;
typedef int lck_attr_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;

lck_mtx_t *
FUNC_2(
     lck_grp_t * VAR_0,
     lck_attr_t * VAR_1)
{
 lck_mtx_t *VAR_2;

 if ((VAR_2 = (lck_mtx_t *) FUNC_0(sizeof(lck_mtx_t))) != 0)
  FUNC_1(VAR_2, VAR_0, VAR_1);

 return (VAR_2);
}
