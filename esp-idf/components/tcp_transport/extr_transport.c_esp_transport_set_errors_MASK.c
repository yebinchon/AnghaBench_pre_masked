
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* esp_transport_handle_t ;
typedef int esp_tls_last_error_t ;
typedef int esp_tls_error_handle_t ;
struct TYPE_3__ {int error_handle; } ;


 int FUNC_0 (int ,int const,int) ;

void FUNC_1(esp_transport_handle_t VAR_0, const esp_tls_error_handle_t VAR_1)
{
    if (VAR_0) {
        FUNC_0(VAR_0->error_handle, VAR_1, sizeof(esp_tls_last_error_t));
    }
}
