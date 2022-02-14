
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int tree_t ;
struct TYPE_16__ {TYPE_1__* shaderInfo; scalar_t__ flareSurface; scalar_t__ patch; scalar_t__ miscModel; int numVerts; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_17__ {int firstDrawSurf; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_15__ {scalar_t__* flareShader; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (char*,...) ;

void FUNC_10( entity_t *VAR_4, tree_t *VAR_5 ) {
 int VAR_6;
 mapDrawSurface_t *VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;

 FUNC_9( "----- FilterDrawsurfsIntoTree -----\n");

 VAR_9 = 0;
 VAR_10 = 0;
 for ( VAR_6 = VAR_4->firstDrawSurf ; VAR_6 < VAR_3 ; VAR_6++ ) {
  VAR_7 = &VAR_2[VAR_6];

  if ( !VAR_7->numVerts && !VAR_7->flareSurface ) {
   continue;
  }
  if ( VAR_7->miscModel ) {
   VAR_8 = FUNC_7( VAR_7, VAR_5 );
   FUNC_2( VAR_7 );
  } else if ( VAR_7->patch ) {
   VAR_8 = FUNC_8( VAR_7, VAR_5 );
   FUNC_3( VAR_7 );
  } else if ( VAR_7->flareSurface ) {
   VAR_8 = FUNC_6( VAR_7, VAR_5 );
   FUNC_1( VAR_7 );
  } else {
   VAR_8 = FUNC_5( VAR_7, VAR_5 );

   if ( VAR_7->shaderInfo->flareShader[0] ) {
    FUNC_0( VAR_7 );
   }
   FUNC_4( VAR_7 );
  }
  if ( VAR_8 > 0 ) {
   VAR_9++;
   VAR_10 += VAR_8;
  }
 }
 FUNC_9( "%5i emited drawsurfs\n", VAR_9 );
 FUNC_9( "%5i references\n", VAR_10 );
 FUNC_9( "%5i stripfaces\n", VAR_1 );
 FUNC_9( "%5i fanfaces\n", VAR_0 );
}
