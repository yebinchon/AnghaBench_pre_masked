
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sec_state; int * p_callback; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;

void FUNC_1 (BD_ADDR VAR_3)
{
    tBTM_SEC_DEV_REC *VAR_4 = FUNC_0 (VAR_3);

    if (!VAR_4) {
        return;
    }

    if ((VAR_4->sec_state != VAR_1)
            && (VAR_4->sec_state != VAR_0)) {
        return;
    }

    VAR_4->sec_state = VAR_2;
    VAR_4->p_callback = ((void*)0);
}
