
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* esp_http_client_handle_t ;
struct TYPE_3__ {char* post_data; int post_len; } ;



int FUNC_0(esp_http_client_handle_t VAR_0, char **VAR_1)
{
    if (VAR_0->post_data) {
        *VAR_1 = VAR_0->post_data;
        return VAR_0->post_len;
    }
    return 0;
}
