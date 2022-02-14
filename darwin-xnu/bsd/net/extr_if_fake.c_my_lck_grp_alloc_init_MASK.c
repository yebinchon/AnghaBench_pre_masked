
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lck_grp_t ;
typedef int lck_grp_attr_t ;


 int * FUNC_0 (char const*,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline lck_grp_t *
FUNC_3(const char * VAR_0)
{
 lck_grp_t * VAR_1;
 lck_grp_attr_t * VAR_2;

 VAR_2 = FUNC_1();
 VAR_1 = FUNC_0(VAR_0, VAR_2);
 FUNC_2(VAR_2);
 return (VAR_1);
}
