
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_efuse_coding_scheme_t ;
typedef scalar_t__ esp_efuse_block_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;

esp_efuse_coding_scheme_t FUNC_2(esp_efuse_block_t VAR_10)
{
    esp_efuse_coding_scheme_t VAR_11;
    if (VAR_10 == VAR_0) {
        VAR_11 = VAR_4;
    } else {
        uint32_t VAR_12 = FUNC_1(VAR_1, VAR_2);
        if (VAR_12 == VAR_7 ||
            VAR_12 == (VAR_6 | VAR_8)) {
            VAR_11 = VAR_4;
        } else if (VAR_12 == VAR_6) {
            VAR_11 = VAR_3;
        } else {
            VAR_11 = VAR_5;
        }
    }
    FUNC_0(VAR_9, "coding scheme %d", VAR_11);
    return VAR_11;
}
