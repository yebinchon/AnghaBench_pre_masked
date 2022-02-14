
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sdmmc_status; scalar_t__ dma_status; } ;
typedef TYPE_1__ sdmmc_event_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_3(void)
{




    sdmmc_event_t VAR_3;
    while (FUNC_2(0, &VAR_3) == VAR_0) {
        if (VAR_3.sdmmc_status & VAR_1) {
            FUNC_1(VAR_2, "card detect event");
            VAR_3.sdmmc_status &= ~VAR_1;
        }
        if (VAR_3.sdmmc_status != 0 || VAR_3.dma_status != 0) {
            FUNC_0(VAR_2, "handle_idle_state_events unhandled: %08x %08x",
                    VAR_3.sdmmc_status, VAR_3.dma_status);
        }

    }
    return VAR_0;
}
