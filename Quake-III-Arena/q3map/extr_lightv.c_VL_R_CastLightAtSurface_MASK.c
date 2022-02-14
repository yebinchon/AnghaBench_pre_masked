
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlight_t ;
struct TYPE_11__ {TYPE_2__* facets; TYPE_1__* shader; } ;
typedef TYPE_3__ lsurfaceTest_t ;
struct TYPE_12__ {size_t surfaceNum; size_t facetNum; size_t numtransFacets; size_t* transSurfaces; size_t* transFacets; int* facetTested; int* clusterTested; int cluster; int farplane; int endplane; } ;
typedef TYPE_4__ lightvolume_t ;
struct TYPE_10__ {int num; } ;
struct TYPE_9__ {int surfaceFlags; int contents; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t,size_t,int *,TYPE_4__*) ;
 int FUNC_2 (int *,TYPE_4__*,int ,int ) ;
 TYPE_3__** VAR_3 ;
 int FUNC_3 (int*,int ,int) ;

void FUNC_4(vlight_t *VAR_4, lightvolume_t *VAR_5)
{
 lsurfaceTest_t *VAR_6;
 int VAR_7, VAR_8;


 FUNC_1(VAR_5->surfaceNum, VAR_5->facetNum, VAR_4, VAR_5);

 VAR_6 = VAR_3[ VAR_5->surfaceNum ];

 if ( !(VAR_6->shader->surfaceFlags & VAR_2) && !(VAR_6->shader->contents & VAR_0))
  return;

 if (VAR_5->numtransFacets >= VAR_1)
  FUNC_0("a light valume went through more than %d translucent facets", VAR_1);

 VAR_5->transSurfaces[VAR_5->numtransFacets] = VAR_5->surfaceNum;
 VAR_5->transFacets[VAR_5->numtransFacets] = VAR_5->facetNum;
 VAR_5->numtransFacets++;

 FUNC_3(VAR_5->facetTested, 0, sizeof(VAR_5->facetTested));
 for (VAR_7 = 0; VAR_7 < VAR_5->numtransFacets; VAR_7++)
 {
  VAR_6 = VAR_3[ VAR_5->transSurfaces[VAR_7] ];
  VAR_8 = VAR_6->facets[VAR_5->transFacets[VAR_7]].num;
  VAR_5->facetTested[VAR_8 >> 3] |= 1 << (VAR_8 & 7);
 }
 FUNC_3(VAR_5->clusterTested, 0, sizeof(VAR_5->clusterTested));
 VAR_5->endplane = VAR_5->farplane;
 VAR_5->surfaceNum = -1;
 VAR_5->facetNum = 0;
 FUNC_2(VAR_4, VAR_5, VAR_5->cluster, 0);
 if (VAR_5->surfaceNum >= 0)
 {
  FUNC_4(VAR_4, VAR_5);
 }
}
