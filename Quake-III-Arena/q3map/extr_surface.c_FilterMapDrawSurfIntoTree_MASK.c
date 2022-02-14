
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {float dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_8__ {size_t planenum; TYPE_3__* drawSurfReferences; scalar_t__ opaque; struct TYPE_8__** children; } ;
typedef TYPE_2__ node_t ;
typedef int mapDrawSurface_t ;
struct TYPE_9__ {scalar_t__ outputNumber; struct TYPE_9__* nextRef; } ;
typedef TYPE_3__ drawSurfRef_t ;


 float FUNC_0 (int ,int ) ;
 float VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_2( vec3_t VAR_4, mapDrawSurface_t *VAR_5, node_t *VAR_6 ) {
 drawSurfRef_t *VAR_7;
 float VAR_8;
 plane_t *VAR_9;
 int VAR_10;

 if ( VAR_6->planenum != VAR_1 ) {
  VAR_9 = &VAR_2[ VAR_6->planenum ];
  VAR_8 = FUNC_0( VAR_4, VAR_9->normal ) - VAR_9->dist;
  VAR_10 = 0;
  if ( VAR_8 >= -VAR_0 ) {
   VAR_10 += FUNC_2( VAR_4, VAR_5, VAR_6->children[0] );
  }
  if ( VAR_8 <= VAR_0 ) {
   VAR_10 += FUNC_2( VAR_4, VAR_5, VAR_6->children[1] );
  }
  return VAR_10;
 }


 if ( VAR_6->opaque ) {
  return 0;
 }


 for ( VAR_7 = VAR_6->drawSurfReferences ; VAR_7 ; VAR_7 = VAR_7->nextRef ) {
  if ( VAR_7->outputNumber == VAR_3 ) {
   return 0;
  }
 }

 VAR_7 = FUNC_1( sizeof( *VAR_7 ) );
 VAR_7->outputNumber = VAR_3;
 VAR_7->nextRef = VAR_6->drawSurfReferences;
 VAR_6->drawSurfReferences = VAR_7;
 return 1;
}
