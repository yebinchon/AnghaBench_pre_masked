
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int areanum; int frontcluster; scalar_t__* clusterareanum; } ;
typedef TYPE_2__ aas_portal_t ;
struct TYPE_7__ {int numportals; int firstportal; scalar_t__ numareas; scalar_t__ numreachabilityareas; } ;
typedef TYPE_3__ aas_cluster_t ;
struct TYPE_8__ {int numareas; int* portalindex; TYPE_2__* portals; TYPE_3__* clusters; TYPE_1__* areasettings; } ;
struct TYPE_5__ {int cluster; scalar_t__ clusterareanum; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_4__ VAR_0 ;

void FUNC_1(int VAR_1)
{
 int VAR_2, VAR_3;
 aas_cluster_t *VAR_4;
 aas_portal_t *VAR_5;

 VAR_0.clusters[VAR_1].numareas = 0;
 VAR_0.clusters[VAR_1].numreachabilityareas = 0;

 for (VAR_2 = 1; VAR_2 < VAR_0.numareas; VAR_2++)
 {

  if (VAR_0.areasettings[VAR_2].cluster != VAR_1) continue;

  if (!FUNC_0(VAR_2)) continue;

  VAR_0.areasettings[VAR_2].clusterareanum = VAR_0.clusters[VAR_1].numareas;

  VAR_0.clusters[VAR_1].numareas++;
  VAR_0.clusters[VAR_1].numreachabilityareas++;
 }

 VAR_4 = &VAR_0.clusters[VAR_1];
 for (VAR_2 = 0; VAR_2 < VAR_4->numportals; VAR_2++)
 {
  VAR_3 = VAR_0.portalindex[VAR_4->firstportal + VAR_2];
  VAR_5 = &VAR_0.portals[VAR_3];
  if (!FUNC_0(VAR_5->areanum)) continue;
  if (VAR_5->frontcluster == VAR_1)
  {
   VAR_5->clusterareanum[0] = VAR_4->numareas++;
   VAR_0.clusters[VAR_1].numreachabilityareas++;
  }
  else
  {
   VAR_5->clusterareanum[1] = VAR_4->numareas++;
   VAR_0.clusters[VAR_1].numreachabilityareas++;
  }
 }

 for (VAR_2 = 1; VAR_2 < VAR_0.numareas; VAR_2++)
 {

  if (VAR_0.areasettings[VAR_2].cluster != VAR_1) continue;

  if (FUNC_0(VAR_2)) continue;

  VAR_0.areasettings[VAR_2].clusterareanum = VAR_0.clusters[VAR_1].numareas;

  VAR_0.clusters[VAR_1].numareas++;
 }

 VAR_4 = &VAR_0.clusters[VAR_1];
 for (VAR_2 = 0; VAR_2 < VAR_4->numportals; VAR_2++)
 {
  VAR_3 = VAR_0.portalindex[VAR_4->firstportal + VAR_2];
  VAR_5 = &VAR_0.portals[VAR_3];
  if (FUNC_0(VAR_5->areanum)) continue;
  if (VAR_5->frontcluster == VAR_1)
  {
   VAR_5->clusterareanum[0] = VAR_4->numareas++;
  }
  else
  {
   VAR_5->clusterareanum[1] = VAR_4->numareas++;
  }
 }
}
