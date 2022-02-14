
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int numpoints; int * points; } ;
typedef TYPE_3__ winding_t ;
struct TYPE_17__ {scalar_t__ atten_disttype; float photons; int normal; } ;
typedef TYPE_4__ vlight_t ;
typedef int vec3_t ;
struct TYPE_15__ {int normal; void* dist; } ;
struct TYPE_18__ {int numplanes; int surfaceNum; int cluster; int type; TYPE_2__ endplane; TYPE_2__ farplane; int * points; TYPE_1__* planes; } ;
typedef TYPE_5__ lightvolume_t ;
struct TYPE_19__ {int cluster; } ;
struct TYPE_14__ {int normal; void* dist; } ;


 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 float VAR_2 ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,float,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 TYPE_7__* VAR_4 ;
 float VAR_5 ;
 int FUNC_9 (TYPE_5__*,int ,int) ;
 float FUNC_10 (float) ;

void FUNC_11(vlight_t *VAR_6, winding_t *VAR_7, int VAR_8)
{
 int VAR_9;
 float VAR_10;
 lightvolume_t VAR_11;
 vec3_t VAR_12;

 if (VAR_6->atten_disttype == VAR_1)
 {

  VAR_10 = VAR_2;
 }
 else
 {
  if ( VAR_6->atten_disttype == VAR_0 )
   VAR_10 = VAR_6->photons * VAR_5;
  else
   VAR_10 = FUNC_10(VAR_6->photons);
 }

 FUNC_9(&VAR_11, 0, sizeof(lightvolume_t));
 for (VAR_9 = 0; VAR_9 < VAR_7->numpoints; VAR_9++)
 {
  FUNC_6(VAR_7->points[VAR_9], VAR_10, VAR_6->normal, VAR_11.points[VAR_9]);
  FUNC_8(VAR_7->points[(VAR_9+1)%VAR_7->numpoints], VAR_7->points[VAR_9], VAR_12);
  FUNC_0(VAR_6->normal, VAR_12, VAR_11.planes[VAR_9].normal);
  FUNC_7(VAR_11.planes[VAR_9].normal, VAR_11.planes[VAR_9].normal);
  VAR_11.planes[VAR_9].dist = FUNC_1(VAR_11.planes[VAR_9].normal, VAR_7->points[VAR_9]);
 }
 VAR_11.numplanes = VAR_7->numpoints;
 FUNC_4(VAR_6->normal, VAR_11.endplane.normal);
 FUNC_5(VAR_11.endplane.normal);
 VAR_11.endplane.dist = FUNC_1(VAR_11.endplane.normal, VAR_11.points[0]);
 VAR_11.farplane = VAR_11.endplane;
 VAR_11.surfaceNum = -1;
 VAR_11.type = VAR_3;
 VAR_11.cluster = VAR_4[VAR_8].cluster;
 FUNC_3(VAR_6, &VAR_11, VAR_11.cluster, 0);
 if (VAR_11.surfaceNum >= 0)
 {
  FUNC_2(VAR_6, &VAR_11);
 }
}
