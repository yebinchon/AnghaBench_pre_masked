
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bg_conn_type; int p_select_cback; } ;
typedef TYPE_1__ tBTM_BLE_CB ;
struct TYPE_4__ {TYPE_1__ ble_ctr_cb; } ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__ VAR_5 ;

BOOLEAN FUNC_2(void)
{
    tBTM_BLE_CB *VAR_6 = &VAR_5.ble_ctr_cb;
    BOOLEAN VAR_7 = VAR_3;

    if (VAR_6->bg_conn_type != VAR_1) {
        if (VAR_6->bg_conn_type == VAR_0) {
            VAR_7 = FUNC_0(VAR_4);
        }

        if (VAR_6->bg_conn_type == VAR_2) {
            VAR_7 = FUNC_1(VAR_4, VAR_5.ble_ctr_cb.p_select_cback);
        }
    }

    return VAR_7;
}
