
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int event; TYPE_2__* p_data; } ;
typedef TYPE_4__ tBTA_DM_SEARCH_PARAM ;
typedef int esp_bt_uuid_t ;
struct TYPE_9__ {int num_uuids; int * uuid_list; int stat; int bda; } ;
struct TYPE_11__ {TYPE_3__ rmt_srvcs; } ;
typedef TYPE_5__ esp_bt_gap_cb_param_t ;
struct TYPE_7__ {int num_uuids; scalar_t__ p_uuid_list; int result; int bd_addr; } ;
struct TYPE_8__ {TYPE_1__ disc_res; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(char *VAR_6)
{
    tBTA_DM_SEARCH_PARAM *VAR_7 = (tBTA_DM_SEARCH_PARAM *)VAR_6;

    switch (VAR_7->event) {
    case 128: {
        esp_bt_gap_cb_param_t VAR_8;
        esp_bt_uuid_t *VAR_9 = ((void*)0);
        FUNC_1(VAR_8.rmt_srvcs.bda, VAR_7->p_data->disc_res.bd_addr, VAR_0);

        VAR_8.rmt_srvcs.stat = VAR_3;
        if (VAR_7->p_data->disc_res.result == VAR_1) {
            VAR_9 = FUNC_3(sizeof(esp_bt_uuid_t) * VAR_7->p_data->disc_res.num_uuids);
            if (VAR_9) {
                VAR_8.rmt_srvcs.stat = VAR_4;
                VAR_8.rmt_srvcs.num_uuids = VAR_7->p_data->disc_res.num_uuids;
                VAR_8.rmt_srvcs.uuid_list = VAR_9;

                uint8_t *VAR_10 = (uint8_t *)VAR_7->p_data->disc_res.p_uuid_list;
                esp_bt_uuid_t *VAR_11 = VAR_9;
                for (int VAR_12 = 0; VAR_12 < VAR_7->p_data->disc_res.num_uuids; VAR_12++, VAR_10 += VAR_5, VAR_11++) {
                    FUNC_4(VAR_11, VAR_10);
                }
            }
        }

        if (VAR_8.rmt_srvcs.stat == VAR_3) {
            VAR_8.rmt_srvcs.num_uuids = 0;
            VAR_8.rmt_srvcs.uuid_list = ((void*)0);
        }
        FUNC_0(VAR_2, &VAR_8);

        if (VAR_9) {
            FUNC_2(VAR_9);
        }
    }
    break;

    case 130:
    case 129:
    default:
        break;
    }
}
