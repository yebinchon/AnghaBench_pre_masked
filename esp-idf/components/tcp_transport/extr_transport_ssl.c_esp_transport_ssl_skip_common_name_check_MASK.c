
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int skip_common_name; } ;
struct TYPE_5__ {TYPE_1__ cfg; } ;
typedef TYPE_2__ transport_ssl_t ;
typedef scalar_t__ esp_transport_handle_t ;


 TYPE_2__* FUNC_0 (scalar_t__) ;

void FUNC_1(esp_transport_handle_t VAR_0)
{
    transport_ssl_t *VAR_1 = FUNC_0(VAR_0);
    if (VAR_0 && VAR_1) {
        VAR_1->cfg.skip_common_name = 1;
    }
}
