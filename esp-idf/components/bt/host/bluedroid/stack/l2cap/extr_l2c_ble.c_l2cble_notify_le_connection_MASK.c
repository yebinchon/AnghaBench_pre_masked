
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ link_state; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_12__ {int state; int adv_mode; } ;
typedef TYPE_3__ tBTM_BLE_INQ_CB ;
struct TYPE_13__ {scalar_t__ link_role; } ;
typedef TYPE_4__ tACL_CONN ;
struct TYPE_10__ {TYPE_3__ inq_var; } ;
struct TYPE_14__ {TYPE_1__ ble_ctr_cb; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_0 (int ,int ) ;
 TYPE_8__ VAR_5 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4 (BD_ADDR VAR_6)
{
    tL2C_LCB *VAR_7 = FUNC_2 (VAR_6, VAR_2);
    tACL_CONN *VAR_8 = FUNC_0(VAR_6, VAR_2) ;

    if (VAR_7 != ((void*)0) && VAR_8 != ((void*)0) && VAR_7->link_state != VAR_4) {

        if(VAR_8->link_role == VAR_3) {

            tBTM_BLE_INQ_CB *VAR_9 = &VAR_5.ble_ctr_cb.inq_var;
            if(VAR_9) {
                VAR_9->adv_mode = VAR_0;
                VAR_9->state = VAR_1;
            }
        }

        FUNC_1(VAR_8);

        VAR_7->link_state = VAR_4;
        FUNC_3 (VAR_7);
    }
}
