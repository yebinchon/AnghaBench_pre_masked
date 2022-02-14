
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lck_grp_t ;
typedef int lck_grp_attr_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,int *) ;

lck_grp_t *
FUNC_2(
 const char* VAR_0,
 lck_grp_attr_t *VAR_1)
{
 lck_grp_t *VAR_2;

 if ((VAR_2 = (lck_grp_t *)FUNC_0(sizeof(lck_grp_t))) != 0)
  FUNC_1(VAR_2, VAR_0, VAR_1);

 return(VAR_2);
}
