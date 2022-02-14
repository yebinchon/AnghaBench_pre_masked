
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int update_partition; int http_client; struct TYPE_3__* ota_upgrade_buf; int update_handle; } ;
typedef TYPE_1__ esp_https_ota_t ;
typedef scalar_t__ esp_https_ota_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

esp_err_t FUNC_5(esp_https_ota_handle_t VAR_4)
{
    esp_https_ota_t *VAR_5 = (esp_https_ota_t *)VAR_4;
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }
    if (VAR_5->state < 130) {
        return VAR_1;
    }

    esp_err_t VAR_6 = VAR_2;
    switch (VAR_5->state) {
        case 128:
        case 129:
            VAR_6 = FUNC_2(VAR_5->update_handle);

        case 130:
            if (VAR_5->ota_upgrade_buf) {
                FUNC_4(VAR_5->ota_upgrade_buf);
            }
            if (VAR_5->http_client) {
                FUNC_1(VAR_5->http_client);
            }
            break;
        default:
            FUNC_0(VAR_3, "Invalid ESP HTTPS OTA State");
            break;
    }

    if ((VAR_6 == VAR_2) && (VAR_5->state == 128)) {
        esp_err_t VAR_7 = FUNC_3(VAR_5->update_partition);
        if (VAR_7 != VAR_2) {
            FUNC_0(VAR_3, "esp_ota_set_boot_partition failed! err=0x%d", VAR_7);
        }
    }
    FUNC_4(VAR_5);
    return VAR_6;
}
