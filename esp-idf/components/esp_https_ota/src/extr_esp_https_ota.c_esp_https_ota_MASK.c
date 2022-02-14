
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * esp_https_ota_handle_t ;
struct TYPE_3__ {int const* http_config; } ;
typedef TYPE_1__ esp_https_ota_config_t ;
typedef int esp_http_client_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

esp_err_t FUNC_4(const esp_http_client_config_t *VAR_5)
{
    if (!VAR_5) {
        FUNC_0(VAR_4, "esp_http_client config not found");
        return VAR_1;
    }

    esp_https_ota_config_t VAR_6 = {
        .http_config = VAR_5,
    };

    esp_https_ota_handle_t VAR_7 = ((void*)0);
    esp_err_t VAR_8 = FUNC_1(&VAR_6, &VAR_7);
    if (VAR_7 == ((void*)0)) {
        return VAR_2;
    }

    while (1) {
        VAR_8 = FUNC_3(VAR_7);
        if (VAR_8 != VAR_0) {
            break;
        }
    }

    esp_err_t VAR_9 = FUNC_2(VAR_7);
    if (VAR_8 != VAR_3) {



        return VAR_8;
    } else if (VAR_9 != VAR_3) {
        return VAR_9;
    }
    return VAR_3;
}
