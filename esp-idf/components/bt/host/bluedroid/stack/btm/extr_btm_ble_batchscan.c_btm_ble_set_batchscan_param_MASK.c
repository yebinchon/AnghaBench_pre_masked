
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_BLE_DISCARD_RULE ;
typedef int tBTM_BLE_BATCH_SCAN_MODE ;
typedef int tBLE_ADDR_TYPE ;
typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {int own_addr_type; } ;
struct TYPE_5__ {TYPE_1__ addr_mgnt_cb; } ;
struct TYPE_6__ {TYPE_2__ ble_ctr_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_4 (int *,int ,int) ;

tBTM_STATUS FUNC_5(tBTM_BLE_BATCH_SCAN_MODE VAR_8,
                                        UINT32 VAR_9, UINT32 VAR_10, tBLE_ADDR_TYPE VAR_11,
                                        tBTM_BLE_DISCARD_RULE VAR_12)
{
    tBTM_STATUS VAR_13 = VAR_4;
    UINT8 VAR_14[VAR_0], *VAR_15;

    VAR_15 = VAR_14;
    FUNC_4(VAR_14, 0, VAR_0);



    VAR_11 = VAR_7.ble_ctr_cb.addr_mgnt_cb.own_addr_type;

    FUNC_3 (VAR_15, VAR_1);
    FUNC_3 (VAR_15, VAR_8);
    FUNC_2 (VAR_15, VAR_10);
    FUNC_2 (VAR_15, VAR_9);
    FUNC_3 (VAR_15, VAR_11);
    FUNC_3 (VAR_15, VAR_12);

    if ((VAR_13 = FUNC_1 (VAR_5,
                  VAR_0,
                  VAR_14, VAR_6)) != VAR_2) {
        FUNC_0("btm_ble_set_batchscan_param %d", VAR_13);
        return VAR_3;
    }

    return VAR_13;
}
