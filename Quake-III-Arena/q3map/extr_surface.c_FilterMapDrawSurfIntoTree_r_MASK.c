
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_7__ {int dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_8__ {size_t planenum; TYPE_3__* drawSurfReferences; scalar_t__ opaque; struct TYPE_8__** children; } ;
typedef TYPE_2__ node_t ;
typedef int mapDrawSurface_t ;
struct TYPE_9__ {scalar_t__ outputNumber; struct TYPE_9__* nextRef; } ;
typedef TYPE_3__ drawSurfRef_t ;


 int FUNC_0 (int *,int ,int ,int ,int **,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_3( winding_t *VAR_4, mapDrawSurface_t *VAR_5, node_t *VAR_6 ) {
 drawSurfRef_t *VAR_7;
 plane_t *VAR_8;
 int VAR_9;
 winding_t *VAR_10, *VAR_11;

 if ( VAR_6->planenum != VAR_1 ) {
  VAR_8 = &VAR_2[ VAR_6->planenum ];
  FUNC_0 ( VAR_4, VAR_8->normal, VAR_8->dist,
    VAR_0, &VAR_10, &VAR_11 );

  VAR_9 = 0;
  if ( VAR_10 ) {
   VAR_9 += FUNC_3( VAR_10, VAR_5, VAR_6->children[0] );
  }
  if ( VAR_11 ) {
   VAR_9 += FUNC_3( VAR_11, VAR_5, VAR_6->children[1] );
  }

  FUNC_1( VAR_4 );
  return VAR_9;
 }


 if ( VAR_6->opaque ) {
  return 0;
 }


 for ( VAR_7 = VAR_6->drawSurfReferences ; VAR_7 ; VAR_7 = VAR_7->nextRef ) {
  if ( VAR_7->outputNumber == VAR_3 ) {
   return 0;
  }
 }

 VAR_7 = FUNC_2( sizeof( *VAR_7 ) );
 VAR_7->outputNumber = VAR_3;
 VAR_7->nextRef = VAR_6->drawSurfReferences;
 VAR_6->drawSurfReferences = VAR_7;
 return 1;
}
