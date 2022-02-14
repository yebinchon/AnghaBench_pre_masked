
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ param; } ;
struct TYPE_4__ {TYPE_3__ conf_timer_ent; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ TIMER_PARAM_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;

void FUNC_1(tGATT_TCB *VAR_2)
{
    VAR_2->conf_timer_ent.param = (TIMER_PARAM_TYPE)VAR_2;
    FUNC_0 (&VAR_2->conf_timer_ent, VAR_0,
                     VAR_1);
}
