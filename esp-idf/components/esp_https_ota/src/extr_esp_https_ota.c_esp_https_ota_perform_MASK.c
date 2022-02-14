
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int binary_file_len; scalar_t__ ota_upgrade_buf; int ota_upgrade_buf_size; int http_client; int update_handle; int update_partition; } ;
typedef TYPE_1__ esp_https_ota_t ;
typedef scalar_t__ esp_https_ota_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,void const*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,int *) ;

esp_err_t FUNC_6(esp_https_ota_handle_t VAR_6)
{
    esp_https_ota_t *VAR_7 = (esp_https_ota_t *)VAR_6;
    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_5, "esp_https_ota_perform: Invalid argument");
        return VAR_0;
    }
    if (VAR_7->state < 129) {
        FUNC_0(VAR_5, "esp_https_ota_perform: Invalid state");
        return VAR_1;
    }

    esp_err_t VAR_8;
    int VAR_9;
    switch (VAR_7->state) {
        case 129:
            VAR_8 = FUNC_5(VAR_7->update_partition, VAR_4, &VAR_7->update_handle);
            if (VAR_8 != VAR_3) {
                FUNC_0(VAR_5, "esp_ota_begin failed (%s)", FUNC_3(VAR_8));
                return VAR_8;
            }
            VAR_7->state = 128;



            if (VAR_7->binary_file_len) {
                return FUNC_2(VAR_7, (const void *)VAR_7->ota_upgrade_buf, VAR_7->binary_file_len);
            }

        case 128:
            VAR_9 = FUNC_4(VAR_7->http_client,
                                             VAR_7->ota_upgrade_buf,
                                             VAR_7->ota_upgrade_buf_size);
            if (VAR_9 == 0) {
                FUNC_1(VAR_5, "Connection closed");
            } else if (VAR_9 < 0) {
                FUNC_0(VAR_5, "Error: SSL data read error");
                return VAR_1;
            } else if (VAR_9 > 0) {
                return FUNC_2(VAR_7, (const void *)VAR_7->ota_upgrade_buf, VAR_9);
            }
            VAR_7->state = VAR_2;
            break;
         default:
            FUNC_0(VAR_5, "Invalid ESP HTTPS OTA State");
            return VAR_1;
            break;
    }
    return VAR_3;
}
