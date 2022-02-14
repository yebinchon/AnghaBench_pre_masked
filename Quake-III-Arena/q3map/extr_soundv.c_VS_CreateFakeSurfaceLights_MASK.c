
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;


struct TYPE_25__ {int numpoints; scalar_t__** points; } ;
typedef TYPE_2__ winding_t ;
struct TYPE_26__ {int photons; int type; scalar_t__* color; scalar_t__* origin; } ;
typedef TYPE_3__ vsound_t ;
typedef scalar_t__* vec3_t ;
struct TYPE_27__ {int value; float lightSubdivide; int twoSided; scalar_t__* color; scalar_t__ autosprite; } ;
typedef TYPE_4__ shaderInfo_t ;
struct TYPE_24__ {scalar_t__* normal; } ;
struct TYPE_28__ {int numpoints; TYPE_1__ plane; scalar_t__** points; } ;
typedef TYPE_5__ lFacet_t ;
struct TYPE_29__ {size_t shaderNum; size_t firstVert; int numVerts; scalar_t__** lightmapVecs; } ;
typedef TYPE_6__ dsurface_t ;
struct TYPE_30__ {scalar_t__* xyz; } ;
typedef TYPE_7__ drawVert_t ;
struct TYPE_23__ {int shader; } ;
struct TYPE_22__ {int numFacets; TYPE_5__* facets; } ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,scalar_t__*,float,int ) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,scalar_t__*) ;
 int FUNC_7 (scalar_t__*,double,scalar_t__*) ;
 int FUNC_8 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_9 (char*,...) ;
 TYPE_6__* VAR_1 ;
 TYPE_7__* VAR_2 ;
 TYPE_12__* VAR_3 ;
 float VAR_4 ;
 int VAR_5 ;
 TYPE_11__** VAR_6 ;
 TYPE_3__* FUNC_10 (int) ;
 int FUNC_11 (scalar_t__**,scalar_t__**,int) ;
 int FUNC_12 (TYPE_3__*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__** VAR_11 ;

void FUNC_13( void ) {
 int VAR_12, VAR_13, VAR_14;
 dsurface_t *VAR_15;
 shaderInfo_t *VAR_16;
 winding_t *VAR_17;
 lFacet_t *VAR_18;
 vsound_t *VAR_19;
 vec3_t VAR_20;
 drawVert_t *VAR_21;
 int VAR_22;
 float VAR_23;
 vec3_t VAR_24;


 VAR_22 = 0;
 FUNC_9 ("Creating surface lights...\n");

 for ( VAR_12 = 0 ; VAR_12 < VAR_7 ; VAR_12++ ) {

  VAR_15 = &VAR_1[VAR_12];

  VAR_16 = FUNC_3( VAR_3[ VAR_15->shaderNum].shader );
  if ( VAR_16->value == 0 ) {
   continue;
  }


  if ( VAR_16->lightSubdivide ) {
   VAR_23 = VAR_16->lightSubdivide;
  } else {
   VAR_23 = VAR_4;
  }

  VAR_22++;



  if ( VAR_16->autosprite ) {

   if ( VAR_6[VAR_12] ) {

    VAR_18 = VAR_6[VAR_12]->facets;
    if ( VAR_6[VAR_12]->numFacets != 1 || VAR_18->numpoints != 4 ) {
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

   VAR_19 = FUNC_10(sizeof(*VAR_19));
   FUNC_12 (VAR_19, 0, sizeof(*VAR_19));
   FUNC_6( VAR_20, VAR_19->origin );
   FUNC_6( VAR_16->color, VAR_19->color );
   VAR_19->photons = VAR_16->value * VAR_5;
   VAR_19->type = VAR_0;
   VAR_11[VAR_8++] = VAR_19;
   continue;
  }


  for ( VAR_14 = 0 ; VAR_14 <= VAR_16->twoSided ; VAR_14++ ) {

   if ( VAR_6[VAR_12] ) {

    for ( VAR_13 = 0 ; VAR_13 < VAR_6[VAR_12]->numFacets ; VAR_13++ ) {
     VAR_18 = VAR_6[VAR_12]->facets + VAR_13;
     VAR_17 = FUNC_0( VAR_18->numpoints );
     VAR_17->numpoints = VAR_18->numpoints;
     FUNC_11( VAR_17->points, VAR_18->points, VAR_18->numpoints * 12 );

     FUNC_6( VAR_18->plane.normal, VAR_24 );
     if ( VAR_14 ) {
      winding_t *VAR_25;

      VAR_25 = VAR_17;
      VAR_17 = FUNC_2( VAR_25 );
      FUNC_1( VAR_25 );
      FUNC_8( VAR_10, VAR_24, VAR_24 );
     }
     FUNC_4( VAR_16, VAR_17, VAR_24, VAR_23, VAR_9 );
    }
   } else {


    VAR_17 = FUNC_0( VAR_15->numVerts );
    VAR_17->numpoints = VAR_15->numVerts;
    for ( VAR_13 = 0 ; VAR_13 < VAR_15->numVerts ; VAR_13++ ) {
     FUNC_6( VAR_2[VAR_15->firstVert+VAR_13].xyz, VAR_17->points[VAR_13] );
    }
    FUNC_6( VAR_15->lightmapVecs[2], VAR_24 );
    if ( VAR_14 ) {
     winding_t *VAR_26;

     VAR_26 = VAR_17;
     VAR_17 = FUNC_2( VAR_26 );
     FUNC_1( VAR_26 );
     FUNC_8( VAR_10, VAR_24, VAR_24 );
    }
    FUNC_4( VAR_16, VAR_17, VAR_24, VAR_23, VAR_9 );
   }
  }
 }

 FUNC_9( "%7i light emitting surfaces\n", VAR_22 );
}
