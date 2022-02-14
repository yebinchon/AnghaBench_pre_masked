
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int numVerts; int fogIndex; TYPE_8__* verts; scalar_t__ hShader; int surfaceType; } ;
typedef TYPE_2__ srfPoly_t ;
typedef scalar_t__ qhandle_t ;
typedef int polyVert_t ;
struct TYPE_11__ {scalar_t__** bounds; } ;
typedef TYPE_3__ fog_t ;
struct TYPE_16__ {int* modulate; int xyz; } ;
struct TYPE_15__ {TYPE_8__* polyVerts; TYPE_2__* polys; } ;
struct TYPE_14__ {scalar_t__ hardwareType; } ;
struct TYPE_13__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_12__ {size_t smpFrame; TYPE_1__* world; int registered; } ;
struct TYPE_9__ {int numfogs; TYPE_3__* fogs; } ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_8__*,int const*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__*) ;
 TYPE_7__** VAR_4 ;
 TYPE_6__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 TYPE_5__ VAR_10 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_4__ VAR_11 ;

void FUNC_5( qhandle_t VAR_12, int VAR_13, const polyVert_t *VAR_14, int VAR_15 ) {
 srfPoly_t *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;
 fog_t *VAR_20;
 vec3_t VAR_21[2];

 if ( !VAR_11.registered ) {
  return;
 }

 if ( !VAR_12 ) {
  VAR_10.Printf( VAR_2, "WARNING: RE_AddPolyToScene: NULL poly shader\n");
  return;
 }

 for ( VAR_18 = 0; VAR_18 < VAR_15; VAR_18++ ) {
  if ( VAR_9 + VAR_13 > VAR_7 || VAR_8 >= VAR_6 ) {






   VAR_10.Printf( VAR_1, "WARNING: RE_AddPolyToScene: r_max_polys or r_max_polyverts reached\n");
   return;
  }

  VAR_16 = &VAR_4[VAR_11.smpFrame]->polys[VAR_8];
  VAR_16->surfaceType = VAR_3;
  VAR_16->hShader = VAR_12;
  VAR_16->numVerts = VAR_13;
  VAR_16->verts = &VAR_4[VAR_11.smpFrame]->polyVerts[VAR_9];

  FUNC_1( VAR_16->verts, &VAR_14[VAR_13*VAR_18], VAR_13 * sizeof( *VAR_14 ) );

  if ( VAR_5.hardwareType == VAR_0 ) {
   VAR_16->verts->modulate[0] = 255;
   VAR_16->verts->modulate[1] = 255;
   VAR_16->verts->modulate[2] = 255;
   VAR_16->verts->modulate[3] = 255;
  }

  VAR_8++;
  VAR_9 += VAR_13;


  if ( VAR_11.world == ((void*)0) ) {
   VAR_19 = 0;
  }

  else if ( VAR_11.world->numfogs == 1 ) {
   VAR_19 = 0;
  } else {

   FUNC_2( VAR_16->verts[0].xyz, VAR_21[0] );
   FUNC_2( VAR_16->verts[0].xyz, VAR_21[1] );
   for ( VAR_17 = 1 ; VAR_17 < VAR_16->numVerts ; VAR_17++ ) {
    FUNC_0( VAR_16->verts[VAR_17].xyz, VAR_21[0], VAR_21[1] );
   }
   for ( VAR_19 = 1 ; VAR_19 < VAR_11.world->numfogs ; VAR_19++ ) {
    VAR_20 = &VAR_11.world->fogs[VAR_19];
    if ( VAR_21[1][0] >= VAR_20->bounds[0][0]
     && VAR_21[1][1] >= VAR_20->bounds[0][1]
     && VAR_21[1][2] >= VAR_20->bounds[0][2]
     && VAR_21[0][0] <= VAR_20->bounds[1][0]
     && VAR_21[0][1] <= VAR_20->bounds[1][1]
     && VAR_21[0][2] <= VAR_20->bounds[1][2] ) {
     break;
    }
   }
   if ( VAR_19 == VAR_11.world->numfogs ) {
    VAR_19 = 0;
   }
  }
  VAR_16->fogIndex = VAR_19;
 }
}
