
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* esp_transport_handle_t ;
typedef int * esp_tls_error_handle_t ;
struct TYPE_3__ {int * error_handle; } ;



esp_tls_error_handle_t FUNC_0(esp_transport_handle_t VAR_0)
{
    if (VAR_0) {
        return VAR_0->error_handle;
    }
    return ((void*)0);
}
