
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ esp_flash_enc_mode_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    uint32_t VAR_3 = 0;
    FUNC_0(VAR_0, &VAR_3, 7);
    FUNC_2("FLASH_CRYPT_CNT eFuse value is %d\n", VAR_3);

    esp_flash_enc_mode_t VAR_4 = FUNC_1();
    if (VAR_4 == VAR_2) {
        FUNC_2("Flash encryption feature is disabled\n");
    } else {
        FUNC_2("Flash encryption feature is enabled in %s mode\n",
            VAR_4 == VAR_1 ? "DEVELOPMENT" : "RELEASE");
    }
}
