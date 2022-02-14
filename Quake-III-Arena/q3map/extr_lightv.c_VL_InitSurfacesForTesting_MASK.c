
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int contents; int surfaceFlags; scalar_t__ forceVLight; scalar_t__ forceTraceLight; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_18__ {int numFacets; int radius; int origin; int maxs; int mins; TYPE_3__* facets; void* always_vlight; void* always_tracelight; scalar_t__ numvolumes; int mutex; } ;
typedef TYPE_2__ lsurfaceTest_t ;
struct TYPE_19__ {int numpoints; int * points; } ;
typedef TYPE_3__ lFacet_t ;
struct TYPE_20__ {size_t shaderNum; scalar_t__ lightmapNum; scalar_t__ surfaceType; int patchWidth; int numIndexes; } ;
typedef TYPE_4__ dsurface_t ;
struct TYPE_21__ {int shader; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int,TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (char*,...) ;
 TYPE_4__* VAR_6 ;
 TYPE_8__* VAR_7 ;
 scalar_t__* VAR_8 ;
 TYPE_2__** VAR_9 ;
 TYPE_2__* FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;

void FUNC_12( void ) {

 int VAR_13, VAR_14, VAR_15;
 dsurface_t *VAR_16;
 lsurfaceTest_t *VAR_17;
 shaderInfo_t *VAR_18;
 lFacet_t *VAR_19;

 for ( VAR_13 = 0 ; VAR_13 < VAR_10 ; VAR_13++ ) {

  if ( VAR_8[VAR_13] )
   continue;

  VAR_16 = &VAR_6[ VAR_13 ];
  if ( !VAR_16->numIndexes && !VAR_16->patchWidth ) {
   continue;
  }

  VAR_18 = FUNC_4( VAR_7[ VAR_16->shaderNum].shader );

  if ( (VAR_18->contents & VAR_0) && !(VAR_18->surfaceFlags & VAR_5) ) {

   if ( VAR_16->lightmapNum < 0 )
    continue;
  }

  VAR_17 = FUNC_10( sizeof( *VAR_17 ) );
  FUNC_11(VAR_17, 0, sizeof( *VAR_17 ));
  VAR_17->mutex = FUNC_3();
  VAR_17->numvolumes = 0;
  if (VAR_18->forceTraceLight)
   VAR_17->always_tracelight = VAR_12;
  else if (VAR_18->forceVLight)
   VAR_17->always_vlight = VAR_12;
  VAR_9[VAR_13] = VAR_17;

  if ( VAR_16->surfaceType == VAR_4 || VAR_16->surfaceType == VAR_3 ) {
   FUNC_6( VAR_16, VAR_18, VAR_17 );
  } else if ( VAR_16->surfaceType == VAR_2 ) {
   FUNC_5( VAR_16, VAR_13, VAR_18, VAR_17 );
  }
  if (VAR_11 >= VAR_1)
   FUNC_2("numfacets >= MAX_FACETS (%d)", VAR_1);

  FUNC_1( VAR_17->mins, VAR_17->maxs );
  for (VAR_14 = 0; VAR_14 < VAR_17->numFacets; VAR_14++)
  {
   VAR_19 = &VAR_17->facets[VAR_14];
   for ( VAR_15 = 0 ; VAR_15 < VAR_19->numpoints; VAR_15++) {
    FUNC_0( VAR_19->points[VAR_15], VAR_17->mins, VAR_17->maxs );
   }
  }
  FUNC_8( VAR_17->mins, VAR_17->maxs, VAR_17->origin, &VAR_17->radius );
 }
 FUNC_9("%6d facets\n", VAR_11);
 FUNC_9("linking surfaces...\n");
 FUNC_7();
}
