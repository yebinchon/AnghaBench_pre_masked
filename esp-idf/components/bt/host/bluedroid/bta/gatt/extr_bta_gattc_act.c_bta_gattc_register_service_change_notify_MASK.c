
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_13__ {int member_0; } ;
struct TYPE_14__ {TYPE_1__ member_1; int member_0; } ;
typedef TYPE_2__ tBT_UUID ;
struct TYPE_15__ {int len; int * p_value; } ;
typedef TYPE_3__ tBTA_GATT_UNFMT ;
struct TYPE_16__ {int * characteristics; int uuid; } ;
typedef TYPE_4__ tBTA_GATTC_SERVICE ;
struct TYPE_17__ {int * p_srvc_cache; } ;
typedef TYPE_5__ tBTA_GATTC_SERV ;
typedef int tBTA_GATTC_FIND_SERVICE_CB ;
struct TYPE_18__ {int handle; int uuid; } ;
typedef TYPE_6__ tBTA_GATTC_DESCRIPTOR ;
struct TYPE_19__ {scalar_t__ write_remote_svc_change_ccc_done; int svc_change_descr_handle; } ;
typedef TYPE_7__ tBTA_GATTC_CONN ;
struct TYPE_20__ {int * descriptors; int uuid; } ;
typedef TYPE_8__ tBTA_GATTC_CHARACTERISTIC ;
typedef int list_t ;
typedef int list_node_t ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,TYPE_3__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_7__* FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,scalar_t__) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;

tBTA_GATTC_FIND_SERVICE_CB FUNC_8(UINT16 VAR_14, BD_ADDR VAR_15)
{
    tBTA_GATTC_SERV *VAR_16 = ((void*)0);
    list_t *VAR_17 = ((void*)0);
    tBTA_GATTC_SERVICE *VAR_18 = ((void*)0);
    tBTA_GATTC_CHARACTERISTIC *VAR_19 = ((void*)0);
    tBTA_GATTC_DESCRIPTOR *VAR_20 = ((void*)0);
    tBTA_GATTC_FIND_SERVICE_CB VAR_21;
    BOOLEAN VAR_22 = VAR_2;
    BOOLEAN VAR_23 = VAR_2;
    BOOLEAN VAR_24 = VAR_2;
    BOOLEAN VAR_25 = VAR_2;

    tBT_UUID VAR_26 = {VAR_6, VAR_13};
    tBT_UUID VAR_27 = {VAR_6, VAR_5};
    tBT_UUID VAR_28 = {VAR_6, VAR_4};
    tBTA_GATTC_CONN *VAR_29 = FUNC_1(VAR_15);
    if(VAR_29 && VAR_29->write_remote_svc_change_ccc_done) {
        return VAR_9;
    }

    VAR_16 = FUNC_2(VAR_15);
    if ((VAR_16 != ((void*)0)) && (VAR_16->p_srvc_cache != ((void*)0))) {
        VAR_17 = VAR_16->p_srvc_cache;
        VAR_22 = VAR_12;
    }
    else {
        VAR_21 = VAR_7;
    }

    if (VAR_22 == VAR_12) {
        for (list_node_t *VAR_30 = FUNC_4(VAR_17);
             VAR_30 != FUNC_5(VAR_17); VAR_30 = FUNC_6(VAR_30)) {
            VAR_18 = FUNC_7(VAR_30);
            if (FUNC_3(&VAR_26, &VAR_18->uuid, VAR_12)) {
                VAR_23 = VAR_12;
                break;
            }
        }
    }
    else {
        VAR_21 = VAR_7;
    }


    if (VAR_23 == VAR_12) {
        if (VAR_18->characteristics) {
            for (list_node_t *VAR_31 = FUNC_4(VAR_18->characteristics);
                 VAR_31 != FUNC_5(VAR_18->characteristics); VAR_31 = FUNC_6(VAR_31)) {
                VAR_19 = FUNC_7(VAR_31);
                if (FUNC_3(&VAR_27, &VAR_19->uuid, VAR_12)) {
                    VAR_24 = VAR_12;
                    break;
                }
            }
        }
    }
    else if (VAR_22 == VAR_12) {

        VAR_21 = VAR_11;
    }

    if (VAR_24 == VAR_12) {
        if (VAR_19->descriptors) {
            for (list_node_t *VAR_32 = FUNC_4(VAR_19->descriptors);
                 VAR_32 != FUNC_5(VAR_19->descriptors); VAR_32 = FUNC_6(VAR_32)) {
                VAR_20 = FUNC_7(VAR_32);
                if (FUNC_3(&VAR_28, &VAR_20->uuid, VAR_12)) {
                    VAR_25 = VAR_12;
                    break;
                }
            }
        }
    }
    else if (VAR_23 ==VAR_12) {





        VAR_21 = VAR_10;
    }

    if (VAR_25 == VAR_12){
        if (VAR_29) {
            VAR_29->svc_change_descr_handle = VAR_20->handle;
            VAR_29->write_remote_svc_change_ccc_done = VAR_12;
        }
        VAR_21 = VAR_9;
        uint16_t VAR_33 = VAR_3;
        tBTA_GATT_UNFMT VAR_34;
        VAR_34.len = 2;
        VAR_34.p_value = (uint8_t *)&VAR_33;
        FUNC_0 (VAR_14, VAR_20->handle, VAR_0, &VAR_34, VAR_1);

    }
    else if (VAR_24 == VAR_12) {





        VAR_21 = VAR_8;
    }

    return VAR_21;
}
