
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ets_secure_boot_sig_block {int dummy; } ;
typedef int ets_secure_boot_signature_t ;
struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ ets_secure_boot_key_digests_t ;
typedef int esp_err_t ;
typedef int bootloader_sha256_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int const*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int const*,int,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int const*,int *,TYPE_1__*) ;

esp_err_t FUNC_10(uint32_t VAR_7, uint32_t VAR_8)
{
    ets_secure_boot_key_digests_t VAR_9 = { 0 };
    uint8_t VAR_10[VAR_0];
    const uint8_t *VAR_11;

    FUNC_0(VAR_6, "verifying signature src_addr 0x%x length 0x%x", VAR_7, VAR_8);

    if ((VAR_7 + VAR_8) % 4096 != 0) {
        FUNC_1(VAR_6, "addr 0x%x length 0x%x doesn't end on a sector boundary", VAR_7, VAR_8);
        return VAR_1;
    }

    VAR_11 = FUNC_2(VAR_7, VAR_8 + sizeof(struct ets_secure_boot_sig_block));
    if(VAR_11 == ((void*)0)) {
        FUNC_1(VAR_6, "bootloader_mmap(0x%x, 0x%x) failed", VAR_7, VAR_8+sizeof(ets_secure_boot_signature_t));
        return VAR_2;
    }
    FUNC_7(VAR_5, VAR_11, VAR_8, VAR_10);


    int VAR_12 = FUNC_8(&VAR_9);

    if (VAR_12 == VAR_4) {
        const ets_secure_boot_signature_t *VAR_13 = (const ets_secure_boot_signature_t *)(VAR_11 + VAR_8);

        VAR_12 = FUNC_9(VAR_13, VAR_10, &VAR_9);
    }
    FUNC_3(VAR_11);

    return (VAR_12 == VAR_4) ? VAR_3 : VAR_2;
}
