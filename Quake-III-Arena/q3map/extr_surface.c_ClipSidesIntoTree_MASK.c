
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_12__ {int headnode; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_13__ {int planenum; int * visibleHull; scalar_t__ bevel; int * winding; TYPE_3__* shaderInfo; } ;
typedef TYPE_2__ side_t ;
struct TYPE_14__ {int surfaceFlags; int contents; scalar_t__ autosprite; } ;
typedef TYPE_3__ shaderInfo_t ;
struct TYPE_15__ {TYPE_5__* brushes; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_16__ {int numsides; TYPE_2__* sides; struct TYPE_16__* next; } ;
typedef TYPE_5__ bspbrush_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,TYPE_2__*,int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 int VAR_1 ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (char*) ;

void FUNC_7( entity_t *VAR_2, tree_t *VAR_3 ) {
 bspbrush_t *VAR_4;
 int VAR_5;
 winding_t *VAR_6;
 side_t *VAR_7, *VAR_8;
 shaderInfo_t *VAR_9;

 FUNC_6( "----- ClipSidesIntoTree -----\n");

 for ( VAR_4 = VAR_2->brushes ; VAR_4 ; VAR_4 = VAR_4->next ) {
  for ( VAR_5 = 0 ; VAR_5 < VAR_4->numsides ; VAR_5++ ) {
   VAR_7 = &VAR_4->sides[VAR_5];
   if ( !VAR_7->winding) {
    continue;
   }
   VAR_6 = FUNC_1( VAR_7->winding );
   VAR_7->visibleHull = ((void*)0);
   FUNC_0( VAR_6, VAR_7, VAR_3->headnode );

   VAR_6 = VAR_7->visibleHull;
   if ( !VAR_6 ) {
    continue;
   }
   VAR_9 = VAR_7->shaderInfo;
   if ( !VAR_9 ) {
    continue;
   }

   if ( VAR_9->surfaceFlags & VAR_1 ) {
    continue;
   }


   if ( VAR_7->shaderInfo->autosprite ) {
    VAR_6 = VAR_7->winding;
   }

   if ( VAR_7->bevel ) {
    FUNC_3( "monkey tried to create draw surface for brush bevel" );
   }

   FUNC_2( VAR_4, VAR_7, VAR_6 );


   if ( !(VAR_9->contents & VAR_0) ) {
    continue;
   }


   VAR_6 = FUNC_4( VAR_6 );

   VAR_8 = FUNC_5( sizeof( *VAR_7 ) );
   *VAR_8 = *VAR_7;
   VAR_8->visibleHull = VAR_6;
   VAR_8->planenum ^= 1;


   FUNC_2( VAR_4, VAR_8, VAR_6 );

  }
 }
}
