
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int axis; int renderfx; int hModel; int oldorigin; int origin; scalar_t__ backlerp; int frame; int oldframe; } ;
typedef TYPE_3__ refEntity_t ;
struct TYPE_14__ {size_t modelindex; scalar_t__ number; int frame; } ;
typedef TYPE_4__ entityState_t ;
typedef int ent ;
struct TYPE_15__ {int lerpAngles; int lerpOrigin; TYPE_4__ currentState; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_17__ {TYPE_2__* snap; } ;
struct TYPE_16__ {int * gameModels; } ;
struct TYPE_11__ {scalar_t__ clientNum; } ;
struct TYPE_12__ {TYPE_1__ ps; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_9__ VAR_1 ;
 TYPE_8__ VAR_2 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( centity_t *VAR_3 ) {
 refEntity_t VAR_4;
 entityState_t *VAR_5;

 VAR_5 = &VAR_3->currentState;


 if (!VAR_5->modelindex) {
  return;
 }

 FUNC_2 (&VAR_4, 0, sizeof(VAR_4));



 VAR_4.frame = VAR_5->frame;
 VAR_4.oldframe = VAR_4.frame;
 VAR_4.backlerp = 0;

 FUNC_1( VAR_3->lerpOrigin, VAR_4.origin);
 FUNC_1( VAR_3->lerpOrigin, VAR_4.oldorigin);

 VAR_4.hModel = VAR_2.gameModels[VAR_5->modelindex];


 if (VAR_5->number == VAR_1.snap->ps.clientNum) {
  VAR_4.renderfx |= VAR_0;
 }


 FUNC_0( VAR_3->lerpAngles, VAR_4.axis );


 FUNC_3 (&VAR_4);
}
