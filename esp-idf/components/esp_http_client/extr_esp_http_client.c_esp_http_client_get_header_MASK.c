
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_5__ {TYPE_1__* request; } ;
struct TYPE_4__ {int headers; } ;


 int FUNC_0 (int ,char const*,char**) ;

esp_err_t FUNC_1(esp_http_client_handle_t VAR_0, const char *VAR_1, char **VAR_2)
{
    return FUNC_0(VAR_0->request->headers, VAR_1, VAR_2);
}
