
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* psk_hint_key; } ;
struct TYPE_5__ {TYPE_1__ cfg; } ;
typedef TYPE_2__ transport_ssl_t ;
typedef int psk_hint_key_t ;
typedef scalar_t__ esp_transport_handle_t ;


 TYPE_2__* FUNC_0 (scalar_t__) ;

void FUNC_1(esp_transport_handle_t VAR_0, const psk_hint_key_t* VAR_1)
{
    transport_ssl_t *VAR_2 = FUNC_0(VAR_0);
    if (VAR_0 && VAR_2) {
        VAR_2->cfg.psk_hint_key = VAR_1;
    }
}
