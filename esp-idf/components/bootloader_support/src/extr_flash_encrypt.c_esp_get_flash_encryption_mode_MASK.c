
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int esp_flash_enc_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 () ;

esp_flash_enc_mode_t FUNC_2(void)
{
    uint8_t VAR_7 = 0;
    uint8_t VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
    esp_flash_enc_mode_t VAR_11 = VAR_4;

    if (FUNC_1()) {

        FUNC_0(VAR_3, &VAR_7, 1);
        if (VAR_7) {
            FUNC_0(VAR_0, &VAR_10, 1);
            FUNC_0(VAR_2, &VAR_8, 1);
            FUNC_0(VAR_1, &VAR_9, 1);

            if ( VAR_10 && VAR_8 && VAR_9 ) {
                VAR_11 = VAR_6;
            }
        }
    } else {
        VAR_11 = VAR_5;
    }

    return VAR_11;
}
