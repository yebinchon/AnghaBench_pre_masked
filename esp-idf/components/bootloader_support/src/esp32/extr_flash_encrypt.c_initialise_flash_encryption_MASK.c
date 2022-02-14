
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_27 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int VAR_28 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static esp_err_t FUNC_8(void)
{
    uint32_t VAR_29 = FUNC_3(VAR_1, VAR_14);
    if (VAR_29 != VAR_16 && VAR_29 != VAR_15) {
        FUNC_0(VAR_28, "Unknown/unsupported CODING_SCHEME value 0x%x", VAR_29);
        return VAR_26;
    }




    uint32_t VAR_30 = FUNC_4(VAR_0);
    bool VAR_31 = VAR_30 & VAR_23;
    bool VAR_32 = VAR_30 & VAR_24;
    if (VAR_31 == 0
        && VAR_32 == 0
        && FUNC_4(VAR_5) == 0
        && FUNC_4(VAR_6) == 0
        && FUNC_4(VAR_7) == 0
        && FUNC_4(VAR_8) == 0
        && FUNC_4(VAR_9) == 0
        && FUNC_4(VAR_10) == 0
        && FUNC_4(VAR_11) == 0
        && FUNC_4(VAR_12) == 0) {
        FUNC_1(VAR_28, "Generating new flash encryption key...");
        FUNC_7(VAR_13);
        FUNC_6();

        FUNC_1(VAR_28, "Read & write protecting new key...");
        FUNC_5(VAR_2, VAR_24 | VAR_23);
        FUNC_6();
    } else {

        if(!(VAR_31 && VAR_32)) {
            FUNC_0(VAR_28, "Flash encryption key has to be either unset or both read and write protected");
            return VAR_25;
        }
        FUNC_2(VAR_28, "Using pre-loaded flash encryption key in EFUSE block 1");
    }
    FUNC_1(VAR_28, "Setting CRYPT_CONFIG efuse to 0xF");
    FUNC_5(VAR_3, VAR_20);
    FUNC_6();

    uint32_t VAR_33 = 0;

    FUNC_1(VAR_28, "Disable UART bootloader encryption...");
    VAR_33 |= VAR_19;




    FUNC_1(VAR_28, "Disable UART bootloader decryption...");
    VAR_33 |= VAR_18;




    FUNC_1(VAR_28, "Disable UART bootloader MMU cache...");
    VAR_33 |= VAR_17;




    FUNC_1(VAR_28, "Disable JTAG...");
    VAR_33 |= VAR_22;




    FUNC_1(VAR_28, "Disable ROM BASIC interpreter fallback...");
    VAR_33 |= VAR_21;




    if (VAR_33 != 0) {
        FUNC_5(VAR_4, VAR_33);
        FUNC_6();
    }

    return VAR_27;
}
