
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_9__ {int numVerts; TYPE_4__* verts; } ;
typedef TYPE_1__ mapDrawSurface_t ;
struct TYPE_10__ {float intercept; struct TYPE_10__* prev; struct TYPE_10__* next; int xyz; } ;
typedef TYPE_2__ edgePoint_t ;
struct TYPE_11__ {TYPE_2__ chain; int dir; int origin; } ;
typedef TYPE_3__ edgeLine_t ;
struct TYPE_12__ {float* st; int normal; int xyz; scalar_t__* lightmap; } ;
typedef TYPE_4__ drawVert_t ;


 float FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 float VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*,int) ;

void FUNC_6( mapDrawSurface_t *VAR_8 ) {
 int VAR_9, VAR_10, VAR_11;
 edgeLine_t *VAR_12;
 edgePoint_t *VAR_13;
 int VAR_14;
 int VAR_15[VAR_0];
 int VAR_16[VAR_0];
 int VAR_17[VAR_0];
 drawVert_t VAR_18[VAR_0], *VAR_19, *VAR_20;
 int VAR_21;
 float VAR_22, VAR_23, VAR_24;
 vec3_t VAR_25;

 VAR_14 = VAR_8->numVerts;

 VAR_21 = 0;
 for ( VAR_9 = 0 ; VAR_9 < VAR_8->numVerts ; VAR_9++ ) {
  VAR_15[VAR_9] = 0;
  VAR_17[VAR_9] = VAR_21;


  if ( VAR_21 == VAR_0 ) {
   FUNC_1( "MAX_SURFACE_VERTS" );
  }
  VAR_18[VAR_21] = VAR_8->verts[VAR_9];
  VAR_16[VAR_21] = VAR_9;
  VAR_21++;


  VAR_19 = &VAR_8->verts[VAR_9];
  VAR_20 = &VAR_8->verts[ (VAR_9+1) % VAR_8->numVerts ];

  VAR_10 = (int)VAR_8->verts[VAR_9].lightmap[0];
  if ( VAR_10 == -1 ) {
   continue;
  }
  VAR_12 = &VAR_7[ VAR_10 ];

  FUNC_3( VAR_19->xyz, VAR_12->origin, VAR_25 );
  VAR_22 = FUNC_0( VAR_25, VAR_12->dir );

  FUNC_3( VAR_20->xyz, VAR_12->origin, VAR_25 );
  VAR_23 = FUNC_0( VAR_25, VAR_12->dir );


  if ( VAR_22 < VAR_23 ) {
   VAR_13 = VAR_12->chain.next;
  } else {
   VAR_13 = VAR_12->chain.prev;
  }

  for ( ; VAR_13 != &VAR_12->chain ; ) {
   if ( VAR_22 < VAR_23 ) {
    if ( VAR_13->intercept > VAR_23 - VAR_1 ) {
     break;
    }
   } else {
    if ( VAR_13->intercept < VAR_23 + VAR_1 ) {
     break;
    }
   }

   if (
    ( VAR_22 < VAR_23 && VAR_13->intercept > VAR_22 + VAR_1 ) ||
    ( VAR_22 > VAR_23 && VAR_13->intercept < VAR_22 - VAR_1 ) ) {

    if ( VAR_21 == VAR_0 ) {
     FUNC_1( "MAX_SURFACE_VERTS" );
    }


    FUNC_2( VAR_13->xyz, VAR_18[ VAR_21 ].xyz );


    FUNC_2( VAR_19->normal, VAR_18[ VAR_21 ].normal );


    VAR_24 = ( VAR_13->intercept - VAR_22 ) / ( VAR_23 - VAR_22 );
    for ( VAR_10 = 0 ; VAR_10 < 2 ; VAR_10++ ) {
     VAR_18[ VAR_21 ].st[VAR_10] = VAR_19->st[VAR_10] +
      VAR_24 * ( VAR_20->st[VAR_10] - VAR_19->st[VAR_10] );
    }
    VAR_16[VAR_21] = VAR_9;
    VAR_21++;
    VAR_15[VAR_9]++;
   }

   if ( VAR_22 < VAR_23 ) {
    VAR_13 = VAR_13->next;
   } else {
    VAR_13 = VAR_13->prev;
   }
  }
 }

 VAR_2 += VAR_21 - VAR_8->numVerts;
 VAR_6 += VAR_21;







 for ( VAR_9 = 0 ; VAR_9 < VAR_21 ; VAR_9++ ) {
  if ( VAR_16[ (VAR_9+1) % VAR_21 ] == VAR_16[ VAR_9 ] ) {
   continue;
  }
  VAR_10 = (VAR_9 + VAR_21 - 1 ) % VAR_21;
  VAR_11 = (VAR_9 + VAR_21 - 2 ) % VAR_21;
  if ( VAR_16[ VAR_10 ] == VAR_16[ VAR_11 ] ) {
   continue;
  }
  break;
 }

 if ( VAR_9 == 0 ) {

  VAR_4++;

  VAR_8->numVerts = VAR_21;
  VAR_8->verts = FUNC_4( VAR_21 * sizeof( *VAR_8->verts ) );
  FUNC_5( VAR_8->verts, VAR_18, VAR_21 * sizeof( *VAR_8->verts ) );

  return;
 }
 if ( VAR_9 == VAR_21 ) {

  VAR_3++;
 } else {

  VAR_5++;

 }

 VAR_8->numVerts = VAR_21;
 VAR_8->verts = FUNC_4( VAR_21 * sizeof( *VAR_8->verts ) );

 for ( VAR_10 = 0 ; VAR_10 < VAR_8->numVerts ; VAR_10++ ) {
  VAR_8->verts[VAR_10] = VAR_18[ ( VAR_10 + VAR_9 ) % VAR_8->numVerts ];
 }
}
