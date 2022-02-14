
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* tBTM_CMPL_CB ) (void*) ;
struct TYPE_5__ {int (* p_rln_cmpl_cb ) (void*) ;} ;
struct TYPE_7__ {TYPE_1__ devcb; } ;
struct TYPE_6__ {scalar_t__ param; } ;
typedef scalar_t__ TIMER_PARAM_TYPE ;
typedef TYPE_2__ TIMER_LIST_ENT ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (void*) ;

void FUNC_1 (TIMER_LIST_ENT *VAR_2)
{
    TIMER_PARAM_TYPE VAR_3 = (TIMER_PARAM_TYPE)VAR_2->param;

    if (VAR_3 == (TIMER_PARAM_TYPE)VAR_0) {
        tBTM_CMPL_CB *VAR_4 = &VAR_1.devcb.p_rln_cmpl_cb;

        VAR_1.devcb.p_rln_cmpl_cb = ((void*)0);

        if (VAR_4) {
            (*VAR_4)((void *) ((void*)0));
        }
    }
}
