
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_11 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

esp_err_t FUNC_8(void)
{
    if (FUNC_7()) {
        FUNC_2(VAR_11, "bootloader secure boot is already enabled, continuing..");
        return VAR_10;
    }

    uint32_t VAR_12 = FUNC_4(VAR_0);
    bool VAR_13 = VAR_12 & VAR_7;
    bool VAR_14 = VAR_12 & VAR_8;
    if (VAR_13 == 0
        && VAR_14 == 0) {
        FUNC_2(VAR_11, "Read & write protecting new key...");
        FUNC_5(VAR_2, VAR_8 | VAR_7);
        FUNC_6();
        VAR_13 = 1;
        VAR_14 = 1;
    }

    if (!VAR_13) {
        FUNC_1(VAR_11, "Pre-loaded key is not read protected. Refusing to blow secure boot efuse.");
        return VAR_9;
    }
    if (!VAR_14) {
        FUNC_1(VAR_11, "Pre-loaded key is not write protected. Refusing to blow secure boot efuse.");
        return VAR_9;
    }

    FUNC_2(VAR_11, "blowing secure boot efuse...");
    FUNC_0(VAR_11, "before updating, EFUSE_BLK0_RDATA6 %x", FUNC_4(VAR_1));

    uint32_t VAR_15 = VAR_4;


    FUNC_2(VAR_11, "Disable JTAG...");
    VAR_15 |= VAR_6;





    FUNC_2(VAR_11, "Disable ROM BASIC interpreter fallback...");
    VAR_15 |= VAR_5;




    FUNC_5(VAR_3, VAR_15);
    FUNC_6();
    uint32_t VAR_16 = FUNC_4(VAR_1);
    FUNC_0(VAR_11, "after updating, EFUSE_BLK0_RDATA6 %x", VAR_16);
    if (VAR_16 & VAR_4) {
        FUNC_2(VAR_11, "secure boot is now enabled for bootloader image");
        return VAR_10;
    } else {
        FUNC_1(VAR_11, "secure boot not enabled for bootloader image, EFUSE_RD_ABS_DONE_0 is probably write protected!");
        return VAR_9;
    }
}
