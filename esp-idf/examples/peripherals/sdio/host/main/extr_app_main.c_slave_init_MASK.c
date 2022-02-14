
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int gpio_int; int gpio_cs; int gpio_sck; int gpio_mosi; int gpio_miso; } ;
typedef TYPE_1__ sdspi_slot_config_t ;
typedef int sdmmc_slot_config_t ;
struct TYPE_9__ {int max_freq_khz; int flags; } ;
typedef TYPE_2__ sdmmc_host_t ;
typedef int sdmmc_card_t ;
typedef int esp_slave_context_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ FUNC_4 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 () ;
 TYPE_2__ FUNC_6 () ;
 TYPE_1__ FUNC_7 () ;
 int VAR_13 ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 int VAR_14 ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 () ;
 int FUNC_20 (int ,TYPE_1__*) ;
 int VAR_15 ;
 int FUNC_21 (int) ;

esp_err_t FUNC_22(esp_slave_context_t *VAR_16)
{
    esp_err_t VAR_17;


    sdmmc_host_t VAR_18 = FUNC_4();




    FUNC_1(VAR_13, "Probe using SD 1-bit...\n");
    VAR_18.flags = VAR_10;





    VAR_18.max_freq_khz = VAR_8;


    sdmmc_slot_config_t VAR_19 = FUNC_5();







    VAR_17 = FUNC_17();
    FUNC_0(VAR_17);

    VAR_17 = FUNC_18(VAR_12, &VAR_19);
    FUNC_0(VAR_17);
    sdmmc_card_t *VAR_20 = (sdmmc_card_t *)FUNC_13(sizeof(sdmmc_card_t));
    if (VAR_20 == ((void*)0)) {
        return VAR_0;
    }
    for (;;) {
        if (FUNC_15(&VAR_18, VAR_20) == VAR_1) {
            break;
        }
        FUNC_2(VAR_13, "slave init failed, retry...");
        FUNC_21(1000 / VAR_14);
    }
    FUNC_16(VAR_15, VAR_20);

    FUNC_12(14);
    FUNC_11(14);
    FUNC_12(15);
    FUNC_11(15);
    FUNC_12(2);
    FUNC_11(2);
    FUNC_12(4);
    FUNC_11(4);
    FUNC_12(12);
    FUNC_11(12);
    FUNC_12(13);
    FUNC_11(13);

    *VAR_16 = FUNC_3(VAR_20);
    esp_err_t VAR_21 = FUNC_8(VAR_16);
    FUNC_0(VAR_21);

    VAR_21 = FUNC_14(VAR_20);
    FUNC_0(VAR_21);
    return VAR_21;
}
