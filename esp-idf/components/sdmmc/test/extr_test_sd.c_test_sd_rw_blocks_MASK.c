
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int width; } ;
typedef TYPE_1__ sdmmc_slot_config_t ;
struct TYPE_8__ {int slot; int flags; int max_freq_khz; } ;
typedef TYPE_2__ sdmmc_host_t ;
typedef int sdmmc_card_t ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int,TYPE_1__*) ;

void FUNC_11(int VAR_2, int VAR_3)
{
    sdmmc_host_t VAR_4 = FUNC_0();
    VAR_4.max_freq_khz = VAR_0;
    VAR_4.slot = VAR_2;
    sdmmc_slot_config_t VAR_5 = FUNC_1();
    if (VAR_3 != 0) {
        VAR_5.width = VAR_3;
    }
    if (VAR_5.width == 8) {
        VAR_4.flags &= ~VAR_1;
    }
    FUNC_3(FUNC_9());
    FUNC_3(FUNC_10(VAR_2, &VAR_5));
    sdmmc_card_t* VAR_6 = FUNC_5(sizeof(sdmmc_card_t));
    FUNC_2(VAR_6);
    FUNC_3(FUNC_7(&VAR_4, VAR_6));
    FUNC_6(VAR_6);
    FUNC_4(VAR_6);
    FUNC_3(FUNC_8());
}
