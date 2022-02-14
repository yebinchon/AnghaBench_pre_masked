
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bta_dm_eir_min_name_len; int bta_dm_eir_inq_tx_power; int * bta_dm_eir_url; scalar_t__ bta_dm_eir_url_len; int * bta_dm_eir_manufac_spec; scalar_t__ bta_dm_eir_manufac_spec_len; scalar_t__ bta_dm_eir_flags; int bta_dm_eir_included_tx_power; int bta_dm_eir_included_uuid; int bta_dm_eir_fec_required; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_0(void)
{
    VAR_3->bta_dm_eir_fec_required = VAR_0;
    VAR_3->bta_dm_eir_min_name_len = 50;

    VAR_3->bta_dm_eir_included_uuid = VAR_2;
    VAR_3->bta_dm_eir_included_tx_power = VAR_1;
    VAR_3->bta_dm_eir_inq_tx_power = 3;
    VAR_3->bta_dm_eir_flags = 0;

    VAR_3->bta_dm_eir_manufac_spec_len = 0;
    VAR_3->bta_dm_eir_manufac_spec = ((void*)0);

    VAR_3->bta_dm_eir_url_len = 0;
    VAR_3->bta_dm_eir_url = ((void*)0);
}
