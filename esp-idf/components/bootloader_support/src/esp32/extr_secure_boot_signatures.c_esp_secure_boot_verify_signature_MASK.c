
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
typedef int esp_secure_boot_sig_block_t ;
typedef int esp_err_t ;
typedef int bootloader_sha256_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (int ,char*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,int const*,scalar_t__) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int const*,int *) ;

esp_err_t FUNC_10(uint32_t VAR_5, uint32_t VAR_6)
{
    uint8_t VAR_7[VAR_0];
    const uint8_t *VAR_8;
    const esp_secure_boot_sig_block_t *VAR_9;

    FUNC_0(VAR_4, "verifying signature src_addr 0x%x length 0x%x", VAR_5, VAR_6);

    bootloader_sha256_handle_t VAR_10 = FUNC_8();

    uint32_t VAR_11 = FUNC_4();
    FUNC_0(VAR_4, "free data page_count 0x%08x", VAR_11);

    int32_t VAR_12 = VAR_6;
    uint32_t VAR_13 = VAR_5;
    while (VAR_12 > 0) {
        uint32_t VAR_14 = ((VAR_13 & VAR_2) != 0) ? 1 : 0;

        uint32_t VAR_15 = FUNC_2(VAR_12, ((VAR_11 - VAR_14) * VAR_3));
        VAR_8 = (const uint8_t *) FUNC_3(VAR_13, VAR_15);
        if(!VAR_8) {
            FUNC_1(VAR_4, "bootloader_mmap(0x%x, 0x%x) failed", VAR_13, VAR_15);
            FUNC_7(VAR_10, ((void*)0));
            return VAR_1;
        }
        FUNC_6(VAR_10, VAR_8, VAR_15);
        FUNC_5(VAR_8);

        VAR_13 += VAR_15;
        VAR_12 -= VAR_15;
    }


    FUNC_7(VAR_10, VAR_7);


    VAR_9 = (const esp_secure_boot_sig_block_t *) FUNC_3(VAR_5 + VAR_6, sizeof(esp_secure_boot_sig_block_t));
    if(!VAR_9) {
        FUNC_1(VAR_4, "bootloader_mmap(0x%x, 0x%x) failed", VAR_5 + VAR_6, sizeof(esp_secure_boot_sig_block_t));
        return VAR_1;
    }

    esp_err_t VAR_16 = FUNC_9(VAR_9, VAR_7);

    FUNC_5(VAR_9);

    return VAR_16;
}
