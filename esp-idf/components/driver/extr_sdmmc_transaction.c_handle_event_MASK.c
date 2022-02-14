
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sdmmc_req_state_t ;
struct TYPE_9__ {int dma_status; int sdmmc_status; } ;
typedef TYPE_1__ sdmmc_event_t ;
struct TYPE_10__ {int timeout_ms; } ;
typedef TYPE_2__ sdmmc_command_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int ,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__,TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_5(sdmmc_command_t* VAR_4, sdmmc_req_state_t* VAR_5,
        sdmmc_event_t* VAR_6)
{
    sdmmc_event_t VAR_7;
    esp_err_t VAR_8 = FUNC_4(VAR_4->timeout_ms / VAR_3, &VAR_7);
    if (VAR_8 != VAR_1) {
        FUNC_0(VAR_2, "sdmmc_host_wait_for_event returned 0x%x", VAR_8);
        if (VAR_8 == VAR_0) {
            FUNC_3();
        }
        return VAR_8;
    }
    FUNC_1(VAR_2, "sdmmc_handle_event: event %08x %08x, unhandled %08x %08x",
            VAR_7.sdmmc_status, VAR_7.dma_status,
            VAR_6->sdmmc_status, VAR_6->dma_status);
    VAR_7.sdmmc_status |= VAR_6->sdmmc_status;
    VAR_7.dma_status |= VAR_6->dma_status;
    FUNC_2(VAR_7, VAR_4, VAR_5, VAR_6);
    FUNC_1(VAR_2, "sdmmc_handle_event: events unhandled: %08x %08x", VAR_6->sdmmc_status, VAR_6->dma_status);
    return VAR_1;
}
