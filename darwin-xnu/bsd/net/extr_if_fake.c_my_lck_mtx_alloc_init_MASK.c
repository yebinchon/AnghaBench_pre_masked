
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lck_mtx_t ;
typedef int lck_grp_t ;
typedef int lck_attr_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;

__attribute__((used)) static inline lck_mtx_t *
FUNC_3(lck_grp_t * VAR_0)
{
 lck_attr_t * VAR_1;
 lck_mtx_t * VAR_2;

 VAR_1 = FUNC_0();
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_1);
 return (VAR_2);
}
