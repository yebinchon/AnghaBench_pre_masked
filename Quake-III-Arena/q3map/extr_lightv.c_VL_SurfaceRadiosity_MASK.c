
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_17__ {double photons; int type; int color; int origin; } ;
typedef TYPE_4__ vlight_t ;
typedef int vec3_t ;
typedef int shaderInfo_t ;
struct TYPE_18__ {int width; TYPE_1__* verts; } ;
typedef TYPE_5__ mesh_t ;
struct TYPE_19__ {int mutex; TYPE_3__* facets; TYPE_5__* detailMesh; } ;
typedef TYPE_6__ lsurfaceTest_t ;
struct TYPE_20__ {int lightmapNum; scalar_t__ surfaceType; size_t shaderNum; int lightmapWidth; int lightmapHeight; int lightmapY; int lightmapX; int * lightmapVecs; int lightmapOrigin; } ;
typedef TYPE_7__ dsurface_t ;
struct TYPE_15__ {int normal; } ;
struct TYPE_16__ {TYPE_2__ plane; } ;
struct TYPE_14__ {int normal; int xyz; } ;
struct TYPE_13__ {int shader; } ;


 int FUNC_0 (float*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ) ;
 double FUNC_6 (float*) ;
 int FUNC_7 (int ,int,int ,int ) ;
 TYPE_7__* VAR_5 ;
 TYPE_10__* VAR_6 ;
 float* VAR_7 ;
 double VAR_8 ;
 float* VAR_9 ;
 TYPE_6__** VAR_10 ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 float* VAR_11 ;
 float VAR_12 ;

void FUNC_9( int VAR_13 ) {
 dsurface_t *VAR_14;
 mesh_t *VAR_15;
 shaderInfo_t *VAR_16;
 lsurfaceTest_t *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 vec3_t VAR_21, VAR_22;
 float *VAR_23, VAR_24;
 vlight_t VAR_25;

 VAR_14 = &VAR_5[VAR_13];

 if ( VAR_14->lightmapNum < 0 ) {
  return;
 }


 if ( VAR_14->surfaceType == VAR_4 ) {
  return;
 }

 VAR_16 = FUNC_3( VAR_6[ VAR_14->shaderNum].shader );
 VAR_17 = VAR_10[ VAR_13 ];

 if (!VAR_17) {
  return;
 }

 for (VAR_18 = 0; VAR_18 < VAR_14->lightmapWidth; VAR_18++) {
  for (VAR_19 = 0; VAR_19 < VAR_14->lightmapHeight; VAR_19++) {

   VAR_20 = ( VAR_14->lightmapNum * VAR_0 + VAR_14->lightmapY + VAR_19)
       * VAR_1 + VAR_14->lightmapX + VAR_18;
   VAR_24 = VAR_9[VAR_20];
   if (VAR_24 <= 0)
    continue;

   if (VAR_14->surfaceType == VAR_3)
   {
    VAR_15 = VAR_17->detailMesh;
    FUNC_5( VAR_15->verts[VAR_19*VAR_15->width+VAR_18].xyz, VAR_21);
    FUNC_5( VAR_15->verts[VAR_19*VAR_15->width+VAR_18].normal, VAR_22);
   }
   else
   {
    FUNC_7(VAR_14->lightmapOrigin, (float) VAR_18, VAR_14->lightmapVecs[0], VAR_21);
    FUNC_7(VAR_21, (float) VAR_19, VAR_14->lightmapVecs[1], VAR_21);
    FUNC_5(VAR_17->facets[0].plane.normal, VAR_22);
   }

   FUNC_8(&VAR_25, 0, sizeof(vlight_t));
   VAR_23 = &VAR_11[VAR_20*3];

   FUNC_7(VAR_21, 5, VAR_22, VAR_25.origin);
   FUNC_0(VAR_23, VAR_25.color);

   VAR_25.photons = FUNC_6(VAR_23) * 0.05 * VAR_8 / (VAR_24 * VAR_12);

   VAR_25.type = VAR_2;

   FUNC_4(&VAR_25);

   FUNC_1(VAR_17->mutex);

   VAR_7[VAR_20*3] = VAR_11[VAR_20*3];
   VAR_7[VAR_20*3+1] = VAR_11[VAR_20*3+1];
   VAR_7[VAR_20*3+2] = VAR_11[VAR_20*3+2];

   FUNC_2(VAR_17->mutex);
  }
 }
}
