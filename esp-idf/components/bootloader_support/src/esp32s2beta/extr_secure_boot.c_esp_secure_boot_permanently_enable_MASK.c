
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,int) ;

esp_err_t FUNC_8(void)
{
    uint8_t VAR_5[32];

    if (FUNC_6())
    {
        FUNC_1(VAR_4, "secure boot is already enabled, continuing..");
        return VAR_2;
    }

    FUNC_1(VAR_4, "Verifying bootloader signature...\n");
    int VAR_6 = FUNC_7(VAR_5, 0);
    if (VAR_6 != VAR_2) {
        FUNC_0(VAR_4, "Failed to verify bootloader signature");
        return VAR_6;
    }

    FUNC_4();
    FUNC_2(VAR_0, VAR_1);
    FUNC_5(VAR_3);

    FUNC_3(FUNC_6());
    FUNC_1(VAR_4, "Secure boot permanently enabled");

    return VAR_2;
}
