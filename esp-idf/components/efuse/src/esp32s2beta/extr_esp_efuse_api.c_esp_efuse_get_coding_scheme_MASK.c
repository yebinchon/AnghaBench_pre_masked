
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_efuse_coding_scheme_t ;
typedef scalar_t__ esp_efuse_block_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_3 ;

esp_efuse_coding_scheme_t FUNC_1(esp_efuse_block_t VAR_4)
{
    esp_efuse_coding_scheme_t VAR_5;
    if (VAR_4 == VAR_0) {
        VAR_5 = VAR_1;
    } else {
        VAR_5 = VAR_2;
    }
    FUNC_0(VAR_3, "coding scheme %d", VAR_5);
    return VAR_5;
}
