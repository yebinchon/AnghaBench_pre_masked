
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* tBTA_START_ADV_CMPL_CBACK ) (scalar_t__) ;
struct TYPE_5__ {int type; int bda; } ;
typedef TYPE_1__ tBLE_BD_ADDR ;
typedef scalar_t__ esp_bt_status_t ;
struct TYPE_6__ {scalar_t__ adv_type; scalar_t__ adv_filter_policy; int channel_map; int own_addr_type; int adv_int_max; int adv_int_min; int peer_addr_type; int peer_addr; } ;
typedef TYPE_2__ esp_ble_adv_params_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,int,scalar_t__,TYPE_1__*,int (*) (scalar_t__)) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5 (esp_ble_adv_params_t *VAR_12, tBTA_START_ADV_CMPL_CBACK VAR_13)
{
    tBLE_BD_ADDR VAR_14;
    esp_bt_status_t VAR_15 = VAR_11;
    if (!FUNC_0(VAR_12->adv_int_min, VAR_8, VAR_7) ||
            !FUNC_0(VAR_12->adv_int_max, VAR_8, VAR_7)) {
        VAR_15 = VAR_10;
        FUNC_3("Invalid advertisting interval parameters.\n");
    }

    if ((VAR_12->adv_type < VAR_4) ||
            (VAR_12->adv_type > VAR_3) ) {
        VAR_15 = VAR_10;
        FUNC_3("Invalid advertisting type parameters.\n");
    }

    if ((VAR_12->adv_filter_policy < VAR_1) ||
            (VAR_12->adv_filter_policy > VAR_2) ) {
        VAR_15 = VAR_10;
        FUNC_3("Invalid advertisting type parameters.\n");
    }

    if((VAR_12->channel_map | VAR_0) != VAR_0 || VAR_12->channel_map == 0) {
        VAR_15 = VAR_10;
        FUNC_3("Invalid advertisting channel map parameters.\n");
    }
    if (!FUNC_0(VAR_12->peer_addr_type, VAR_5, VAR_6)) {
        VAR_15 = VAR_10;
        FUNC_3("Invalid advertisting peer address type parameters.\n");
    }
    if(VAR_15 != VAR_11) {
        if(VAR_13) {
            VAR_13(VAR_15);
        }
        return;
    }

    FUNC_2("API_Ble_AppStartAdvertising\n");

    FUNC_4(VAR_14.bda, VAR_12->peer_addr, VAR_9);
    VAR_14.type = VAR_12->peer_addr_type;
    FUNC_1(VAR_12->adv_int_min,
                             VAR_12->adv_int_max,
                             VAR_12->adv_type,
                             VAR_12->own_addr_type,
                             VAR_12->channel_map,
                             VAR_12->adv_filter_policy,
                             &VAR_14,
                             VAR_13);
}
