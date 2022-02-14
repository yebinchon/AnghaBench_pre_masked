
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_hf_outgoing_data_cb_t ;
typedef int esp_hf_incoming_data_cb_t ;
struct TYPE_2__ {int btc_hf_outgoing_data_cb; int btc_hf_incoming_data_cb; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(esp_hf_incoming_data_cb_t VAR_1, esp_hf_outgoing_data_cb_t VAR_2)
{
    VAR_0[0].btc_hf_incoming_data_cb = VAR_1;
    VAR_0[0].btc_hf_outgoing_data_cb = VAR_2;
}
