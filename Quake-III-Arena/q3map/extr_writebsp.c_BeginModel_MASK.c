
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_11__ {int width; int height; TYPE_1__* verts; } ;
struct TYPE_12__ {TYPE_2__ mesh; struct TYPE_12__* next; } ;
typedef TYPE_3__ parseMesh_t ;
struct TYPE_13__ {TYPE_6__* brushes; TYPE_3__* patches; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_14__ {int firstBrush; int firstSurface; int maxs; int mins; } ;
typedef TYPE_5__ dmodel_t ;
struct TYPE_15__ {int maxs; int mins; int numsides; struct TYPE_15__* next; } ;
typedef TYPE_6__ bspbrush_t ;
struct TYPE_10__ {int xyz; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (char*) ;
 size_t VAR_0 ;
 int FUNC_4 (int ,int ) ;
 TYPE_5__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

void FUNC_5( void ) {
 dmodel_t *VAR_7;
 bspbrush_t *VAR_8;
 entity_t *VAR_9;
 vec3_t VAR_10, VAR_11;
 parseMesh_t *VAR_12;
 int VAR_13;

 if ( VAR_6 == VAR_0 ) {
  FUNC_3( "MAX_MAP_MODELS" );
 }
 VAR_7 = &VAR_1[VAR_6];




 VAR_9 = &VAR_2[VAR_3];

 FUNC_1 (VAR_10, VAR_11);
 for ( VAR_8 = VAR_9->brushes ; VAR_8 ; VAR_8 = VAR_8->next ) {
  if ( !VAR_8->numsides ) {
   continue;
  }
  FUNC_0 (VAR_8->mins, VAR_10, VAR_11);
  FUNC_0 (VAR_8->maxs, VAR_10, VAR_11);
 }

 for ( VAR_12 = VAR_9->patches ; VAR_12 ; VAR_12 = VAR_12->next ) {
  for ( VAR_13 = 0 ; VAR_13 < VAR_12->mesh.width * VAR_12->mesh.height ; VAR_13++ ) {
   FUNC_0( VAR_12->mesh.verts[VAR_13].xyz, VAR_10, VAR_11 );
  }
 }

 FUNC_4 (VAR_10, VAR_7->mins);
 FUNC_4 (VAR_11, VAR_7->maxs);

 VAR_7->firstSurface = VAR_4;
 VAR_7->firstBrush = VAR_5;

 FUNC_2( VAR_9->brushes );
}
