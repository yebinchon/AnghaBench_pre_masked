
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int trDuration; float trTime; float* trDelta; int trType; int trBase; } ;
struct TYPE_10__ {int trDuration; int trBase; } ;
struct TYPE_13__ {TYPE_3__ apos; int angles; int origin; TYPE_1__ pos; } ;
struct TYPE_11__ {int currentOrigin; int * mins; } ;
struct TYPE_14__ {TYPE_4__ s; TYPE_2__ r; int model; int damage; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_15__ {int value; } ;


 int FUNC_0 (char*,char*,float*) ;
 int FUNC_1 (char*,char*,int *) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 float FUNC_4 (int ) ;
 TYPE_7__ VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_5__*,int ) ;

void FUNC_7(gentity_t *VAR_3) {
 float VAR_4;
 float VAR_5;
 float VAR_6;
 float VAR_7;

 FUNC_0( "speed", "30", &VAR_7 );
 FUNC_1( "dmg", "2", &VAR_3->damage );
 FUNC_0( "phase", "0", &VAR_6 );

 FUNC_6( VAR_3, VAR_3->model );


 VAR_5 = FUNC_4( VAR_3->r.mins[2] );
 if ( VAR_5 < 8 ) {
  VAR_5 = 8;
 }

 VAR_4 = 1 / ( VAR_0 * 2 ) * FUNC_5( VAR_2.value / ( 3 * VAR_5 ) );

 VAR_3->s.pos.trDuration = ( 1000 / VAR_4 );

 FUNC_2( VAR_3 );

 FUNC_3( VAR_3->s.origin, VAR_3->s.pos.trBase );
 FUNC_3( VAR_3->s.origin, VAR_3->r.currentOrigin );

 FUNC_3( VAR_3->s.angles, VAR_3->s.apos.trBase );

 VAR_3->s.apos.trDuration = 1000 / VAR_4;
 VAR_3->s.apos.trTime = VAR_3->s.apos.trDuration * VAR_6;
 VAR_3->s.apos.trType = VAR_1;
 VAR_3->s.apos.trDelta[2] = VAR_7;
}
