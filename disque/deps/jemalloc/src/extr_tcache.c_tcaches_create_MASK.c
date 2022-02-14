
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_5__ {int * tcache; struct TYPE_5__* next; } ;
typedef TYPE_1__ tcaches_t ;
typedef int tcache_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (int *,int ) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

bool
FUNC_3(tsd_t *VAR_4, unsigned *VAR_5)
{
 tcache_t *VAR_6;
 tcaches_t *VAR_7;

 if (VAR_1 == ((void*)0)) {
  VAR_1 = FUNC_1(sizeof(tcache_t *) *
      (VAR_0+1));
  if (VAR_1 == ((void*)0))
   return (1);
 }

 if (VAR_2 == ((void*)0) && VAR_3 > VAR_0)
  return (1);
 VAR_6 = FUNC_2(VAR_4, FUNC_0());
 if (VAR_6 == ((void*)0))
  return (1);

 if (VAR_2 != ((void*)0)) {
  VAR_7 = VAR_2;
  VAR_2 = VAR_2->next;
  VAR_7->tcache = VAR_6;
  *VAR_5 = VAR_7 - VAR_1;
 } else {
  VAR_7 = &VAR_1[VAR_3];
  VAR_7->tcache = VAR_6;
  *VAR_5 = VAR_3;
  VAR_3++;
 }

 return (0);
}
