
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_http_client_method_t ;
typedef TYPE_2__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int method; } ;
struct TYPE_5__ {TYPE_1__ connection_info; } ;


 int VAR_0 ;

esp_err_t FUNC_0(esp_http_client_handle_t VAR_1, esp_http_client_method_t VAR_2)
{
    VAR_1->connection_info.method = VAR_2;
    return VAR_0;
}
