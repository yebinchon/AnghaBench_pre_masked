
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_image_segment_header_t ;
typedef int esp_image_header_t ;
struct TYPE_2__ {scalar_t__ state; int binary_file_len; int * ota_upgrade_buf; int http_client; } ;
typedef TYPE_1__ esp_https_ota_t ;
typedef scalar_t__ esp_https_ota_handle_t ;
typedef int esp_err_t ;
typedef int esp_app_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int *,int) ;

esp_err_t FUNC_3(esp_https_ota_handle_t VAR_6, esp_app_desc_t *VAR_7)
{
    esp_https_ota_t *VAR_8 = (esp_https_ota_t *)VAR_6;
    if (VAR_8 == ((void*)0) || VAR_7 == ((void*)0)) {
        FUNC_0(VAR_5, "esp_https_ota_read_img_desc: Invalid argument");
        return VAR_0;
    }
    if (VAR_8->state < VAR_2) {
        FUNC_0(VAR_5, "esp_https_ota_read_img_desc: Invalid state");
        return VAR_1;
    }
    int VAR_9 = VAR_4;
    int VAR_10 = FUNC_1(VAR_8->http_client,
                                         VAR_8->ota_upgrade_buf,
                                         VAR_9);
    if (VAR_10 < 0) {
        return VAR_1;
    }
    if (VAR_10 >= sizeof(esp_image_header_t) + sizeof(esp_image_segment_header_t) + sizeof(esp_app_desc_t)) {
        FUNC_2(VAR_7, &VAR_8->ota_upgrade_buf[sizeof(esp_image_header_t) + sizeof(esp_image_segment_header_t)], sizeof(esp_app_desc_t));
        VAR_8->binary_file_len += VAR_10;
    } else {
        return VAR_1;
    }
    return VAR_3;
}
