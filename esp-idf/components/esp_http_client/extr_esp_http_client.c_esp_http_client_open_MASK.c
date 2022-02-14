
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int post_len; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

esp_err_t FUNC_2(esp_http_client_handle_t VAR_1, int VAR_2)
{
    VAR_1->post_len = VAR_2;
    esp_err_t VAR_3;
    if ((VAR_3 = FUNC_0(VAR_1)) != VAR_0) {
        return VAR_3;
    }
    if ((VAR_3 = FUNC_1(VAR_1, VAR_2)) != VAR_0) {
        return VAR_3;
    }
    return VAR_0;
}
