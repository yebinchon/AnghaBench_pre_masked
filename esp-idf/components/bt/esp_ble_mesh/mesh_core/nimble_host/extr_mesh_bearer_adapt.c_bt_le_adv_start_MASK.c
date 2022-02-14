
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct bt_mesh_adv_param {int options; int interval_max; int interval_min; } ;
struct bt_mesh_adv_data {int dummy; } ;
struct ble_gap_adv_params {void* disc_mode; void* conn_mode; int itvl_max; int itvl_min; } ;
struct TYPE_2__ {int flags; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int) ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;
 int FUNC_3 (int ,int *,int ,struct ble_gap_adv_params*,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct ble_gap_adv_params*,int ,int) ;
 int FUNC_7 (struct bt_mesh_adv_data const*,size_t,scalar_t__*,scalar_t__*) ;

int FUNC_8(const struct bt_mesh_adv_param *VAR_14,
                    const struct bt_mesh_adv_data *VAR_15, size_t VAR_16,
                    const struct bt_mesh_adv_data *VAR_17, size_t VAR_18)
{





    uint8_t VAR_19[VAR_4];
    uint8_t VAR_20 = 0;
    int VAR_21;
    struct ble_gap_adv_params VAR_22;

    VAR_21 = FUNC_7(VAR_15, VAR_16, VAR_19, &VAR_20);
    if (VAR_21) {
        FUNC_0("set_ad failed: err %d", VAR_21);
        return VAR_21;
    }

    VAR_21 = FUNC_2(VAR_19, VAR_20);
    if (VAR_21 != 0) {
        FUNC_0("Advertising set failed: err %d", VAR_21);
        return VAR_21;
    }

    if (VAR_17 && (VAR_14->options & VAR_6)) {
        VAR_20 = 0;

        VAR_21 = FUNC_7(VAR_17, VAR_18, VAR_19, &VAR_20);
        if (VAR_21) {
            FUNC_0("set_ad failed: err %d", VAR_21);
            return VAR_21;
        }

        VAR_21 = FUNC_1(VAR_19, VAR_20);
        if (VAR_21 != 0) {
            FUNC_0("Scan rsp failed: err %d", VAR_21);
            return VAR_21;
        }
    }

    FUNC_6(&VAR_22, 0, sizeof VAR_22);
    VAR_22.itvl_min = VAR_14->interval_min;
    VAR_22.itvl_max = VAR_14->interval_max;

    if (VAR_14->options & VAR_6) {
        VAR_22.conn_mode = VAR_1;
        VAR_22.disc_mode = VAR_2;
    } else if (VAR_17 != ((void*)0)) {
        VAR_22.conn_mode = VAR_0;
        VAR_22.disc_mode = VAR_2;
    } else {
        VAR_22.conn_mode = VAR_0;
        VAR_22.disc_mode = VAR_3;
    }

    VAR_21 = FUNC_3(VAR_10, ((void*)0), VAR_5, &VAR_22,
                            VAR_13, ((void*)0));
    if (VAR_21) {
        FUNC_0("Advertising start failed: err %d", VAR_21);
        return VAR_21;
    }
    return 0;
}
