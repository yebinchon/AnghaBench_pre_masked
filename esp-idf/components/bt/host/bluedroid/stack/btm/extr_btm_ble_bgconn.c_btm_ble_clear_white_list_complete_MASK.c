
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int white_list_avail_size; } ;
typedef TYPE_1__ tBTM_BLE_CB ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_5__ {int (* get_ble_white_list_size ) () ;} ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(UINT8 *VAR_2, UINT16 VAR_3)
{
    tBTM_BLE_CB *VAR_4 = &VAR_1.ble_ctr_cb;
    UINT8 VAR_5;
    FUNC_2(VAR_3);

    FUNC_0 ("btm_ble_clear_white_list_complete");
    FUNC_1 (VAR_5, VAR_2);

    if (VAR_5 == VAR_0) {
        VAR_4->white_list_avail_size = FUNC_3()->get_ble_white_list_size();
    }
}
