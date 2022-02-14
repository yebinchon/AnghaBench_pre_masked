
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int event; TYPE_4__* p_data; } ;
typedef TYPE_5__ tBTA_DM_SEARCH_PARAM ;
struct TYPE_8__ {int stat; } ;
struct TYPE_9__ {int bda; } ;
struct TYPE_13__ {TYPE_1__ rmt_srvc_rec; TYPE_2__ rmt_srvcs; } ;
typedef TYPE_6__ esp_bt_gap_cb_param_t ;
struct TYPE_10__ {int raw_data_size; int p_raw_data; int bd_addr; } ;
struct TYPE_11__ {TYPE_3__ disc_res; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_6__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_4)
{
    tBTA_DM_SEARCH_PARAM *VAR_5 = (tBTA_DM_SEARCH_PARAM *)VAR_4;

    switch (VAR_5->event) {
    case 128: {
        esp_bt_gap_cb_param_t VAR_6;
        FUNC_1(VAR_6.rmt_srvcs.bda, VAR_5->p_data->disc_res.bd_addr, VAR_0);
        if (VAR_5->p_data->disc_res.p_raw_data && VAR_5->p_data->disc_res.raw_data_size > 0) {
            VAR_6.rmt_srvc_rec.stat = VAR_3;


        } else {
            VAR_6.rmt_srvc_rec.stat = VAR_2;


        }
        FUNC_0(VAR_1, &VAR_6);
    }
    break;
    case 129:
    default:
        break;
    }
}
