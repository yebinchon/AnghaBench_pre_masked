
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int** bounds; TYPE_4__* b; } ;
typedef TYPE_1__ skyBrush_t ;
struct TYPE_13__ {int surfaceFlags; int sunDirection; int sunLight; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_14__ {size_t shaderNum; size_t planeNum; } ;
typedef TYPE_3__ dbrushside_t ;
struct TYPE_15__ {int numSides; int firstSide; } ;
typedef TYPE_4__ dbrush_t ;
struct TYPE_18__ {int dist; } ;
struct TYPE_17__ {size_t shaderNum; } ;
struct TYPE_16__ {int surfaceFlags; int shader; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_8__* VAR_3 ;
 TYPE_7__* VAR_4 ;
 TYPE_6__* VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_3( void ) {
 int VAR_12, VAR_13;
 dbrush_t *VAR_14;
 skyBrush_t *VAR_15;
 shaderInfo_t *VAR_16;
 dbrushside_t *VAR_17;


 for ( VAR_12 = 0 ; VAR_12 < VAR_8 ; VAR_12++ ) {
  VAR_14 = &VAR_1[VAR_12];
  for ( VAR_13 = 0 ; VAR_13 < VAR_14->numSides ; VAR_13++ ) {
   VAR_17 = &VAR_2[ VAR_14->firstSide + VAR_13 ];
   if ( VAR_5[ VAR_17->shaderNum ].surfaceFlags & VAR_0 ) {
    VAR_15 = &VAR_9[ VAR_7 ];
    VAR_15->b = VAR_14;
    VAR_15->bounds[0][0] = -VAR_3[ VAR_2[ VAR_14->firstSide + 0 ].planeNum ].dist - 1;
    VAR_15->bounds[1][0] = VAR_3[ VAR_2[ VAR_14->firstSide + 1 ].planeNum ].dist + 1;
    VAR_15->bounds[0][1] = -VAR_3[ VAR_2[ VAR_14->firstSide + 2 ].planeNum ].dist - 1;
    VAR_15->bounds[1][1] = VAR_3[ VAR_2[ VAR_14->firstSide + 3 ].planeNum ].dist + 1;
    VAR_15->bounds[0][2] = -VAR_3[ VAR_2[ VAR_14->firstSide + 4 ].planeNum ].dist - 1;
    VAR_15->bounds[1][2] = VAR_3[ VAR_2[ VAR_14->firstSide + 5 ].planeNum ].dist + 1;
    VAR_7++;
    break;
   }
  }
 }


 FUNC_2( VAR_10, VAR_10 );


 for ( VAR_12 = 0 ; VAR_12 < VAR_6 ; VAR_12++ ) {
  VAR_16 = FUNC_0( VAR_5[ VAR_4[VAR_12].shaderNum ].shader );
  if ( VAR_16->surfaceFlags & VAR_0 ) {
   FUNC_1( VAR_16->sunLight, VAR_11 );
   FUNC_1( VAR_16->sunDirection, VAR_10 );
   break;
  }
 }
}
