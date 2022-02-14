
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static esp_err_t FUNC_5(void)
{
    esp_err_t VAR_5;
    uint32_t VAR_6;

    if (FUNC_4(&VAR_6) == VAR_1) {
        FUNC_0(VAR_4, "bootloader is plaintext. Encrypting...");
        VAR_5 = FUNC_3(VAR_0, VAR_6);
        if (VAR_5 != VAR_1) {
            FUNC_1(VAR_4, "Failed to encrypt bootloader in place: 0x%x", VAR_5);
            return VAR_5;
        }
    }
    else {
        FUNC_2(VAR_4, "no valid bootloader was found");
    }

    return VAR_1;
}
