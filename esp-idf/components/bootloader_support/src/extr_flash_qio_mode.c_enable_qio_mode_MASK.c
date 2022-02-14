
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* write_status_fn_t ) (scalar_t__) ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ (* read_status_fn_t ) () ;
typedef int esp_rom_spiflash_read_mode_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ const VAR_7 ;
 scalar_t__ const VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__ const) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_16 ;

__attribute__((used)) static esp_err_t FUNC_10(read_status_fn_t VAR_17,
                                 write_status_fn_t VAR_18,
                                 uint8_t VAR_19)
{
    uint32_t VAR_20;
    const uint32_t VAR_21 = FUNC_7();
    FUNC_6(&VAR_16);

    VAR_20 = VAR_17();
    FUNC_0(VAR_15, "Initial flash chip status 0x%x", VAR_20);

    if ((VAR_20 & (1 << VAR_19)) == 0) {
        FUNC_9(VAR_0, 0, 0, 0);
        VAR_18(VAR_20 | (1 << VAR_19));

        FUNC_6(&VAR_16);

        VAR_20 = VAR_17();
        FUNC_0(VAR_15, "Updated flash chip status 0x%x", VAR_20);
        if ((VAR_20 & (1 << VAR_19)) == 0) {
            FUNC_1(VAR_15, "Failed to set QIE bit, not enabling QIO mode");
            return VAR_10;
        }

    } else {
        FUNC_0(VAR_15, "QIO mode already enabled in flash");
    }

    FUNC_0(VAR_15, "Enabling QIO mode...");

    esp_rom_spiflash_read_mode_t VAR_22;



    VAR_22 = VAR_12;


    FUNC_4(VAR_22);
    return VAR_11;
}
