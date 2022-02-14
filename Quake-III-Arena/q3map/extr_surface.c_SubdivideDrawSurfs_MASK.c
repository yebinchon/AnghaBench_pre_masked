
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int winding_t ;
typedef int tree_t ;
struct TYPE_12__ {float subdivisions; scalar_t__ autosprite; } ;
typedef TYPE_3__ shaderInfo_t ;
struct TYPE_13__ {scalar_t__ numVerts; TYPE_2__* shaderInfo; TYPE_1__* side; } ;
typedef TYPE_4__ mapDrawSurface_t ;
struct TYPE_14__ {int firstDrawSurf; } ;
typedef TYPE_5__ entity_t ;
struct TYPE_11__ {scalar_t__ autosprite; } ;
struct TYPE_10__ {TYPE_3__* shaderInfo; } ;


 int FUNC_0 (TYPE_4__*,int *,float) ;
 int * FUNC_1 (TYPE_4__*) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

void FUNC_3( entity_t *VAR_2, tree_t *VAR_3 ) {
 int VAR_4;
 mapDrawSurface_t *VAR_5;
 int VAR_6;
 winding_t *VAR_7;
 float VAR_8;
 shaderInfo_t *VAR_9;

 FUNC_2( "----- SubdivideDrawSurfs -----\n");
 VAR_6 = VAR_1;
 for ( VAR_4 = VAR_2->firstDrawSurf ; VAR_4 < VAR_6 ; VAR_4++ ) {
  VAR_5 = &VAR_0[VAR_4];


  if ( !VAR_5->side ) {
   continue;
  }


  VAR_9 = VAR_5->side->shaderInfo;
  if ( !VAR_9 ) {
   continue;
  }

  if (VAR_5->shaderInfo->autosprite || VAR_9->autosprite) {
   continue;
  }

  VAR_8 = VAR_9->subdivisions;
  if ( !VAR_8 ) {
   continue;
  }

  VAR_7 = FUNC_1( VAR_5 );
  VAR_5->numVerts = 0;
  FUNC_0( VAR_5, VAR_7, VAR_8 );
 }

}
