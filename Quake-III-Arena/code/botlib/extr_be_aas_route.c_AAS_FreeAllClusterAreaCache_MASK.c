
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ aas_routingcache_t ;
struct TYPE_7__ {int numareas; } ;
typedef TYPE_2__ aas_cluster_t ;
struct TYPE_8__ {int numclusters; TYPE_1__*** clusterareacache; TYPE_2__* clusters; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__***) ;
 TYPE_3__ VAR_0 ;

void FUNC_2(void)
{
 int VAR_1, VAR_2;
 aas_routingcache_t *VAR_3, *VAR_4;
 aas_cluster_t *VAR_5;


 if (!VAR_0.clusterareacache) return;

 for (VAR_1 = 0; VAR_1 < VAR_0.numclusters; VAR_1++)
 {
  VAR_5 = &VAR_0.clusters[VAR_1];
  for (VAR_2 = 0; VAR_2 < VAR_5->numareas; VAR_2++)
  {
   for (VAR_3 = VAR_0.clusterareacache[VAR_1][VAR_2]; VAR_3; VAR_3 = VAR_4)
   {
    VAR_4 = VAR_3->next;
    FUNC_0(VAR_3);
   }
   VAR_0.clusterareacache[VAR_1][VAR_2] = ((void*)0);
  }
 }

 FUNC_1(VAR_0.clusterareacache);
 VAR_0.clusterareacache = ((void*)0);
}
