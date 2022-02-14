
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_5__ {scalar_t__ scan_duplicate_filter; scalar_t__ scan_type; int state; } ;
typedef TYPE_2__ tBTM_BLE_INQ_CB ;
struct TYPE_4__ {TYPE_2__ inq_var; } ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_12 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;

tBTM_STATUS FUNC_5(void)
{
    tBTM_BLE_INQ_CB *VAR_16 = &VAR_12.ble_ctr_cb.inq_var;
    tBTM_STATUS VAR_17 = VAR_7;

    FUNC_2(&VAR_13, VAR_10);

    if(VAR_16->scan_duplicate_filter > VAR_1) {
        VAR_16->scan_duplicate_filter = VAR_0;
    }

    if (!FUNC_1 (VAR_3, VAR_16->scan_duplicate_filter)) {
        VAR_17 = VAR_8;
    } else {
        FUNC_4(&VAR_14, VAR_11);
        if(VAR_15 != VAR_9) {
            VAR_17 = VAR_8;
        }
        VAR_12.ble_ctr_cb.inq_var.state = VAR_2;
        if (VAR_16->scan_type == VAR_4) {
            FUNC_0(VAR_5);
        } else {
            FUNC_0(VAR_6);
        }
    }
    FUNC_3(&VAR_13);
    return VAR_17;
}
