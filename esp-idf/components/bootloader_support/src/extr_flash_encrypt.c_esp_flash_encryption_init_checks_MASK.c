
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ esp_flash_enc_mode_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

void FUNC_8()
{
    esp_flash_enc_mode_t VAR_4;
    VAR_4 = FUNC_6();
    if (VAR_4 == VAR_1) {




        FUNC_2(VAR_3, "Flash encryption mode is DEVELOPMENT (not secure)");

    } else if (VAR_4 == VAR_2) {
        FUNC_1(VAR_3, "Flash encryption mode is RELEASE");
    }
}
