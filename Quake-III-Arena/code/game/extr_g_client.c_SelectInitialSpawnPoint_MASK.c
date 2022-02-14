
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_8__ {int angles; int origin; } ;
struct TYPE_9__ {int spawnflags; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ,char*) ;
 TYPE_2__* FUNC_2 (int ,int*,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;

gentity_t *FUNC_5( vec3_t VAR_2, vec3_t VAR_3 ) {
 gentity_t *VAR_4;

 VAR_4 = ((void*)0);
 while ((VAR_4 = FUNC_1 (VAR_4, FUNC_0(VAR_0), "info_player_deathmatch")) != ((void*)0)) {
  if ( VAR_4->spawnflags & 1 ) {
   break;
  }
 }

 if ( !VAR_4 || FUNC_3( VAR_4 ) ) {
  return FUNC_2( VAR_1, VAR_2, VAR_3 );
 }

 FUNC_4 (VAR_4->s.origin, VAR_2);
 VAR_2[2] += 9;
 FUNC_4 (VAR_4->s.angles, VAR_3);

 return VAR_4;
}
