
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {float trDuration; int trType; } ;
struct TYPE_9__ {TYPE_1__ pos; int loopSound; int origin; } ;
struct TYPE_10__ {float speed; int wait; TYPE_2__ s; int think; scalar_t__ nextthink; int soundLoop; int pos1; int pos2; struct TYPE_10__* nextTrain; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_11__ {scalar_t__ time; } ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 float FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_4__ VAR_3 ;

void FUNC_5( gentity_t *VAR_4 ) {
 gentity_t *VAR_5;
 float VAR_6;
 vec3_t VAR_7;
 float VAR_8;


 VAR_5 = VAR_4->nextTrain;
 if ( !VAR_5 || !VAR_5->nextTrain ) {
  return;
 }


 FUNC_0( VAR_5, ((void*)0) );


 VAR_4->nextTrain = VAR_5->nextTrain;
 FUNC_2( VAR_5->s.origin, VAR_4->pos1 );
 FUNC_2( VAR_5->nextTrain->s.origin, VAR_4->pos2 );


 if ( VAR_5->speed ) {
  VAR_6 = VAR_5->speed;
 } else {

  VAR_6 = VAR_4->speed;
 }
 if ( VAR_6 < 1 ) {
  VAR_6 = 1;
 }


 FUNC_4( VAR_4->pos2, VAR_4->pos1, VAR_7 );
 VAR_8 = FUNC_3( VAR_7 );

 VAR_4->s.pos.trDuration = VAR_8 * 1000 / VAR_6;


 VAR_4->s.loopSound = VAR_5->soundLoop;


 FUNC_1( VAR_4, VAR_0, VAR_3.time );


 if ( VAR_5->wait ) {
  VAR_4->nextthink = VAR_3.time + VAR_5->wait * 1000;
  VAR_4->think = VAR_2;
  VAR_4->s.pos.trType = VAR_1;
 }
}
