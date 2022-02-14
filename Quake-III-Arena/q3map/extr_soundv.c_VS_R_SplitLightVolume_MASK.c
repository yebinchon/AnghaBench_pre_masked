
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vsound_t ;
typedef int plane_t ;
struct TYPE_7__ {scalar_t__ surfaceNum; scalar_t__ numtransFacets; int transSurfaces; int transFacets; int farplane; int cluster; int type; int facetNum; int endplane; scalar_t__ num; int facetTested; int clusterTested; } ;
typedef TYPE_1__ lightvolume_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int *,double) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_0 ;

int FUNC_4(vsound_t *VAR_1, lightvolume_t *VAR_2, plane_t *VAR_3, int VAR_4, int VAR_5)
{
 lightvolume_t VAR_6;
 int VAR_7;


 VAR_7 = FUNC_2(VAR_2, &VAR_6, VAR_3, 0.1);

 if (VAR_7 == 2)
 {
  FUNC_3(VAR_6.clusterTested, VAR_2->clusterTested, sizeof(VAR_6.clusterTested));
  FUNC_3(VAR_6.facetTested, VAR_2->facetTested, sizeof(VAR_6.facetTested));
  VAR_6.num = VAR_0++;
  VAR_6.endplane = VAR_2->endplane;
  VAR_6.surfaceNum = VAR_2->surfaceNum;
  VAR_6.facetNum = VAR_2->facetNum;
  VAR_6.type = VAR_2->type;
  VAR_6.cluster = VAR_2->cluster;
  VAR_6.farplane = VAR_2->farplane;
  if (VAR_2->numtransFacets > 0)
  {
   FUNC_3(VAR_6.transFacets, VAR_2->transFacets, sizeof(VAR_6.transFacets));
   FUNC_3(VAR_6.transSurfaces, VAR_2->transSurfaces, sizeof(VAR_6.transSurfaces));
  }
  VAR_6.numtransFacets = VAR_2->numtransFacets;


  FUNC_1(VAR_1, &VAR_6, VAR_4, VAR_5);

  if (VAR_6.surfaceNum >= 0)
  {
   FUNC_0(VAR_1, &VAR_6);
  }
 }
 return VAR_7;
}
