
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int trDuration; float trTime; float* trDelta; int trType; int trBase; } ;
struct TYPE_10__ {TYPE_2__ pos; int origin; } ;
struct TYPE_8__ {int currentOrigin; } ;
struct TYPE_11__ {float speed; int spawnflags; TYPE_3__ s; TYPE_1__ r; int model; int damage; } ;
typedef TYPE_4__ gentity_t ;


 int FUNC_0 (char*,char*,float*) ;
 int FUNC_1 (char*,char*,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;

void FUNC_5 (gentity_t *VAR_1) {
 float VAR_2;
 float VAR_3;

 FUNC_0( "speed", "4", &VAR_1->speed );
 FUNC_0( "height", "32", &VAR_2 );
 FUNC_1( "dmg", "2", &VAR_1->damage );
 FUNC_0( "phase", "0", &VAR_3 );

 FUNC_4( VAR_1, VAR_1->model );
 FUNC_2( VAR_1 );

 FUNC_3( VAR_1->s.origin, VAR_1->s.pos.trBase );
 FUNC_3( VAR_1->s.origin, VAR_1->r.currentOrigin );

 VAR_1->s.pos.trDuration = VAR_1->speed * 1000;
 VAR_1->s.pos.trTime = VAR_1->s.pos.trDuration * VAR_3;
 VAR_1->s.pos.trType = VAR_0;


 if ( VAR_1->spawnflags & 1 ) {
  VAR_1->s.pos.trDelta[0] = VAR_2;
 } else if ( VAR_1->spawnflags & 2 ) {
  VAR_1->s.pos.trDelta[1] = VAR_2;
 } else {
  VAR_1->s.pos.trDelta[2] = VAR_2;
 }
}
