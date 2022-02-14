
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_10__ {int radius; int axis; int reType; } ;
typedef TYPE_3__ refEntity_t ;
struct TYPE_9__ {int* trBase; } ;
struct TYPE_11__ {double startTime; double endTime; double lifeRate; double* color; int radius; TYPE_3__ refEntity; TYPE_2__ pos; int leType; scalar_t__ leFlags; } ;
typedef TYPE_4__ localEntity_t ;
struct TYPE_8__ {int clientNum; } ;
struct TYPE_13__ {double time; TYPE_1__ predictedPlayerState; } ;
struct TYPE_12__ {scalar_t__ integer; } ;


 int FUNC_0 (int*,int ) ;
 TYPE_4__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int*) ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;

void FUNC_4( int VAR_4, vec3_t VAR_5, int VAR_6 ) {
 localEntity_t *VAR_7;
 refEntity_t *VAR_8;
 vec3_t VAR_9;
 static vec3_t VAR_10;


 if (VAR_4 != VAR_2.predictedPlayerState.clientNum || VAR_3.integer == 0) {
  return;
 }

 VAR_7 = FUNC_1();
 VAR_7->leFlags = 0;
 VAR_7->leType = VAR_0;
 VAR_7->startTime = VAR_2.time;
 VAR_7->endTime = VAR_2.time + 4000;
 VAR_7->lifeRate = 1.0 / ( VAR_7->endTime - VAR_7->startTime );


 VAR_7->color[0] = VAR_7->color[1] = VAR_7->color[2] = VAR_7->color[3] = 1.0;
 VAR_7->radius = VAR_6;

 FUNC_3( VAR_5, VAR_7->pos.trBase );
 if (VAR_5[2] >= VAR_10[2] - 20 && VAR_5[2] <= VAR_10[2] + 20) {
  VAR_7->pos.trBase[2] -= 20;
 }


 FUNC_3(VAR_5, VAR_10);


 VAR_8 = &VAR_7->refEntity;

 VAR_8->reType = VAR_1;
 VAR_8->radius = 16;

 FUNC_2(VAR_9);
 FUNC_0( VAR_9, VAR_8->axis );
}
