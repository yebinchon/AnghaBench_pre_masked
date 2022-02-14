
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int * read_tx_power_cb; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_READ_ADV_TX_POWER ;
typedef int tBTA_CMPL_CB ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(tBTA_CMPL_CB *VAR_1)
{
    tBTA_DM_API_READ_ADV_TX_POWER *VAR_2;
    if ((VAR_2 = (tBTA_DM_API_READ_ADV_TX_POWER *)FUNC_1(sizeof(tBTA_DM_API_READ_ADV_TX_POWER))) != ((void*)0)) {
        VAR_2->hdr.event = VAR_0;
        VAR_2->read_tx_power_cb = VAR_1;
        FUNC_0(VAR_2);
    }
}
