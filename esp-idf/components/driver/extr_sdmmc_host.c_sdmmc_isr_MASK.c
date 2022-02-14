
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int sdmmc_status; int dma_status; } ;
typedef TYPE_5__ sdmmc_event_t ;
struct TYPE_11__ {int sdio; } ;
struct TYPE_10__ {int val; int sdio; } ;
struct TYPE_9__ {int val; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_13__ {TYPE_4__ intmask; TYPE_3__ mintsts; TYPE_2__ idsts; TYPE_1__ rintsts; } ;
typedef int QueueHandle_t ;


 TYPE_7__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_5__*,int*) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static void FUNC_3(void* VAR_4) {
    QueueHandle_t VAR_5 = (QueueHandle_t) VAR_4;
    sdmmc_event_t VAR_6;
    int VAR_7 = VAR_1;

    uint32_t VAR_8 = VAR_0.mintsts.val & 0xFFFF;
    VAR_0.rintsts.val = VAR_8;
    VAR_6.sdmmc_status = VAR_8;

    uint32_t VAR_9 = VAR_0.idsts.val;
    VAR_0.idsts.val = VAR_9;
    VAR_6.dma_status = VAR_9 & 0x1f;

    if (VAR_8 != 0 || VAR_9 != 0) {
        FUNC_1(VAR_5, &VAR_6, &VAR_7);
    }

    uint32_t VAR_10 = VAR_0.mintsts.sdio;
    if (VAR_10) {

        VAR_0.intmask.sdio &= ~VAR_10;
        FUNC_2(VAR_3, &VAR_7);
    }

    if (VAR_7 == VAR_2) {
        FUNC_0();
    }
}
