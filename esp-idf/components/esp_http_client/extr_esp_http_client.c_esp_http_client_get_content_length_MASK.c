
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* esp_http_client_handle_t ;
struct TYPE_5__ {TYPE_1__* response; } ;
struct TYPE_4__ {int content_length; } ;



int FUNC_0(esp_http_client_handle_t VAR_0)
{
    return VAR_0->response->content_length;
}
