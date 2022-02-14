
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_7__ {int angles; int origin; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int*) ;
 float FUNC_5 (int*) ;
 int FUNC_6 (int ,int*,int*) ;
 int VAR_0 ;
 int FUNC_7 () ;

gentity_t *FUNC_8 ( vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3 ) {
 gentity_t *VAR_4;
 vec3_t VAR_5;
 float VAR_6;
 float VAR_7[64];
 gentity_t *VAR_8[64];
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = 0;
 VAR_4 = ((void*)0);

 while ((VAR_4 = FUNC_2 (VAR_4, FUNC_0(VAR_0), "info_player_deathmatch")) != ((void*)0)) {
  if ( FUNC_3( VAR_4 ) ) {
   continue;
  }
  FUNC_6( VAR_4->s.origin, VAR_1, VAR_5 );
  VAR_6 = FUNC_5( VAR_5 );
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   if ( VAR_6 > VAR_7[VAR_11] ) {
    if ( VAR_9 >= 64 )
     VAR_9 = 64-1;
    for (VAR_12 = VAR_9; VAR_12 > VAR_11; VAR_12--) {
     VAR_7[VAR_12] = VAR_7[VAR_12-1];
     VAR_8[VAR_12] = VAR_8[VAR_12-1];
    }
    VAR_7[VAR_11] = VAR_6;
    VAR_8[VAR_11] = VAR_4;
    VAR_9++;
    if (VAR_9 > 64)
     VAR_9 = 64;
    break;
   }
  }
  if (VAR_11 >= VAR_9 && VAR_9 < 64) {
   VAR_7[VAR_9] = VAR_6;
   VAR_8[VAR_9] = VAR_4;
   VAR_9++;
  }
 }
 if (!VAR_9) {
  VAR_4 = FUNC_2( ((void*)0), FUNC_0(VAR_0), "info_player_deathmatch");
  if (!VAR_4)
   FUNC_1( "Couldn't find a spawn point" );
  FUNC_4 (VAR_4->s.origin, VAR_2);
  VAR_2[2] += 9;
  FUNC_4 (VAR_4->s.angles, VAR_3);
  return VAR_4;
 }


 VAR_10 = FUNC_7() * (VAR_9 / 2);

 FUNC_4 (VAR_8[VAR_10]->s.origin, VAR_2);
 VAR_2[2] += 9;
 FUNC_4 (VAR_8[VAR_10]->s.angles, VAR_3);

 return VAR_8[VAR_10];
}
