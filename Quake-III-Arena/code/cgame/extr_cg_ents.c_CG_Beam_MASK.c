
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int renderfx; int reType; int axis; int oldorigin; int origin; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_8__ {int trBase; } ;
struct TYPE_10__ {int origin2; TYPE_1__ pos; } ;
typedef TYPE_3__ entityState_t ;
typedef int ent ;
struct TYPE_11__ {TYPE_3__ currentState; } ;
typedef TYPE_4__ centity_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4( centity_t *VAR_2 ) {
 refEntity_t VAR_3;
 entityState_t *VAR_4;

 VAR_4 = &VAR_2->currentState;


 FUNC_2 (&VAR_3, 0, sizeof(VAR_3));
 FUNC_1( VAR_4->pos.trBase, VAR_3.origin );
 FUNC_1( VAR_4->origin2, VAR_3.oldorigin );
 FUNC_0( VAR_3.axis );
 VAR_3.reType = VAR_1;

 VAR_3.renderfx = VAR_0;


 FUNC_3(&VAR_3);
}
