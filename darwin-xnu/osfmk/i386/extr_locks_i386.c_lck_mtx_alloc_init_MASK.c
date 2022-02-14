
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lck_mtx_t ;
typedef int lck_grp_t ;
typedef int lck_attr_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;

lck_mtx_t *
FUNC_3(
 lck_grp_t *VAR_1,
 lck_attr_t *VAR_2)
{
 lck_mtx_t *VAR_3;




 if ((VAR_3 = (lck_mtx_t *)FUNC_0(sizeof(lck_mtx_t))) != 0)
  FUNC_1(VAR_3, VAR_1, VAR_2);

 return(VAR_3);
}
