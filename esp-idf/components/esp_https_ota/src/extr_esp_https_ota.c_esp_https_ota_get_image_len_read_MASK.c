
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; int binary_file_len; } ;
typedef TYPE_1__ esp_https_ota_t ;
typedef scalar_t__ esp_https_ota_handle_t ;


 scalar_t__ VAR_0 ;

int FUNC_0(esp_https_ota_handle_t VAR_1)
{
    esp_https_ota_t *VAR_2 = (esp_https_ota_t *)VAR_1;
    if (VAR_2 == ((void*)0)) {
        return -1;
    }
    if (VAR_2->state < VAR_0) {
        return -1;
    }
    return VAR_2->binary_file_len;
}
