
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int vec3_t ;
struct TYPE_12__ {scalar_t__* normal; } ;
struct TYPE_15__ {int fraction; double* endpos; TYPE_1__ plane; int entityNum; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_11__ {int* trDelta; int trTime; int trBase; } ;
struct TYPE_14__ {TYPE_10__ pos; int groundEntityNum; } ;
struct TYPE_13__ {int currentOrigin; } ;
struct TYPE_16__ {TYPE_3__ s; TYPE_2__ r; int physicsBounce; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_17__ {int previousTime; int time; } ;


 int FUNC_0 (TYPE_10__*,int,int ) ;
 float FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (TYPE_5__*,double*) ;
 int FUNC_3 (double*) ;
 int FUNC_4 (int ,scalar_t__*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,scalar_t__*,int*) ;
 int FUNC_7 (int*,int ,int*) ;
 TYPE_6__ VAR_0 ;

void FUNC_8( gentity_t *VAR_1, trace_t *VAR_2 ) {
 vec3_t VAR_3;
 float VAR_4;
 int VAR_5;


 VAR_5 = VAR_0.previousTime + ( VAR_0.time - VAR_0.previousTime ) * VAR_2->fraction;
 FUNC_0( &VAR_1->s.pos, VAR_5, VAR_3 );
 VAR_4 = FUNC_1( VAR_3, VAR_2->plane.normal );
 FUNC_6( VAR_3, -2*VAR_4, VAR_2->plane.normal, VAR_1->s.pos.trDelta );


 FUNC_7( VAR_1->s.pos.trDelta, VAR_1->physicsBounce, VAR_1->s.pos.trDelta );


 if ( VAR_2->plane.normal[2] > 0 && VAR_1->s.pos.trDelta[2] < 40 ) {
  VAR_2->endpos[2] += 1.0;
  FUNC_3( VAR_2->endpos );
  FUNC_2( VAR_1, VAR_2->endpos );
  VAR_1->s.groundEntityNum = VAR_2->entityNum;
  return;
 }

 FUNC_4( VAR_1->r.currentOrigin, VAR_2->plane.normal, VAR_1->r.currentOrigin);
 FUNC_5( VAR_1->r.currentOrigin, VAR_1->s.pos.trBase );
 VAR_1->s.pos.trTime = VAR_0.time;
}
