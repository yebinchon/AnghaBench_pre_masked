
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cacert_pem_bytes; void* cacert_pem_buf; } ;
struct TYPE_5__ {TYPE_1__ cfg; } ;
typedef TYPE_2__ transport_ssl_t ;
typedef scalar_t__ esp_transport_handle_t ;


 TYPE_2__* FUNC_0 (scalar_t__) ;

void FUNC_1(esp_transport_handle_t VAR_0, const char *VAR_1, int VAR_2)
{
    transport_ssl_t *VAR_3 = FUNC_0(VAR_0);
    if (VAR_0 && VAR_3) {
        VAR_3->cfg.cacert_pem_buf = (void *)VAR_1;
        VAR_3->cfg.cacert_pem_bytes = VAR_2 + 1;
    }
}
