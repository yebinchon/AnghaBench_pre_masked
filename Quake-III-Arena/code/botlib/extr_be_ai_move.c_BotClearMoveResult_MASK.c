
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; scalar_t__ traveltype; scalar_t__ blockentity; void* blocked; scalar_t__ type; void* failure; } ;
typedef TYPE_1__ bot_moveresult_t ;


 void* VAR_0 ;

void FUNC_0(bot_moveresult_t *VAR_1)
{
 VAR_1->failure = VAR_0;
 VAR_1->type = 0;
 VAR_1->blocked = VAR_0;
 VAR_1->blockentity = 0;
 VAR_1->traveltype = 0;
 VAR_1->flags = 0;
}
