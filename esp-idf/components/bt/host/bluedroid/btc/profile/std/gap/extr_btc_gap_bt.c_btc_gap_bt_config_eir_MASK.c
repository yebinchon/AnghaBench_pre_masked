
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int bta_dm_eir_url; int bta_dm_eir_url_len; int bta_dm_eir_manufac_spec; int bta_dm_eir_manufac_spec_len; int bta_dm_eir_flags; int bta_dm_eir_included_uuid; int bta_dm_eir_included_tx_power; int bta_dm_eir_fec_required; } ;
typedef TYPE_2__ tBTA_DM_EIR_CONF ;
struct TYPE_9__ {int p_url; int url_len; int p_manufacturer_data; int manufacturer_len; int flag; int include_uuid; int include_txpower; int fec_required; } ;
typedef TYPE_3__ esp_bt_eir_data_t ;
struct TYPE_7__ {TYPE_3__ eir_data; } ;
struct TYPE_10__ {TYPE_1__ config_eir; } ;
typedef TYPE_4__ btc_gap_bt_args_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(btc_gap_bt_args_t *VAR_0)
{
    tBTA_DM_EIR_CONF VAR_1;
    esp_bt_eir_data_t *VAR_2 = &VAR_0->config_eir.eir_data;

    VAR_1.bta_dm_eir_fec_required = VAR_2->fec_required;
    VAR_1.bta_dm_eir_included_tx_power = VAR_2->include_txpower;
    VAR_1.bta_dm_eir_included_uuid = VAR_2->include_uuid;
    VAR_1.bta_dm_eir_flags = VAR_2->flag;
    VAR_1.bta_dm_eir_manufac_spec_len = VAR_2->manufacturer_len;
    VAR_1.bta_dm_eir_manufac_spec = VAR_2->p_manufacturer_data;
    VAR_1.bta_dm_eir_url_len = VAR_2->url_len;
    VAR_1.bta_dm_eir_url = VAR_2->p_url;

    FUNC_0(&VAR_1);
}
