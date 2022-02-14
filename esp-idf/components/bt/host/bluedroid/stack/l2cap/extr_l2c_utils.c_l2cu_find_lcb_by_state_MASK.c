
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tL2C_LINK_STATE ;
struct TYPE_4__ {scalar_t__ link_state; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_1__* lcb_pool; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

tL2C_LCB *FUNC_0 (tL2C_LINK_STATE VAR_2)
{
    UINT16 VAR_3;
    tL2C_LCB *VAR_4 = &VAR_1.lcb_pool[0];

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_4++) {
        if ((VAR_4->in_use) && (VAR_4->link_state == VAR_2)) {
            return (VAR_4);
        }
    }


    return (((void*)0));
}
