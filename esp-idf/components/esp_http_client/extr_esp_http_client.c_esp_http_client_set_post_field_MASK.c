
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_5__ {char* post_data; int post_len; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,char**) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;

esp_err_t FUNC_3(esp_http_client_handle_t VAR_2, const char *VAR_3, int VAR_4)
{
    esp_err_t VAR_5 = VAR_0;
    VAR_2->post_data = (char *)VAR_3;
    VAR_2->post_len = VAR_4;
    FUNC_0(VAR_1, "set post file length = %d", VAR_4);
    if (VAR_2->post_data) {
        char *VAR_6 = ((void*)0);
        if ((VAR_5 = FUNC_1(VAR_2, "Content-Type", &VAR_6)) != VAR_0) {
            return VAR_5;
        }
        if (VAR_6 == ((void*)0)) {
            VAR_5 = FUNC_2(VAR_2, "Content-Type", "application/x-www-form-urlencoded");
        }
    } else {
        VAR_2->post_len = 0;
        VAR_5 = FUNC_2(VAR_2, "Content-Type", ((void*)0));
    }
    return VAR_5;
}
