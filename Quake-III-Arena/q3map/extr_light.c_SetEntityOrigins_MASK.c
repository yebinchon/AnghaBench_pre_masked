
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
typedef int entity_t ;
struct TYPE_3__ {int numSurfaces; int firstSurface; } ;
typedef TYPE_1__ dmodel_t ;


 int FUNC_0 (int *,char*,int ) ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

void FUNC_4( void ) {
 int VAR_6, VAR_7;
 entity_t *VAR_8;
 vec3_t VAR_9;
 const char *VAR_10;
 int VAR_11;
 dmodel_t *VAR_12;

 for ( VAR_6=0 ; VAR_6 < VAR_3 ; VAR_6++ ) {
  VAR_8 = &VAR_1[VAR_6];
  VAR_10 = FUNC_1 (VAR_8, "model");
  if ( VAR_10[0] != '*' ) {
   continue;
  }
  VAR_11 = FUNC_3( VAR_10 + 1 );
  VAR_12 = &VAR_0[ VAR_11 ];


  for ( VAR_7 = 0 ; VAR_7 < VAR_12->numSurfaces ; VAR_7++ ) {
   VAR_2[ VAR_12->firstSurface + VAR_7 ] = VAR_4;
  }

  VAR_10 = FUNC_1 (VAR_8, "origin");
  if ( !VAR_10[0] ) {
   continue;
  }
  FUNC_0 ( VAR_8, "origin", VAR_9 );


  for ( VAR_7 = 0 ; VAR_7 < VAR_12->numSurfaces ; VAR_7++ ) {
   FUNC_2( VAR_9, VAR_5[ VAR_12->firstSurface + VAR_7 ] );
  }
 }
}
