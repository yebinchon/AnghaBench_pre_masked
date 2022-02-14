
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;


struct TYPE_22__ {int numpoints; scalar_t__** p; } ;
typedef TYPE_1__ winding_t ;
typedef scalar_t__* vec3_t ;
struct TYPE_23__ {int value; float lightSubdivide; int twoSided; scalar_t__* color; scalar_t__ autosprite; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_24__ {int photons; int type; scalar_t__* color; scalar_t__* origin; struct TYPE_24__* next; } ;
typedef TYPE_3__ light_t ;
struct TYPE_25__ {size_t shaderNum; size_t firstVert; int numVerts; scalar_t__** lightmapVecs; } ;
typedef TYPE_4__ dsurface_t ;
struct TYPE_26__ {scalar_t__* xyz; } ;
typedef TYPE_5__ drawVert_t ;
struct TYPE_27__ {int numBoundaries; scalar_t__* surface; scalar_t__** points; } ;
typedef TYPE_6__ cFacet_t ;
struct TYPE_28__ {int numFacets; TYPE_6__* facets; } ;
struct TYPE_21__ {int shader; } ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,scalar_t__*,float,int ) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,scalar_t__*) ;
 int FUNC_7 (scalar_t__*,double,scalar_t__*) ;
 int FUNC_8 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_9 (char*,int,...) ;
 float VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_11__* VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_3__* FUNC_10 (int) ;
 int FUNC_11 (scalar_t__**,scalar_t__**,int) ;
 int FUNC_12 (TYPE_3__*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (char*) ;
 int VAR_9 ;
 TYPE_7__** VAR_10 ;
 int VAR_11 ;

void FUNC_14( void ) {
 int VAR_12, VAR_13, VAR_14;
 dsurface_t *VAR_15;
 shaderInfo_t *VAR_16;
 winding_t *VAR_17;
 cFacet_t *VAR_18;
 light_t *VAR_19;
 vec3_t VAR_20;
 drawVert_t *VAR_21;
 int VAR_22;
 float VAR_23;
 vec3_t VAR_24;

 FUNC_13 ("--- CreateSurfaceLights ---\n");
 VAR_22 = 0;

 for ( VAR_12 = 0 ; VAR_12 < VAR_6 ; VAR_12++ ) {

  VAR_15 = &VAR_1[VAR_12];

  VAR_16 = FUNC_3( VAR_3[ VAR_15->shaderNum].shader );
  if ( VAR_16->value == 0 ) {
   continue;
  }


  if ( VAR_16->lightSubdivide ) {
   VAR_23 = VAR_16->lightSubdivide;
  } else {
   VAR_23 = VAR_0;
  }

  VAR_22++;



  if ( VAR_16->autosprite ) {

   if ( VAR_10[VAR_12] ) {

    VAR_18 = VAR_10[VAR_12]->facets;
    if ( VAR_10[VAR_12]->numFacets != 1 || VAR_18->numBoundaries != 4 ) {
     FUNC_9( "WARNING: surface at (%i %i %i) has autosprite shader but isn't a quad\n",
      (int)VAR_18->points[0], (int)VAR_18->points[1], (int)VAR_18->points[2] );
    }
    FUNC_5( VAR_18->points[0], VAR_18->points[1], VAR_20 );
    FUNC_5( VAR_18->points[2], VAR_20, VAR_20 );
    FUNC_5( VAR_18->points[3], VAR_20, VAR_20 );
    FUNC_7( VAR_20, 0.25, VAR_20 );
   } else {

    VAR_21 = &VAR_2[ VAR_15->firstVert ];
    if ( VAR_15->numVerts != 4 ) {
     FUNC_9( "WARNING: surface at (%i %i %i) has autosprite shader but %i verts\n",
      (int)VAR_21->xyz[0], (int)VAR_21->xyz[1], (int)VAR_21->xyz[2] );
     continue;
    }

    FUNC_5( VAR_21[0].xyz, VAR_21[1].xyz, VAR_20 );
    FUNC_5( VAR_21[2].xyz, VAR_20, VAR_20 );
    FUNC_5( VAR_21[3].xyz, VAR_20, VAR_20 );
    FUNC_7( VAR_20, 0.25, VAR_20 );
   }


   VAR_7++;
   VAR_19 = FUNC_10(sizeof(*VAR_19));
   FUNC_12 (VAR_19, 0, sizeof(*VAR_19));
   VAR_19->next = VAR_5;
   VAR_5 = VAR_19;

   FUNC_6( VAR_20, VAR_19->origin );
   FUNC_6( VAR_16->color, VAR_19->color );
   VAR_19->photons = VAR_16->value * VAR_8;
   VAR_19->type = VAR_4;
   continue;
  }


  for ( VAR_14 = 0 ; VAR_14 <= VAR_16->twoSided ; VAR_14++ ) {

   if ( VAR_10[VAR_12] ) {

    for ( VAR_13 = 0 ; VAR_13 < VAR_10[VAR_12]->numFacets ; VAR_13++ ) {
     VAR_18 = VAR_10[VAR_12]->facets + VAR_13;
     VAR_17 = FUNC_0( VAR_18->numBoundaries );
     VAR_17->numpoints = VAR_18->numBoundaries;
     FUNC_11( VAR_17->p, VAR_18->points, VAR_18->numBoundaries * 12 );

     FUNC_6( VAR_18->surface, VAR_24 );
     if ( VAR_14 ) {
      winding_t *VAR_25;

      VAR_25 = VAR_17;
      VAR_17 = FUNC_2( VAR_25 );
      FUNC_1( VAR_25 );
      FUNC_8( VAR_11, VAR_24, VAR_24 );
     }
     FUNC_4( VAR_16, VAR_17, VAR_24, VAR_23, VAR_9 );
    }
   } else {


    VAR_17 = FUNC_0( VAR_15->numVerts );
    VAR_17->numpoints = VAR_15->numVerts;
    for ( VAR_13 = 0 ; VAR_13 < VAR_15->numVerts ; VAR_13++ ) {
     FUNC_6( VAR_2[VAR_15->firstVert+VAR_13].xyz, VAR_17->p[VAR_13] );
    }
    FUNC_6( VAR_15->lightmapVecs[2], VAR_24 );
    if ( VAR_14 ) {
     winding_t *VAR_26;

     VAR_26 = VAR_17;
     VAR_17 = FUNC_2( VAR_26 );
     FUNC_1( VAR_26 );
     FUNC_8( VAR_11, VAR_24, VAR_24 );
    }
    FUNC_4( VAR_16, VAR_17, VAR_24, VAR_23, VAR_9 );
   }
  }
 }

 FUNC_9( "%5i light emitting surfaces\n", VAR_22 );
}
