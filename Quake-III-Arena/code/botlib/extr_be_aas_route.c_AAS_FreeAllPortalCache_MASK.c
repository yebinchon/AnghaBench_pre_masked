
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ aas_routingcache_t ;
struct TYPE_6__ {int numareas; TYPE_1__** portalcache; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**) ;
 TYPE_2__ VAR_0 ;

void FUNC_2(void)
{
 int VAR_1;
 aas_routingcache_t *VAR_2, *VAR_3;


 if (!VAR_0.portalcache) return;

 for (VAR_1 = 0; VAR_1 < VAR_0.numareas; VAR_1++)
 {
  for (VAR_2 = VAR_0.portalcache[VAR_1]; VAR_2; VAR_2 = VAR_3)
  {
   VAR_3 = VAR_2->next;
   FUNC_0(VAR_2);
  }
  VAR_0.portalcache[VAR_1] = ((void*)0);
 }
 FUNC_1(VAR_0.portalcache);
 VAR_0.portalcache = ((void*)0);
}
