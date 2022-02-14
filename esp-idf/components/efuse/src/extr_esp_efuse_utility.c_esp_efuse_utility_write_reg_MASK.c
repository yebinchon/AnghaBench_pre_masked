
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_err_t ;
typedef int esp_efuse_block_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int,int) ;

esp_err_t FUNC_3(esp_efuse_block_t VAR_3, unsigned int VAR_4, uint32_t VAR_5)
{
    esp_err_t VAR_6 = VAR_1;
    uint32_t VAR_7 = FUNC_1(VAR_3, VAR_4);
    if (VAR_7 & VAR_5) {
        FUNC_0(VAR_2, "Repeated programming of programmed bits is strictly forbidden 0x%08x", VAR_7 & VAR_5);
        VAR_6 = VAR_0;
    } else {
        FUNC_2(VAR_3, VAR_4, VAR_5);
    }
    return VAR_6;
}
