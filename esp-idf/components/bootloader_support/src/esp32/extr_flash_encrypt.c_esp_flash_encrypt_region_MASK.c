
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*,int,int) ;
 int FUNC_3 (int,int*,int,int) ;
 int FUNC_4 () ;

esp_err_t FUNC_5(uint32_t VAR_4, size_t VAR_5)
{
    esp_err_t VAR_6;
    uint32_t VAR_7[VAR_2 / sizeof(uint32_t)];

    if (VAR_4 % VAR_2 != 0) {
        FUNC_0(VAR_3, "esp_flash_encrypt_region bad src_addr 0x%x",VAR_4);
        return VAR_0;
    }

    for (size_t VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += VAR_2) {
        FUNC_4();
        uint32_t VAR_9 = VAR_8 + VAR_4;
        VAR_6 = FUNC_2(VAR_9, VAR_7, VAR_2, 0);
        if (VAR_6 != VAR_1) {
            goto flash_failed;
        }
        VAR_6 = FUNC_1(VAR_9 / VAR_2);
        if (VAR_6 != VAR_1) {
            goto flash_failed;
        }
        VAR_6 = FUNC_3(VAR_9, VAR_7, VAR_2, 1);
        if (VAR_6 != VAR_1) {
            goto flash_failed;
        }
    }
    return VAR_1;

 flash_failed:
    FUNC_0(VAR_3, "flash operation failed: 0x%x", VAR_6);
    return VAR_6;
}
