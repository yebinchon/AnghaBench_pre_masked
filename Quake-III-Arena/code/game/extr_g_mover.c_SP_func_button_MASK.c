
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_8__ {int mins; int maxs; } ;
struct TYPE_7__ {int angles; int origin; } ;
struct TYPE_9__ {int speed; int wait; int touch; int takedamage; scalar_t__ health; int pos2; int * movedir; int pos1; TYPE_2__ r; TYPE_1__ s; int model; int sound1to2; } ;
typedef TYPE_3__ gentity_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,float*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,float,int *,int ) ;
 int FUNC_6 (int ,int ,float*) ;
 float FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_3__*,int ) ;

void FUNC_9( gentity_t *VAR_2 ) {
 vec3_t VAR_3;
 float VAR_4;
 vec3_t VAR_5;
 float VAR_6;

 VAR_2->sound1to2 = FUNC_1("sound/movers/switches/butn2.wav");

 if ( !VAR_2->speed ) {
  VAR_2->speed = 40;
 }

 if ( !VAR_2->wait ) {
  VAR_2->wait = 1;
 }
 VAR_2->wait *= 1000;


 FUNC_4( VAR_2->s.origin, VAR_2->pos1 );


 FUNC_8( VAR_2, VAR_2->model );

 FUNC_2( "lip", "4", &VAR_6 );

 FUNC_0( VAR_2->s.angles, VAR_2->movedir );
 VAR_3[0] = FUNC_7(VAR_2->movedir[0]);
 VAR_3[1] = FUNC_7(VAR_2->movedir[1]);
 VAR_3[2] = FUNC_7(VAR_2->movedir[2]);
 FUNC_6( VAR_2->r.maxs, VAR_2->r.mins, VAR_5 );
 VAR_4 = VAR_3[0] * VAR_5[0] + VAR_3[1] * VAR_5[1] + VAR_3[2] * VAR_5[2] - VAR_6;
 FUNC_5 (VAR_2->pos1, VAR_4, VAR_2->movedir, VAR_2->pos2);

 if (VAR_2->health) {

  VAR_2->takedamage = VAR_1;
 } else {

  VAR_2->touch = VAR_0;
 }

 FUNC_3( VAR_2 );
}
