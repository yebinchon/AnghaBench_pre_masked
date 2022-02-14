
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ scan_int; scalar_t__ scan_win; scalar_t__ conn_state; } ;
typedef TYPE_1__ tBTM_BLE_CB ;
typedef scalar_t__ UINT32 ;
struct TYPE_4__ {TYPE_1__ ble_ctr_cb; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 () ;
 TYPE_2__ VAR_7 ;

void FUNC_3 (UINT32 VAR_8, UINT32 VAR_9)
{

    tBTM_BLE_CB *VAR_10 = &VAR_7.ble_ctr_cb;
    BOOLEAN VAR_11 = VAR_5;

    if (FUNC_0(VAR_8, VAR_2, VAR_1) &&
            FUNC_0(VAR_9, VAR_4, VAR_3)) {
        if (VAR_10->scan_int != VAR_8) {
            VAR_10->scan_int = VAR_8;
            VAR_11 = VAR_6;
        }

        if (VAR_10->scan_win != VAR_9) {
            VAR_10->scan_win = VAR_9;
            VAR_11 = VAR_6;
        }

        if (VAR_11 && VAR_10->conn_state == VAR_0) {
            FUNC_2();
        }
    } else {
        FUNC_1("Illegal Connection Scan Parameters");
    }

}
