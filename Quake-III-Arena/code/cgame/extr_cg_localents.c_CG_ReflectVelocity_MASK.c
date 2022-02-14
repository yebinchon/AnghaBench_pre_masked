
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {scalar_t__* normal; } ;
struct TYPE_9__ {int fraction; TYPE_1__ plane; scalar_t__ allsolid; int endpos; } ;
typedef TYPE_2__ trace_t ;
struct TYPE_12__ {int* trDelta; int trTime; int trType; int trBase; } ;
struct TYPE_10__ {TYPE_7__ pos; int bounceFactor; } ;
typedef TYPE_3__ localEntity_t ;
struct TYPE_11__ {int time; int frametime; } ;


 int FUNC_0 (TYPE_7__*,int,int ) ;
 float FUNC_1 (int ,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,scalar_t__*,int*) ;
 int FUNC_4 (int*,int ,int*) ;
 TYPE_4__ VAR_1 ;

void FUNC_5( localEntity_t *VAR_2, trace_t *VAR_3 ) {
 vec3_t VAR_4;
 float VAR_5;
 int VAR_6;


 VAR_6 = VAR_1.time - VAR_1.frametime + VAR_1.frametime * VAR_3->fraction;
 FUNC_0( &VAR_2->pos, VAR_6, VAR_4 );
 VAR_5 = FUNC_1( VAR_4, VAR_3->plane.normal );
 FUNC_3( VAR_4, -2*VAR_5, VAR_3->plane.normal, VAR_2->pos.trDelta );

 FUNC_4( VAR_2->pos.trDelta, VAR_2->bounceFactor, VAR_2->pos.trDelta );

 FUNC_2( VAR_3->endpos, VAR_2->pos.trBase );
 VAR_2->pos.trTime = VAR_1.time;



 if ( VAR_3->allsolid ||
  ( VAR_3->plane.normal[2] > 0 &&
  ( VAR_2->pos.trDelta[2] < 40 || VAR_2->pos.trDelta[2] < -VAR_1.frametime * VAR_2->pos.trDelta[2] ) ) ) {
  VAR_2->pos.trType = VAR_0;
 } else {

 }
}
