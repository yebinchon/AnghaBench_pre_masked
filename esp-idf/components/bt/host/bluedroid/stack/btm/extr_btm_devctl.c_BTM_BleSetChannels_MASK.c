
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_CMPL_CB ;
struct TYPE_4__ {int ble_channels_timer; int * p_ble_channels_cmpl_cb; } ;
struct TYPE_6__ {TYPE_1__ devcb; } ;
struct TYPE_5__ {int (* get_is_ready ) () ;} ;
typedef int BLE_CHANNELS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 () ;

tBTM_STATUS FUNC_4 (BLE_CHANNELS VAR_6, tBTM_CMPL_CB *VAR_7)
{
    if (!FUNC_2()->get_is_ready()) {
        return (VAR_2);
    }


    if (VAR_5.devcb.p_ble_channels_cmpl_cb) {
        return (VAR_3);
    }


    VAR_5.devcb.p_ble_channels_cmpl_cb = VAR_7;

    if (!FUNC_0 (VAR_6)) {
        return (VAR_3);
    }

    FUNC_1 (&VAR_5.devcb.ble_channels_timer, VAR_4, VAR_1);

    return VAR_0;
}
