
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int areanum; int frontcluster; int backcluster; } ;
typedef TYPE_2__ aas_portal_t ;
struct TYPE_7__ {size_t firstportal; size_t numportals; } ;
typedef TYPE_3__ aas_cluster_t ;
struct TYPE_8__ {int numportals; scalar_t__ portalindexsize; int* portalindex; TYPE_3__* clusters; TYPE_1__* areasettings; TYPE_2__* portals; } ;
struct TYPE_5__ {int cluster; int contents; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2(int VAR_5, int VAR_6)
{
 int VAR_7;
 aas_portal_t *VAR_8;
 aas_cluster_t *VAR_9;


 for (VAR_7 = 1; VAR_7 < VAR_2.numportals; VAR_7++)
 {
  if (VAR_2.portals[VAR_7].areanum == VAR_5) break;
 }

 if (VAR_7 == VAR_2.numportals)
 {
  FUNC_0("no portal of area %d", VAR_5);
  return VAR_4;
 }

 VAR_8 = &VAR_2.portals[VAR_7];

 if (VAR_8->frontcluster == VAR_6) return VAR_4;
 if (VAR_8->backcluster == VAR_6) return VAR_4;

 if (!VAR_8->frontcluster)
 {
  VAR_8->frontcluster = VAR_6;
 }

 else if (!VAR_8->backcluster)
 {
  VAR_8->backcluster = VAR_6;
 }
 else
 {

  VAR_2.areasettings[VAR_5].contents &= ~VAR_1;
  FUNC_1("portal area %d is seperating more than two clusters\r\n", VAR_5);
  return VAR_3;
 }
 if (VAR_2.portalindexsize >= VAR_0)
 {
  FUNC_0("AAS_MAX_PORTALINDEXSIZE");
  return VAR_4;
 }

 VAR_2.areasettings[VAR_5].cluster = -VAR_7;

 VAR_9 = &VAR_2.clusters[VAR_6];
 VAR_2.portalindex[VAR_9->firstportal + VAR_9->numportals] = VAR_7;
 VAR_2.portalindexsize++;
 VAR_9->numportals++;
 return VAR_4;
}
