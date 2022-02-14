
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int ,int*,int) ;

esp_err_t FUNC_3(uint8_t *VAR_8)
{



    uint8_t VAR_9;
    FUNC_2(VAR_2, &VAR_9, 8);
    if (VAR_9 != 1) {
        FUNC_0(VAR_7, "Base MAC address from BLK3 of EFUSE version error, version = %d", VAR_9);
        return VAR_4;
    }

    uint8_t VAR_10;
    FUNC_2(VAR_0, VAR_8, 48);
    FUNC_2(VAR_1, &VAR_10, 8);
    uint8_t VAR_11 = FUNC_1(VAR_8, 6);

    if (VAR_10 != VAR_11) {
        FUNC_0(VAR_7, "Base MAC address from BLK3 of EFUSE CRC error, efuse_crc = 0x%02x; calc_crc = 0x%02x", VAR_10, VAR_11);
        return VAR_3;
    }
    return VAR_6;

}
