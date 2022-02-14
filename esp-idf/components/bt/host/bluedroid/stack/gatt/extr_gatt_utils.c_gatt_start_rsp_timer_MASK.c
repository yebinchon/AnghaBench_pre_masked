
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ param; } ;
struct TYPE_4__ {scalar_t__ operation; scalar_t__ op_subtype; TYPE_3__ rsp_timer_ent; } ;
typedef TYPE_1__ tGATT_CLCB ;
typedef int UINT32 ;
typedef size_t UINT16 ;
struct TYPE_5__ {TYPE_1__* clcb; } ;
typedef scalar_t__ TIMER_PARAM_TYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 TYPE_2__ VAR_5 ;

void FUNC_1(UINT16 VAR_6)
{
    tGATT_CLCB *VAR_7 = &VAR_5.clcb[VAR_6];
    UINT32 VAR_8 = VAR_4;
    VAR_7->rsp_timer_ent.param = (TIMER_PARAM_TYPE)VAR_7;
    if (VAR_7->operation == VAR_1 &&
            VAR_7->op_subtype == VAR_2) {
        VAR_8 = VAR_3;
    }
    FUNC_0 (&VAR_7->rsp_timer_ent, VAR_0,
                     VAR_8);
}
