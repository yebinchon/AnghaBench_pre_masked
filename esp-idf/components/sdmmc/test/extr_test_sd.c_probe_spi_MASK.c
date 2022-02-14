
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gpio_miso; int gpio_mosi; int gpio_sck; int gpio_cs; } ;
typedef TYPE_1__ sdspi_slot_config_t ;
struct TYPE_8__ {int slot; } ;
typedef TYPE_2__ sdmmc_host_t ;
typedef int sdmmc_card_t ;


 TYPE_2__ FUNC_0 () ;
 TYPE_1__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_13(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    FUNC_7();
    sdmmc_host_t VAR_6 = FUNC_0();
    sdspi_slot_config_t VAR_7 = FUNC_1();
    VAR_7.gpio_miso = VAR_2;
    VAR_7.gpio_mosi = VAR_3;
    VAR_7.gpio_sck = VAR_4;
    VAR_7.gpio_cs = VAR_5;

    FUNC_3(FUNC_11());
    FUNC_3(FUNC_12(VAR_6.slot, &VAR_7));
    sdmmc_card_t* VAR_8 = FUNC_5(sizeof(sdmmc_card_t));
    FUNC_2(VAR_8);
    FUNC_3(FUNC_8(&VAR_6, VAR_8));
    FUNC_9(VAR_0, VAR_8);
    FUNC_3(FUNC_10());
    FUNC_4(VAR_8);
    FUNC_6();
}
