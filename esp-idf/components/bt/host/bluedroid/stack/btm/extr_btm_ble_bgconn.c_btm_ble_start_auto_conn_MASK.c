
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int own_addr_type; } ;
struct TYPE_8__ {scalar_t__ conn_state; scalar_t__ scan_int; scalar_t__ scan_win; scalar_t__ rl_state; int wl_state; TYPE_1__ addr_mgnt_cb; } ;
typedef TYPE_2__ tBTM_BLE_CB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_11__ {TYPE_2__ ble_ctr_cb; } ;
struct TYPE_10__ {scalar_t__ (* supports_ble_privacy ) () ;} ;
struct TYPE_9__ {int member_0; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_3__ BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_6__ VAR_18 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,scalar_t__,int,int ,TYPE_3__,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_8 () ;
 scalar_t__ FUNC_9 () ;

BOOLEAN FUNC_10(BOOLEAN VAR_19)
{
    tBTM_BLE_CB *VAR_20 = &VAR_18.ble_ctr_cb;
    BD_ADDR VAR_21 = {0};
    BOOLEAN VAR_22 = VAR_17;
    UINT16 VAR_23;
    UINT16 VAR_24;
    UINT8 VAR_25 = VAR_20->addr_mgnt_cb.own_addr_type;
    UINT8 VAR_26 = VAR_0;

    if (VAR_19) {
        if (VAR_20->conn_state == VAR_4 && FUNC_1()
                && FUNC_4(VAR_14)) {
            VAR_20->wl_state |= VAR_15;

            FUNC_5();


            FUNC_2(VAR_10);

            VAR_23 = (VAR_20->scan_int == VAR_11) ?
                       VAR_12 : VAR_20->scan_int;
            VAR_24 = (VAR_20->scan_win == VAR_11) ?
                       VAR_13 : VAR_20->scan_win;


            if (VAR_18.ble_ctr_cb.rl_state != VAR_9
                    && FUNC_8()->supports_ble_privacy()) {
                VAR_25 |= VAR_1;
                VAR_26 |= VAR_1;
            }


            if (!FUNC_7 (VAR_23,
                                                VAR_24,
                                                0x01,
                                                VAR_26,
                                                VAR_21,
                                                VAR_25,
                                                VAR_6,
                                                VAR_5,
                                                VAR_7,
                                                VAR_8,
                                                0,
                                                0)) {

                VAR_22 = VAR_16;
                VAR_20->wl_state &= ~VAR_15;
            } else {
                FUNC_3 (VAR_2);
            }
        } else {
            VAR_22 = VAR_16;
        }
    } else {
        if (VAR_20->conn_state == VAR_2) {
            FUNC_6();
            FUNC_3 (VAR_3);
            VAR_20->wl_state &= ~VAR_15;
        } else {
            FUNC_0("conn_st = %d, not in auto conn state, cannot stop", VAR_20->conn_state);
            VAR_22 = VAR_16;
        }
    }
    return VAR_22;
}
