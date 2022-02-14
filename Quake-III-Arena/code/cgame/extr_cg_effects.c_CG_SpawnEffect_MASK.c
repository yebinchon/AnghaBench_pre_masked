
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {float shaderTime; int* origin; int axis; int hModel; int customShader; int reType; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_9__ {double startTime; int endTime; double lifeRate; double* color; TYPE_2__ refEntity; int leType; scalar_t__ leFlags; } ;
typedef TYPE_3__ localEntity_t ;
struct TYPE_11__ {double time; } ;
struct TYPE_7__ {int teleportEffectModel; int teleportEffectShader; } ;
struct TYPE_10__ {TYPE_1__ media; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int*) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;

void FUNC_3( vec3_t VAR_4 ) {
 localEntity_t *VAR_5;
 refEntity_t *VAR_6;

 VAR_5 = FUNC_1();
 VAR_5->leFlags = 0;
 VAR_5->leType = VAR_0;
 VAR_5->startTime = VAR_2.time;
 VAR_5->endTime = VAR_2.time + 500;
 VAR_5->lifeRate = 1.0 / ( VAR_5->endTime - VAR_5->startTime );

 VAR_5->color[0] = VAR_5->color[1] = VAR_5->color[2] = VAR_5->color[3] = 1.0;

 VAR_6 = &VAR_5->refEntity;

 VAR_6->reType = VAR_1;
 VAR_6->shaderTime = VAR_2.time / 1000.0f;


 VAR_6->customShader = VAR_3.media.teleportEffectShader;

 VAR_6->hModel = VAR_3.media.teleportEffectModel;
 FUNC_0( VAR_6->axis );

 FUNC_2( VAR_4, VAR_6->origin );



 VAR_6->origin[2] -= 24;

}
