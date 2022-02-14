
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ surfaceType; int width; int height; struct TYPE_12__* heightLodError; struct TYPE_12__* widthLodError; } ;
typedef TYPE_2__ srfGridMesh_t ;
typedef int drawVert_t ;
struct TYPE_14__ {TYPE_2__* (* Hunk_Alloc ) (int,int ) ;} ;
struct TYPE_13__ {int numsurfaces; TYPE_1__* surfaces; } ;
struct TYPE_11__ {void* data; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_2__* FUNC_2 (int,int ) ;
 TYPE_2__* FUNC_3 (int,int ) ;
 TYPE_2__* FUNC_4 (int,int ) ;

void FUNC_5(void) {
 int VAR_4, VAR_5;
 srfGridMesh_t *VAR_6, *VAR_7;

 for ( VAR_4 = 0; VAR_4 < VAR_3.numsurfaces; VAR_4++ ) {

  VAR_6 = (srfGridMesh_t *) VAR_3.surfaces[VAR_4].data;

  if ( VAR_6->surfaceType != VAR_0 )
   continue;

  VAR_5 = (VAR_6->width * VAR_6->height - 1) * sizeof( drawVert_t ) + sizeof( *VAR_6 );
  VAR_7 = VAR_2.Hunk_Alloc( VAR_5, VAR_1 );
  FUNC_0(VAR_7, VAR_6, VAR_5);

  VAR_7->widthLodError = VAR_2.Hunk_Alloc( VAR_6->width * 4, VAR_1 );
  FUNC_0( VAR_7->widthLodError, VAR_6->widthLodError, VAR_6->width * 4 );

  VAR_7->heightLodError = VAR_2.Hunk_Alloc( VAR_6->height * 4, VAR_1 );
  FUNC_0( VAR_6->heightLodError, VAR_6->heightLodError, VAR_6->height * 4 );

  FUNC_1( VAR_6 );

  VAR_3.surfaces[VAR_4].data = (void *) VAR_7;
 }
}
