
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_ota_select_entry_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int *,int,int) ;

__attribute__((used)) static esp_err_t FUNC_3(esp_ota_select_entry_t *VAR_3, uint32_t VAR_4, bool VAR_5)
{
    esp_err_t VAR_6 = FUNC_1(VAR_4 / VAR_1);
    if (VAR_6 == VAR_0) {
        VAR_6 = FUNC_2(VAR_4, VAR_3, sizeof(esp_ota_select_entry_t), VAR_5);
    }
    if (VAR_6 != VAR_0) {
        FUNC_0(VAR_2, "Error in write_otadata operation. err = 0x%x", VAR_6);
    }
    return VAR_6;
}
