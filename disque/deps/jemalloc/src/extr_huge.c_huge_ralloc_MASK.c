
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int tcache_t ;
typedef int arena_t ;


 void* FUNC_0 (int *,int *,size_t,size_t,int,int *) ;
 int FUNC_1 (void*,size_t,size_t,size_t,int) ;
 int FUNC_2 (int *,void*,size_t,int *) ;
 int FUNC_3 (void*,void*,size_t) ;

void *
FUNC_4(tsd_t *VAR_0, arena_t *VAR_1, void *VAR_2, size_t VAR_3, size_t VAR_4,
    size_t VAR_5, bool VAR_6, tcache_t *VAR_7)
{
 void *VAR_8;
 size_t VAR_9;


 if (!FUNC_1(VAR_2, VAR_3, VAR_4, VAR_4, VAR_6))
  return (VAR_2);






 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6,
     VAR_7);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 VAR_9 = (VAR_4 < VAR_3) ? VAR_4 : VAR_3;
 FUNC_3(VAR_8, VAR_2, VAR_9);
 FUNC_2(VAR_0, VAR_2, VAR_3, VAR_7);
 return (VAR_8);
}
