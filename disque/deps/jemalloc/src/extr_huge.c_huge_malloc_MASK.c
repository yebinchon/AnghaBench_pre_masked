
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int tcache_t ;
typedef int arena_t ;


 int VAR_0 ;
 void* FUNC_0 (int *,int *,size_t,int ,int,int *) ;
 size_t FUNC_1 (size_t) ;

void *
FUNC_2(tsd_t *VAR_1, arena_t *VAR_2, size_t VAR_3, bool VAR_4,
    tcache_t *VAR_5)
{
 size_t VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 == 0) {

  return (((void*)0));
 }

 return (FUNC_0(VAR_1, VAR_2, VAR_6, VAR_0, VAR_4, VAR_5));
}
