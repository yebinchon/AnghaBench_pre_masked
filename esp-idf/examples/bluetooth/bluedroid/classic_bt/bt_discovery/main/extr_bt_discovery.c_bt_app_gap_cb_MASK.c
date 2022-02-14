
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int esp_bt_uuid_t ;
struct TYPE_9__ {int num_uuids; int uuid_list; int stat; int bda; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_10__ {TYPE_2__ rmt_srvcs; TYPE_1__ disc_st_chg; } ;
typedef TYPE_3__ esp_bt_gap_cb_param_t ;
typedef int esp_bt_gap_cb_event_t ;
struct TYPE_11__ {int bda; int state; int dev_found; } ;
typedef TYPE_4__ app_gap_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_9 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,char*,int) ;

void FUNC_6(esp_bt_gap_cb_event_t VAR_10, esp_bt_gap_cb_param_t *VAR_11)
{
    app_gap_cb_t *VAR_12 = &VAR_9;
    char VAR_13[18];
    char VAR_14[37];

    switch (VAR_10) {
    case 131: {
        FUNC_4(VAR_11);
        break;
    }
    case 130: {
        if (VAR_11->disc_st_chg.state == VAR_6) {
            FUNC_0(VAR_8, "Device discovery stopped.");
            if ( (VAR_12->state == VAR_1 ||
                    VAR_12->state == VAR_0)
                    && VAR_12->dev_found) {
                VAR_12->state = VAR_2;
                FUNC_0(VAR_8, "Discover services ...");
                FUNC_2(VAR_12->bda);
            }
        } else if (VAR_11->disc_st_chg.state == VAR_5) {
            FUNC_0(VAR_8, "Discovery started.");
        }
        break;
    }
    case 129: {
        if (FUNC_3(VAR_11->rmt_srvcs.bda, VAR_12->bda, VAR_4) == 0 &&
                VAR_12->state == VAR_2) {
            VAR_12->state = VAR_3;
            if (VAR_11->rmt_srvcs.stat == VAR_7) {
                FUNC_0(VAR_8, "Services for device %s found", FUNC_1(VAR_12->bda, VAR_13, 18));
                for (int VAR_15 = 0; VAR_15 < VAR_11->rmt_srvcs.num_uuids; VAR_15++) {
                    esp_bt_uuid_t *VAR_16 = VAR_11->rmt_srvcs.uuid_list + VAR_15;
                    FUNC_0(VAR_8, "--%s", FUNC_5(VAR_16, VAR_14, 37));

                }
            } else {
                FUNC_0(VAR_8, "Services for device %s not found", FUNC_1(VAR_12->bda, VAR_13, 18));
            }
        }
        break;
    }
    case 128:
    default: {
        FUNC_0(VAR_8, "event: %d", VAR_10);
        break;
    }
    }
    return;
}
