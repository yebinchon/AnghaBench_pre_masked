
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssl_initialized; int tls; } ;
typedef TYPE_1__ transport_ssl_t ;
typedef int esp_transport_handle_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(esp_transport_handle_t VAR_0)
{
    int VAR_1 = -1;
    transport_ssl_t *VAR_2 = FUNC_1(VAR_0);
    if (VAR_2->ssl_initialized) {
        FUNC_0(VAR_2->tls);
        VAR_2->ssl_initialized = 0;
    }
    return VAR_1;
}
