
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_13__ {int rotation; int radius; int renderfx; int customShader; int reType; int origin; } ;
struct TYPE_14__ {TYPE_4__ refEntity; scalar_t__ startTime; scalar_t__ endTime; int leType; } ;
typedef TYPE_5__ localEntity_t ;
struct TYPE_17__ {TYPE_3__* snap; scalar_t__ time; } ;
struct TYPE_16__ {int integer; } ;
struct TYPE_10__ {int bloodExplosionShader; } ;
struct TYPE_15__ {TYPE_1__ media; } ;
struct TYPE_11__ {int clientNum; } ;
struct TYPE_12__ {TYPE_2__ ps; } ;


 TYPE_5__* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 TYPE_8__ VAR_3 ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 int FUNC_2 () ;

void FUNC_3( vec3_t VAR_6, int VAR_7 ) {
 localEntity_t *VAR_8;

 if ( !VAR_4.integer ) {
  return;
 }

 VAR_8 = FUNC_0();
 VAR_8->leType = VAR_0;

 VAR_8->startTime = VAR_3.time;
 VAR_8->endTime = VAR_8->startTime + 500;

 FUNC_1 ( VAR_6, VAR_8->refEntity.origin);
 VAR_8->refEntity.reType = VAR_2;
 VAR_8->refEntity.rotation = FUNC_2() % 360;
 VAR_8->refEntity.radius = 24;

 VAR_8->refEntity.customShader = VAR_5.media.bloodExplosionShader;


 if ( VAR_7 == VAR_3.snap->ps.clientNum ) {
  VAR_8->refEntity.renderfx |= VAR_1;
 }
}
