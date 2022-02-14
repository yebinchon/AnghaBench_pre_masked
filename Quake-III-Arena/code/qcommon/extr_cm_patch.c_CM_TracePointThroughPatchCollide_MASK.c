
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {float dist; int normal; } ;
struct TYPE_12__ {float fraction; TYPE_1__ plane; } ;
struct TYPE_13__ {TYPE_2__ trace; int end; int start; int * offsets; int isPoint; } ;
typedef TYPE_3__ traceWork_t ;
struct patchCollide_s {int numPlanes; int numFacets; TYPE_4__* planes; TYPE_5__* facets; } ;
typedef int qboolean ;
struct TYPE_14__ {size_t signbits; float* plane; } ;
typedef TYPE_4__ patchPlane_t ;
struct TYPE_15__ {size_t surfacePlane; int numBorders; int* borderPlanes; int* borderInward; } ;
typedef TYPE_5__ facet_t ;
struct TYPE_16__ {scalar_t__ integer; } ;
typedef TYPE_6__ cvar_t ;
struct TYPE_17__ {int integer; } ;


 TYPE_6__* FUNC_0 (char*,char*,int ) ;
 float FUNC_1 (int ,float*) ;
 int VAR_0 ;
 float VAR_1 ;
 int FUNC_2 (float*,int ) ;
 TYPE_8__* VAR_2 ;
 TYPE_5__ const* VAR_3 ;
 struct patchCollide_s const* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_3( traceWork_t *VAR_7, const struct patchCollide_s *VAR_8 ) {
 qboolean VAR_9[VAR_0];
 float VAR_10[VAR_0];
 float VAR_11;
 const patchPlane_t *VAR_12;
 const facet_t *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 float VAR_17;
 float VAR_18, VAR_19;

 static cvar_t *VAR_20;



 if ( !VAR_2->integer || !VAR_7->isPoint ) {
  return;
 }



 VAR_12 = VAR_8->planes;
 for ( VAR_14 = 0 ; VAR_14 < VAR_8->numPlanes ; VAR_14++, VAR_12++ ) {
  VAR_17 = FUNC_1( VAR_7->offsets[ VAR_12->signbits ], VAR_12->plane );
  VAR_18 = FUNC_1( VAR_7->start, VAR_12->plane ) - VAR_12->plane[3] + VAR_17;
  VAR_19 = FUNC_1( VAR_7->end, VAR_12->plane ) - VAR_12->plane[3] + VAR_17;
  if ( VAR_18 <= 0 ) {
   VAR_9[VAR_14] = VAR_5;
  } else {
   VAR_9[VAR_14] = VAR_6;
  }
  if ( VAR_18 == VAR_19 ) {
   VAR_10[VAR_14] = 99999;
  } else {
   VAR_10[VAR_14] = VAR_18 / ( VAR_18 - VAR_19 );
   if ( VAR_10[VAR_14] <= 0 ) {
    VAR_10[VAR_14] = 99999;
   }
  }
 }



 VAR_13 = VAR_8->facets;
 for ( VAR_14 = 0 ; VAR_14 < VAR_8->numFacets ; VAR_14++, VAR_13++ ) {
  if ( !VAR_9[VAR_13->surfacePlane] ) {
   continue;
  }
  VAR_11 = VAR_10[VAR_13->surfacePlane];
  if ( VAR_11 < 0 ) {
   continue;
  }
  if ( VAR_11 > VAR_7->trace.fraction ) {
   continue;
  }
  for ( VAR_15 = 0 ; VAR_15 < VAR_13->numBorders ; VAR_15++ ) {
   VAR_16 = VAR_13->borderPlanes[VAR_15];
   if ( VAR_9[VAR_16] ^ VAR_13->borderInward[VAR_15] ) {
    if ( VAR_10[VAR_16] > VAR_11 ) {
     break;
    }
   } else {
    if ( VAR_10[VAR_16] < VAR_11 ) {
     break;
    }
   }
  }
  if ( VAR_15 == VAR_13->numBorders ) {


   if (!VAR_20) {
    VAR_20 = FUNC_0( "r_debugSurfaceUpdate", "1", 0 );
   }
   if (VAR_20->integer) {
    VAR_4 = VAR_8;
    VAR_3 = VAR_13;
   }

   VAR_12 = &VAR_8->planes[VAR_13->surfacePlane];


   VAR_17 = FUNC_1( VAR_7->offsets[ VAR_12->signbits ], VAR_12->plane );
   VAR_18 = FUNC_1( VAR_7->start, VAR_12->plane ) - VAR_12->plane[3] + VAR_17;
   VAR_19 = FUNC_1( VAR_7->end, VAR_12->plane ) - VAR_12->plane[3] + VAR_17;
   VAR_7->trace.fraction = ( VAR_18 - VAR_1 ) / ( VAR_18 - VAR_19 );

   if ( VAR_7->trace.fraction < 0 ) {
    VAR_7->trace.fraction = 0;
   }

   FUNC_2( VAR_12->plane, VAR_7->trace.plane.normal );
   VAR_7->trace.plane.dist = VAR_12->plane[3];
  }
 }
}
