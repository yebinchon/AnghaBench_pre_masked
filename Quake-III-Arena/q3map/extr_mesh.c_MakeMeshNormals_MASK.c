
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_4__ {int height; int width; TYPE_2__* verts; } ;
typedef TYPE_1__ mesh_t ;
struct TYPE_5__ {int normal; int xyz; } ;
typedef TYPE_2__ drawVert_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 float FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int** VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_7( mesh_t VAR_3 ) {
 int VAR_4, VAR_5, VAR_6, VAR_7;
 vec3_t VAR_8;
 vec3_t VAR_9;
 int VAR_10;
 vec3_t VAR_11;
 vec3_t VAR_12;
 int VAR_13, VAR_14;
 drawVert_t *VAR_15;
 vec3_t VAR_16[8], VAR_17;
 qboolean VAR_18[8];
 qboolean VAR_19, VAR_20;
 float VAR_21;

 VAR_19 = VAR_1;
 for ( VAR_4 = 0 ; VAR_4 < VAR_3.height ; VAR_4++ ) {
  FUNC_6( VAR_3.verts[VAR_4*VAR_3.width].xyz,
   VAR_3.verts[VAR_4*VAR_3.width+VAR_3.width-1].xyz, VAR_12 );
  VAR_21 = FUNC_4( VAR_12 );
  if ( VAR_21 > 1.0 ) {
   break;
  }
 }
 if ( VAR_4 == VAR_3.height ) {
  VAR_19 = VAR_2;
 }

 VAR_20 = VAR_1;
 for ( VAR_4 = 0 ; VAR_4 < VAR_3.width ; VAR_4++ ) {
  FUNC_6( VAR_3.verts[VAR_4].xyz,
   VAR_3.verts[VAR_4 + (VAR_3.height-1)*VAR_3.width].xyz, VAR_12 );
  VAR_21 = FUNC_4( VAR_12 );
  if ( VAR_21 > 1.0 ) {
   break;
  }
 }
 if ( VAR_4 == VAR_3.width) {
  VAR_20 = VAR_2;
 }


 for ( VAR_4 = 0 ; VAR_4 < VAR_3.width ; VAR_4++ ) {
  for ( VAR_5 = 0 ; VAR_5 < VAR_3.height ; VAR_5++ ) {
   VAR_10 = 0;
   VAR_15 = &VAR_3.verts[VAR_5*VAR_3.width+VAR_4];
   FUNC_3( VAR_15->xyz, VAR_11 );
   for ( VAR_6 = 0 ; VAR_6 < 8 ; VAR_6++ ) {
    FUNC_2( VAR_16[VAR_6] );
    VAR_18[VAR_6] = VAR_1;

    for ( VAR_7 = 1 ; VAR_7 <= 3 ; VAR_7++ ) {
     VAR_13 = VAR_4 + VAR_0[VAR_6][0] * VAR_7;
     VAR_14 = VAR_5 + VAR_0[VAR_6][1] * VAR_7;
     if ( VAR_19 ) {
      if ( VAR_13 < 0 ) {
       VAR_13 = VAR_3.width - 1 + VAR_13;
      } else if ( VAR_13 >= VAR_3.width ) {
       VAR_13 = 1 + VAR_13 - VAR_3.width;
      }
     }
     if ( VAR_20 ) {
      if ( VAR_14 < 0 ) {
       VAR_14 = VAR_3.height - 1 + VAR_14;
      } else if ( VAR_14 >= VAR_3.height ) {
       VAR_14 = 1 + VAR_14 - VAR_3.height;
      }
     }

     if ( VAR_13 < 0 || VAR_13 >= VAR_3.width || VAR_14 < 0 || VAR_14 >= VAR_3.height ) {
      break;
     }
     FUNC_6( VAR_3.verts[VAR_14*VAR_3.width+VAR_13].xyz, VAR_11, VAR_17 );
     if ( FUNC_5( VAR_17, VAR_17 ) == 0 ) {
      continue;
     } else {
      VAR_18[VAR_6] = VAR_2;
      FUNC_3( VAR_17, VAR_16[VAR_6] );
      break;
     }
    }
   }

   FUNC_2( VAR_9 );
   for ( VAR_6 = 0 ; VAR_6 < 8 ; VAR_6++ ) {
    if ( !VAR_18[VAR_6] || !VAR_18[(VAR_6+1)&7] ) {
     continue;
    }
    FUNC_0( VAR_16[(VAR_6+1)&7], VAR_16[VAR_6], VAR_8 );
    if ( FUNC_5( VAR_8, VAR_8 ) == 0 ) {
     continue;
    }
    FUNC_1( VAR_8, VAR_9, VAR_9 );
    VAR_10++;
   }
   if ( VAR_10 == 0 ) {

    VAR_10 = 1;
   }
   FUNC_5( VAR_9, VAR_15->normal );
  }
 }
}
