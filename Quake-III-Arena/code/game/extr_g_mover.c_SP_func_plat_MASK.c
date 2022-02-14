
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {float* origin; int angles; } ;
struct TYPE_8__ {float* maxs; float* mins; } ;
struct TYPE_10__ {float speed; float wait; float* pos2; float* pos1; int targetname; struct TYPE_10__* parent; int blocked; int touch; TYPE_2__ s; TYPE_1__ r; int model; int damage; void* soundPos2; void* soundPos1; void* sound2to1; void* sound1to2; } ;
typedef TYPE_3__ gentity_t ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,float*) ;
 int FUNC_2 (char*,char*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (float*,float*) ;
 int FUNC_7 (TYPE_3__*,int ) ;

void FUNC_8 (gentity_t *VAR_2) {
 float VAR_3, VAR_4;

 VAR_2->sound1to2 = VAR_2->sound2to1 = FUNC_0("sound/movers/plats/pt1_strt.wav");
 VAR_2->soundPos1 = VAR_2->soundPos2 = FUNC_0("sound/movers/plats/pt1_end.wav");

 FUNC_5 (VAR_2->s.angles);

 FUNC_1( "speed", "200", &VAR_2->speed );
 FUNC_2( "dmg", "2", &VAR_2->damage );
 FUNC_1( "wait", "1", &VAR_2->wait );
 FUNC_1( "lip", "8", &VAR_3 );

 VAR_2->wait = 1000;


 FUNC_7( VAR_2, VAR_2->model );

 if ( !FUNC_1( "height", "0", &VAR_4 ) ) {
  VAR_4 = (VAR_2->r.maxs[2] - VAR_2->r.mins[2]) - VAR_3;
 }


 FUNC_6( VAR_2->s.origin, VAR_2->pos2 );
 FUNC_6( VAR_2->pos2, VAR_2->pos1 );
 VAR_2->pos1[2] -= VAR_4;

 FUNC_3( VAR_2 );



 VAR_2->touch = VAR_1;

 VAR_2->blocked = VAR_0;

 VAR_2->parent = VAR_2;


 if ( !VAR_2->targetname ) {
  FUNC_4(VAR_2);
 }
}
