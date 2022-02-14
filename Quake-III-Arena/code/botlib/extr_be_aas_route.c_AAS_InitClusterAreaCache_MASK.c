
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int aas_routingcache_t ;
struct TYPE_4__ {int numclusters; TYPE_1__* clusters; int *** clusterareacache; } ;
struct TYPE_3__ {int numareas; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(void)
{
 int VAR_1, VAR_2;
 char *VAR_3;


 for (VAR_2 = 0, VAR_1 = 0; VAR_1 < VAR_0.numclusters; VAR_1++)
 {
  VAR_2 += VAR_0.clusters[VAR_1].numareas;
 }


 VAR_3 = (char *) FUNC_0(
    VAR_0.numclusters * sizeof(aas_routingcache_t **) +
    VAR_2 * sizeof(aas_routingcache_t *));
 VAR_0.clusterareacache = (aas_routingcache_t ***) VAR_3;
 VAR_3 += VAR_0.numclusters * sizeof(aas_routingcache_t **);
 for (VAR_1 = 0; VAR_1 < VAR_0.numclusters; VAR_1++)
 {
  VAR_0.clusterareacache[VAR_1] = (aas_routingcache_t **) VAR_3;
  VAR_3 += VAR_0.clusters[VAR_1].numareas * sizeof(aas_routingcache_t *);
 }
}
