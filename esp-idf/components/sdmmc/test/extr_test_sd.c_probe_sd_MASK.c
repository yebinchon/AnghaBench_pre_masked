
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int width; } ;
typedef TYPE_1__ sdmmc_slot_config_t ;
struct TYPE_8__ {int slot; int max_freq_khz; int flags; } ;
typedef TYPE_2__ sdmmc_host_t ;
typedef int sdmmc_card_t ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int ) ;
 int * FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int,TYPE_1__*) ;
 int FUNC_15 (int *,int *,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_16(int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    FUNC_9();
    sdmmc_host_t VAR_9 = FUNC_0();
    VAR_9.slot = VAR_5;
    VAR_9.max_freq_khz = VAR_7;
    sdmmc_slot_config_t VAR_10 = FUNC_1();
    if (VAR_6 == 1) {
        VAR_9.flags = VAR_1;
        VAR_10.width = 1;
    } else if (VAR_6 == 4) {
        VAR_9.flags &= ~VAR_2;
        VAR_10.width = 4;
    } else {
        FUNC_4(!VAR_8 && "host driver does not support 8-line DDR mode yet");
    }
    if (!VAR_8) {
        VAR_9.flags &= ~VAR_3;
    }
    FUNC_3(FUNC_13());
    FUNC_3(FUNC_14(VAR_5, &VAR_10));
    sdmmc_card_t* VAR_11 = FUNC_7(sizeof(sdmmc_card_t));
    FUNC_2(VAR_11);
    FUNC_3(FUNC_10(&VAR_9, VAR_11));
    FUNC_11(VAR_4, VAR_11);
    uint8_t* VAR_12 = FUNC_6(512, VAR_0);
    FUNC_3(FUNC_15(VAR_11, VAR_12, 0, 1));
    FUNC_5(VAR_12);
    FUNC_3(FUNC_12());
    FUNC_5(VAR_11);
    FUNC_8();
}
