
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ digest; scalar_t__ iv; } ;
typedef TYPE_1__ esp_secure_boot_iv_digest_t ;
typedef int esp_err_t ;
typedef int digest ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int,int ) ;
 int* FUNC_5 (int ,int) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int const*) ;
 int FUNC_10 () ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int*) ;
 int FUNC_13 () ;

__attribute__((used)) static bool FUNC_14(uint32_t VAR_4){
    esp_err_t VAR_5;
    esp_secure_boot_iv_digest_t VAR_6;
    const uint32_t *VAR_7;




    if (VAR_4 % sizeof(VAR_6.iv) != 0) {
        VAR_4 = (VAR_4 / sizeof(VAR_6.iv) + 1) * sizeof(VAR_6.iv);
    }
    FUNC_13();
    FUNC_12((uint32_t *)VAR_6.iv);
    FUNC_9(((void*)0));

    VAR_5 = FUNC_3(0);
    if (VAR_5 != VAR_1)
    {
        FUNC_2(VAR_3, "SPI erase failed: 0x%x", VAR_5);
        return 0;
    }


    VAR_7 = FUNC_5(VAR_0, VAR_4);
    if (!VAR_7) {
        FUNC_2(VAR_3, "bootloader_mmap(0x1000, 0x%x) failed", VAR_4);
        return 0;
    }
    for (int VAR_8 = 0; VAR_8 < VAR_4; VAR_8+= sizeof(VAR_6.iv)) {
        FUNC_9(&VAR_7[VAR_8/sizeof(uint32_t)]);
    }
    FUNC_6(VAR_7);

    FUNC_10();
    FUNC_11((uint32_t *)VAR_6.digest);
    FUNC_8();

    FUNC_1(VAR_3, "write iv+digest to flash");
    VAR_5 = FUNC_4(VAR_2, &VAR_6,
                           sizeof(VAR_6), FUNC_7());
    if (VAR_5 != VAR_1) {
        FUNC_2(VAR_3, "SPI write failed: 0x%x", VAR_5);
        return 0;
    }
    FUNC_0(0);
    return 1;
}
