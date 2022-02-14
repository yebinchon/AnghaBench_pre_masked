
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int frontarea; int backarea; } ;
typedef TYPE_4__ aas_face_t ;
struct TYPE_11__ {int numfaces; int firstface; } ;
typedef TYPE_5__ aas_area_t ;
struct TYPE_12__ {int numareas; TYPE_3__* areasettings; TYPE_2__* reachability; TYPE_4__* faces; int * faceindex; TYPE_5__* areas; TYPE_1__* clusters; } ;
struct TYPE_9__ {int cluster; int contents; int numreachableareas; int firstreachablearea; int clusterareanum; } ;
struct TYPE_8__ {int areanum; } ;
struct TYPE_7__ {int numareas; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(int VAR_5, int VAR_6)
{
 aas_area_t *VAR_7;
 aas_face_t *VAR_8;
 int VAR_9, VAR_10;


 if (VAR_5 <= 0 || VAR_5 >= VAR_1.numareas)
 {
  FUNC_0("AAS_FloodClusterAreas_r: areanum out of range");
  return VAR_3;
 }

 if (VAR_1.areasettings[VAR_5].cluster > 0)
 {
  if (VAR_1.areasettings[VAR_5].cluster == VAR_6) return VAR_4;



  FUNC_0("cluster %d touched cluster %d at area %d\r\n",
    VAR_6, VAR_1.areasettings[VAR_5].cluster, VAR_5);
  return VAR_3;
 }

 if (VAR_1.areasettings[VAR_5].contents & VAR_0)
 {
  return FUNC_1(VAR_5, VAR_6);
 }

 VAR_1.areasettings[VAR_5].cluster = VAR_6;
 VAR_1.areasettings[VAR_5].clusterareanum =
    VAR_1.clusters[VAR_6].numareas;

 VAR_1.clusters[VAR_6].numareas++;

 VAR_7 = &VAR_1.areas[VAR_5];

 if (!VAR_2)
 {
  for (VAR_10 = 0; VAR_10 < VAR_7->numfaces; VAR_10++)
  {
   VAR_9 = FUNC_2(VAR_1.faceindex[VAR_7->firstface + VAR_10]);
   VAR_8 = &VAR_1.faces[VAR_9];
   if (VAR_8->frontarea == VAR_5)
   {
    if (VAR_8->backarea) if (!FUNC_3(VAR_8->backarea, VAR_6)) return VAR_3;
   }
   else
   {
    if (VAR_8->frontarea) if (!FUNC_3(VAR_8->frontarea, VAR_6)) return VAR_3;
   }
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_1.areasettings[VAR_5].numreachableareas; VAR_10++)
 {
  if (!VAR_1.reachability[
     VAR_1.areasettings[VAR_5].firstreachablearea + VAR_10].areanum)
  {
   continue;
  }
  if (!FUNC_3(VAR_1.reachability[
    VAR_1.areasettings[VAR_5].firstreachablearea + VAR_10].areanum, VAR_6)) return VAR_3;
 }
 return VAR_4;
}
