
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_4__ {char* password; } ;
struct TYPE_5__ {TYPE_1__ connection_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

esp_err_t FUNC_1(esp_http_client_handle_t VAR_3, char **VAR_4)
{
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
        FUNC_0(VAR_2, "client or value must not be NULL");
        return VAR_0;
    }
    *VAR_4 = VAR_3->connection_info.password;
    return VAR_1;
}
