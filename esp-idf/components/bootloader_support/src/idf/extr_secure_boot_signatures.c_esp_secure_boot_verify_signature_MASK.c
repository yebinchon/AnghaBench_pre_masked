
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int esp_secure_boot_sig_block_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_2 ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int *) ;
 int FUNC_5 (int const*,int,int *,int ) ;

esp_err_t FUNC_6(uint32_t VAR_3, uint32_t VAR_4)
{
    uint8_t VAR_5[VAR_0];
    const uint8_t *VAR_6;
    const esp_secure_boot_sig_block_t *VAR_7;

    FUNC_0(VAR_2, "verifying signature src_addr 0x%x length 0x%x", VAR_3, VAR_4);

    VAR_6 = FUNC_2(VAR_3, VAR_4 + sizeof(esp_secure_boot_sig_block_t));
    if (VAR_6 == ((void*)0)) {
        FUNC_1(VAR_2, "bootloader_mmap(0x%x, 0x%x) failed", VAR_3, VAR_4 + sizeof(esp_secure_boot_sig_block_t));
        return VAR_1;
    }


    FUNC_5(VAR_6, VAR_4, VAR_5, 0);


    VAR_7 = (const esp_secure_boot_sig_block_t *)(VAR_6 + VAR_4);
    esp_err_t VAR_8 = FUNC_4(VAR_7, VAR_5);
    FUNC_3(VAR_6);
    return VAR_8;
}
