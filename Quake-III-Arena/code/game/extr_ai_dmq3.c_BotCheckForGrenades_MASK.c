
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int trBase; } ;
struct TYPE_7__ {scalar_t__ eType; scalar_t__ weapon; TYPE_1__ pos; } ;
typedef TYPE_2__ entityState_t ;
struct TYPE_8__ {int ms; } ;
typedef TYPE_3__ bot_state_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;

void FUNC_1(bot_state_t *VAR_3, entityState_t *VAR_4) {

 if (VAR_4->eType != VAR_1 || VAR_4->weapon != VAR_2)
  return;

 FUNC_0(VAR_3->ms, VAR_4->pos.trBase, 160, VAR_0);
}
