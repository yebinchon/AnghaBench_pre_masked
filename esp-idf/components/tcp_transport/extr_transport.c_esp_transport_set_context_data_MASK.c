
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* esp_transport_handle_t ;
typedef int esp_err_t ;
struct TYPE_3__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;

esp_err_t FUNC_0(esp_transport_handle_t VAR_2, void *VAR_3)
{
    if (VAR_2) {
        VAR_2->data = VAR_3;
        return VAR_1;
    }
    return VAR_0;
}
