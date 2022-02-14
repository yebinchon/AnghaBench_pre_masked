
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {int in_controller_list; int static_addr_type; int static_addr; } ;
struct TYPE_17__ {TYPE_1__ ble; } ;
typedef TYPE_6__ tBTM_SEC_DEV_REC ;
struct TYPE_13__ {int bda; int type; } ;
struct TYPE_18__ {scalar_t__ connectable_mode; scalar_t__ directed_conn; scalar_t__ afp; TYPE_2__ direct_bda; scalar_t__ scan_rsp; } ;
typedef TYPE_7__ tBTM_BLE_INQ_CB ;
typedef int tBLE_ADDR_TYPE ;
typedef scalar_t__ UINT8 ;
struct TYPE_16__ {scalar_t__ privacy_mode; } ;
struct TYPE_14__ {int in_controller_list; int static_addr_type; int static_addr; } ;
struct TYPE_15__ {int sec_flags; TYPE_3__ ble; } ;
struct TYPE_11__ {TYPE_5__ ble_ctr_cb; TYPE_4__* sec_dev_rec; } ;
typedef int BD_ADDR_PTR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_10__ VAR_18 ;
 TYPE_6__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static UINT8 FUNC_4(tBTM_BLE_INQ_CB *VAR_19,
        BD_ADDR_PTR VAR_20,
        tBLE_ADDR_TYPE *VAR_21,
        tBLE_ADDR_TYPE *VAR_22)
{
    UINT8 VAR_23;

    UINT8 VAR_24 = VAR_16;
    tBTM_SEC_DEV_REC *VAR_25;

    VAR_23 = (VAR_19->connectable_mode == VAR_8) ? ((VAR_19->scan_rsp) ? VAR_7 : VAR_9 ) : VAR_5;



    if (VAR_23 == VAR_5) {
        VAR_23 = VAR_19->directed_conn;

        if ( VAR_19->directed_conn == VAR_4 ||
                VAR_19->directed_conn == VAR_6) {



            if (VAR_18.ble_ctr_cb.privacy_mode == VAR_11 ||
                    VAR_18.ble_ctr_cb.privacy_mode == VAR_12) {

                if ((VAR_25 = FUNC_2 (VAR_19->direct_bda.bda)) != ((void*)0) &&
                        VAR_25->ble.in_controller_list & VAR_14) {
                    FUNC_1(VAR_10);
                    FUNC_3(VAR_20, VAR_25->ble.static_addr, VAR_1);
                    *VAR_21 = VAR_25->ble.static_addr_type;
                    *VAR_22 = VAR_3;
                    return VAR_23;
                }

                else {
                    FUNC_0(VAR_10, VAR_17);
                }
            }


            *VAR_21 = VAR_19->direct_bda.type;
            FUNC_3(VAR_20, VAR_19->direct_bda.bda, VAR_1);
            return VAR_23;
        }
    }




    if ((VAR_18.ble_ctr_cb.privacy_mode == VAR_11 && VAR_19->afp != VAR_0) ||
            VAR_18.ble_ctr_cb.privacy_mode == VAR_12) {

        for (VAR_24 = 0; VAR_24 < VAR_16; VAR_24 ++) {
            if ((VAR_18.sec_dev_rec[VAR_24].sec_flags & VAR_15) != 0 &&
                    (VAR_18.sec_dev_rec[VAR_24].ble.in_controller_list & VAR_14) != 0) {
                FUNC_3(VAR_20, VAR_18.sec_dev_rec[VAR_24].ble.static_addr, VAR_1);
                *VAR_21 = VAR_18.sec_dev_rec[VAR_24].ble.static_addr_type;
                break;
            }
        }

        if (VAR_24 != VAR_16) {
            *VAR_22 = VAR_3;
        } else

        {
            *VAR_22 = VAR_2;
        }
    }


    else if (VAR_18.ble_ctr_cb.privacy_mode != VAR_13) {
        *VAR_22 = VAR_2;
    }




    return VAR_23;
}
