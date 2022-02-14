
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_13__ {float* normal; float dist; } ;
struct TYPE_14__ {float fraction; TYPE_2__ plane; } ;
struct TYPE_12__ {float* offset; scalar_t__ radius; scalar_t__ use; } ;
struct TYPE_15__ {float* start; float* end; float** offsets; TYPE_3__ trace; TYPE_1__ sphere; scalar_t__ isPoint; } ;
typedef TYPE_4__ traceWork_t ;
struct patchCollide_s {int numFacets; TYPE_5__* planes; TYPE_6__* facets; } ;
struct TYPE_16__ {float* plane; size_t signbits; } ;
typedef TYPE_5__ patchPlane_t ;
struct TYPE_17__ {size_t surfacePlane; int numBorders; size_t* borderPlanes; scalar_t__* borderInward; } ;
typedef TYPE_6__ facet_t ;
struct TYPE_18__ {scalar_t__ integer; } ;
typedef TYPE_7__ cvar_t ;


 int FUNC_0 (float*,float*,float*,float*,float*,int*) ;
 int FUNC_1 (TYPE_4__*,struct patchCollide_s const*) ;
 TYPE_7__* FUNC_2 (char*,char*,int ) ;
 float FUNC_3 (float*,float*) ;
 int FUNC_4 (float*,float*) ;
 int FUNC_5 (float*,float*,float*) ;
 int FUNC_6 (float*,float*) ;
 int FUNC_7 (float*,float*) ;
 int FUNC_8 (float*,float*,float*) ;
 TYPE_6__* VAR_0 ;
 struct patchCollide_s const* VAR_1 ;
 scalar_t__ FUNC_9 (float) ;

void FUNC_10( traceWork_t *VAR_2, const struct patchCollide_s *VAR_3 ) {
 int VAR_4, VAR_5, VAR_6, VAR_7;
 float VAR_8, VAR_9, VAR_10, VAR_11;
 patchPlane_t *VAR_12;
 facet_t *VAR_13;
 float VAR_14[4], VAR_15[4];
 vec3_t VAR_16, VAR_17;

 static cvar_t *VAR_18;


 if (VAR_2->isPoint) {
  FUNC_1( VAR_2, VAR_3 );
  return;
 }

 VAR_13 = VAR_3->facets;
 for ( VAR_4 = 0 ; VAR_4 < VAR_3->numFacets ; VAR_4++, VAR_13++ ) {
  VAR_9 = -1.0;
  VAR_10 = 1.0;
  VAR_7 = -1;

  VAR_12 = &VAR_3->planes[ VAR_13->surfacePlane ];
  FUNC_6(VAR_12->plane, VAR_14);
  VAR_14[3] = VAR_12->plane[3];
  if ( VAR_2->sphere.use ) {

   VAR_14[3] += VAR_2->sphere.radius;


   VAR_11 = FUNC_3( VAR_14, VAR_2->sphere.offset );
   if ( VAR_11 > 0.0f ) {
    FUNC_8( VAR_2->start, VAR_2->sphere.offset, VAR_16 );
    FUNC_8( VAR_2->end, VAR_2->sphere.offset, VAR_17 );
   }
   else {
    FUNC_5( VAR_2->start, VAR_2->sphere.offset, VAR_16 );
    FUNC_5( VAR_2->end, VAR_2->sphere.offset, VAR_17 );
   }
  }
  else {
   VAR_8 = FUNC_3( VAR_2->offsets[ VAR_12->signbits ], VAR_14);
   VAR_14[3] -= VAR_8;
   FUNC_6( VAR_2->start, VAR_16 );
   FUNC_6( VAR_2->end, VAR_17 );
  }

  if (!FUNC_0(VAR_14, VAR_16, VAR_17, &VAR_9, &VAR_10, &VAR_6)) {
   continue;
  }
  if (VAR_6) {
   FUNC_4(VAR_14, VAR_15);
  }

  for ( VAR_5 = 0; VAR_5 < VAR_13->numBorders; VAR_5++ ) {
   VAR_12 = &VAR_3->planes[ VAR_13->borderPlanes[VAR_5] ];
   if (VAR_13->borderInward[VAR_5]) {
    FUNC_7(VAR_12->plane, VAR_14);
    VAR_14[3] = -VAR_12->plane[3];
   }
   else {
    FUNC_6(VAR_12->plane, VAR_14);
    VAR_14[3] = VAR_12->plane[3];
   }
   if ( VAR_2->sphere.use ) {

    VAR_14[3] += VAR_2->sphere.radius;


    VAR_11 = FUNC_3( VAR_14, VAR_2->sphere.offset );
    if ( VAR_11 > 0.0f ) {
     FUNC_8( VAR_2->start, VAR_2->sphere.offset, VAR_16 );
     FUNC_8( VAR_2->end, VAR_2->sphere.offset, VAR_17 );
    }
    else {
     FUNC_5( VAR_2->start, VAR_2->sphere.offset, VAR_16 );
     FUNC_5( VAR_2->end, VAR_2->sphere.offset, VAR_17 );
    }
   }
   else {

    VAR_8 = FUNC_3( VAR_2->offsets[ VAR_12->signbits ], VAR_14);
    VAR_14[3] += FUNC_9(VAR_8);
    FUNC_6( VAR_2->start, VAR_16 );
    FUNC_6( VAR_2->end, VAR_17 );
   }

   if (!FUNC_0(VAR_14, VAR_16, VAR_17, &VAR_9, &VAR_10, &VAR_6)) {
    break;
   }
   if (VAR_6) {
    VAR_7 = VAR_5;
    FUNC_4(VAR_14, VAR_15);
   }
  }
  if (VAR_5 < VAR_13->numBorders) continue;

  if (VAR_7 == VAR_13->numBorders - 1) continue;

  if (VAR_9 < VAR_10 && VAR_9 >= 0) {
   if (VAR_9 < VAR_2->trace.fraction) {
    if (VAR_9 < 0) {
     VAR_9 = 0;
    }

    if (!VAR_18) {
     VAR_18 = FUNC_2( "r_debugSurfaceUpdate", "1", 0 );
    }
    if (VAR_18 && VAR_18->integer) {
     VAR_1 = VAR_3;
     VAR_0 = VAR_13;
    }


    VAR_2->trace.fraction = VAR_9;
    FUNC_6( VAR_15, VAR_2->trace.plane.normal );
    VAR_2->trace.plane.dist = VAR_15[3];
   }
  }
 }
}
