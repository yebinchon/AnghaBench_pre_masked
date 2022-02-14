
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * esp_https_ota_handle_t ;
struct TYPE_4__ {TYPE_2__* http_config; } ;
typedef TYPE_1__ esp_https_ota_config_t ;
struct TYPE_5__ {char* cert_pem; int url; } ;
typedef TYPE_2__ esp_http_client_config_t ;
typedef scalar_t__ esp_err_t ;
typedef int esp_app_desc_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int **) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

void FUNC_13(void *VAR_6)
{
    FUNC_2(VAR_3, "Starting Advanced OTA example");

    esp_err_t VAR_7 = VAR_2;
    esp_http_client_config_t VAR_8 = {
        .url = VAR_0,
        .cert_pem = (char *)VAR_5,
    };

    esp_https_ota_config_t VAR_9 = {
        .http_config = &VAR_8,
    };

    esp_https_ota_handle_t VAR_10 = ((void*)0);
    esp_err_t VAR_11 = FUNC_3(&VAR_9, &VAR_10);
    if (VAR_11 != VAR_2) {
        FUNC_1(VAR_3, "ESP HTTPS OTA Begin failed");
        FUNC_11(((void*)0));
    }

    esp_app_desc_t VAR_12;
    VAR_11 = FUNC_6(VAR_10, &VAR_12);
    if (VAR_11 != VAR_2) {
        FUNC_1(VAR_3, "esp_https_ota_read_img_desc failed");
        goto ota_end;
    }
    VAR_11 = FUNC_12(&VAR_12);
    if (VAR_11 != VAR_2) {
        FUNC_1(VAR_3, "image header verification failed");
        goto ota_end;
    }

    while (1) {
        VAR_11 = FUNC_8(VAR_10);
        if (VAR_11 != VAR_1) {
            break;
        }



        FUNC_0(VAR_3, "Image bytes read: %d", FUNC_5(VAR_10));
    }

    if (FUNC_7(VAR_10) != 1) {

        FUNC_1(VAR_3, "Complete data was not received.");
    }

ota_end:
    VAR_7 = FUNC_4(VAR_10);
    if ((VAR_11 == VAR_2) && (VAR_7 == VAR_2)) {
        FUNC_2(VAR_3, "ESP_HTTPS_OTA upgrade successful. Rebooting ...");
        FUNC_10(1000 / VAR_4);
        FUNC_9();
    } else {
        FUNC_1(VAR_3, "ESP_HTTPS_OTA upgrade failed %d", VAR_7);
    }

    while (1) {
        FUNC_10(1000 / VAR_4);
    }
}
