
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ets_secure_boot_signature_t ;
typedef int ets_secure_boot_key_digests_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const*,int const*,int *) ;

esp_err_t FUNC_7(uint32_t VAR_4, const uint8_t *VAR_5)
{
    ets_secure_boot_key_digests_t VAR_6;

    FUNC_2(VAR_4 % 4096 == 0);

    const ets_secure_boot_signature_t *VAR_7 = FUNC_3(VAR_4, sizeof(ets_secure_boot_signature_t));

    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_3, "Failed to mmap data at offset 0x%x", VAR_4);
        return VAR_1;
    }

    int VAR_8 = FUNC_5(&VAR_6);
    if (VAR_8 != 0) {
        FUNC_1(VAR_3, "No trusted key digests were found in efuse!");
    } else {
        FUNC_0(VAR_3, "Verifying with RSA-PSS...");

        VAR_8 = FUNC_6(VAR_7, VAR_5, &VAR_6);
    }

    FUNC_4(VAR_7);

    return (VAR_8 == 0) ? VAR_2 : VAR_0;
}
