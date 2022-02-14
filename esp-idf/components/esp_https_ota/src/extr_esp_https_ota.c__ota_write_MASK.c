
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t binary_file_len; int update_handle; } ;
typedef TYPE_1__ esp_https_ota_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,void const*,size_t) ;

__attribute__((used)) static esp_err_t FUNC_3(esp_https_ota_t *VAR_4, const void *VAR_5, size_t VAR_6)
{
    if (VAR_5 == ((void*)0) || VAR_4 == ((void*)0)) {
        return VAR_1;
    }
    esp_err_t VAR_7 = FUNC_2(VAR_4->update_handle, VAR_5, VAR_6);
    if (VAR_7 != VAR_2) {
        FUNC_1(VAR_3, "Error: esp_ota_write failed! err=0x%d", VAR_7);
    } else {
        VAR_4->binary_file_len += VAR_6;
        FUNC_0(VAR_3, "Written image length %d", VAR_4->binary_file_len);
        VAR_7 = VAR_0;
    }
    return VAR_7;
}
