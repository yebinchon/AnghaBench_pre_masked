
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_9__ {int planenum; } ;
typedef TYPE_1__ side_t ;
struct TYPE_10__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_11__ {int planenum; TYPE_4__* drawSurfReferences; scalar_t__ opaque; struct TYPE_11__** children; } ;
typedef TYPE_3__ node_t ;
typedef int mapDrawSurface_t ;
struct TYPE_12__ {struct TYPE_12__* nextRef; int outputNumber; } ;
typedef TYPE_4__ drawSurfRef_t ;


 int FUNC_0 (int *,int ,int ,int ,int **,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_2 (int) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

int FUNC_3( winding_t *VAR_4, side_t *VAR_5, mapDrawSurface_t *VAR_6, node_t *VAR_7 ) {
 drawSurfRef_t *VAR_8;
 plane_t *VAR_9;
 winding_t *VAR_10, *VAR_11;
 int VAR_12;

 if ( !VAR_4 ) {
  return 0;
 }

 if ( VAR_7->planenum != VAR_1 ) {
  if ( VAR_5->planenum == VAR_7->planenum ) {
   return FUNC_3( VAR_4, VAR_5, VAR_6, VAR_7->children[0] );
  }
  if ( VAR_5->planenum == ( VAR_7->planenum ^ 1) ) {
   return FUNC_3( VAR_4, VAR_5, VAR_6, VAR_7->children[1] );
  }

  VAR_9 = &VAR_2[ VAR_7->planenum ];
  FUNC_0 ( VAR_4, VAR_9->normal, VAR_9->dist,
    VAR_0, &VAR_10, &VAR_11 );

  VAR_12 = FUNC_3( VAR_10, VAR_5, VAR_6, VAR_7->children[0] );
  VAR_12 += FUNC_3( VAR_11, VAR_5, VAR_6, VAR_7->children[1] );

  FUNC_1( VAR_4 );
  return VAR_12;
 }


 if ( VAR_7->opaque ) {
  return 0;
 }

 VAR_8 = FUNC_2( sizeof( *VAR_8 ) );
 VAR_8->outputNumber = VAR_3;
 VAR_8->nextRef = VAR_7->drawSurfReferences;
 VAR_7->drawSurfReferences = VAR_8;

 FUNC_1( VAR_4 );
 return 1;
}
