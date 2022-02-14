
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int radius; int origin; int maxs; int mins; } ;
typedef TYPE_1__ surfaceTest_t ;
struct TYPE_18__ {int contents; int surfaceFlags; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_19__ {size_t shaderNum; size_t firstVert; int numVerts; scalar_t__ surfaceType; int patchWidth; int numIndexes; } ;
typedef TYPE_3__ dsurface_t ;
struct TYPE_20__ {int xyz; } ;
typedef TYPE_4__ drawVert_t ;
struct TYPE_21__ {int shader; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 TYPE_3__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_7__* VAR_7 ;
 TYPE_1__* FUNC_6 (int) ;
 int VAR_8 ;
 TYPE_1__** VAR_9 ;

void FUNC_7( void ) {

 int VAR_10, VAR_11;
 dsurface_t *VAR_12;
 surfaceTest_t *VAR_13;
 drawVert_t *VAR_14;
 shaderInfo_t *VAR_15;

 for ( VAR_10 = 0 ; VAR_10 < VAR_8 ; VAR_10++ ) {
  VAR_12 = &VAR_5[ VAR_10 ];
  if ( !VAR_12->numIndexes && !VAR_12->patchWidth ) {
   continue;
  }



  VAR_15 = FUNC_4( VAR_7[ VAR_12->shaderNum].shader );
  if ( (VAR_15->contents & VAR_0) && !(VAR_15->surfaceFlags & VAR_4) ) {
   continue;
  }

  VAR_13 = FUNC_6( sizeof( *VAR_13 ) );
  VAR_9[VAR_10] = VAR_13;
  FUNC_1( VAR_13->mins, VAR_13->maxs );

  VAR_14 = &VAR_6[ VAR_12->firstVert ];
  for ( VAR_11 = 0 ; VAR_11 < VAR_12->numVerts ; VAR_11++, VAR_14++ ) {
   FUNC_0( VAR_14->xyz, VAR_13->mins, VAR_13->maxs );
  }

  FUNC_5( VAR_13->mins, VAR_13->maxs, VAR_13->origin, &VAR_13->radius );

  if ( VAR_12->surfaceType == VAR_3 || VAR_12->surfaceType == VAR_2 ) {
   FUNC_3( VAR_12, VAR_15, VAR_13 );
  } else if ( VAR_12->surfaceType == VAR_1 ) {
   FUNC_2( VAR_12, VAR_15, VAR_13 );
  }
 }
}
