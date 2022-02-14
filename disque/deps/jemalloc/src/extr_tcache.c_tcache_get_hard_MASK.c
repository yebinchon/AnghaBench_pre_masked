
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int tcache_t ;
typedef int arena_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

tcache_t *
FUNC_6(tsd_t *VAR_0)
{
 arena_t *VAR_1;

 if (!FUNC_2()) {
  if (FUNC_4(VAR_0))
   FUNC_3(0);
  return (((void*)0));
 }
 VAR_1 = FUNC_0(VAR_0, ((void*)0));
 if (FUNC_5(VAR_1 == ((void*)0)))
  return (((void*)0));
 return (FUNC_1(VAR_0, VAR_1));
}
