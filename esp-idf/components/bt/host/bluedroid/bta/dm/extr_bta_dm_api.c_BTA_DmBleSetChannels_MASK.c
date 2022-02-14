
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int channels; int * set_channels_cb; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_SET_CHANNELS ;
typedef int tBTA_CMPL_CB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int const*,int ) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(const uint8_t *VAR_2, tBTA_CMPL_CB *VAR_3)
{

    tBTA_DM_API_BLE_SET_CHANNELS *VAR_4;

    if ((VAR_4 = (tBTA_DM_API_BLE_SET_CHANNELS *) FUNC_2(sizeof(tBTA_DM_API_BLE_SET_CHANNELS))) != ((void*)0)) {
        VAR_4->hdr.event = VAR_1;

        VAR_4->set_channels_cb = VAR_3;
        FUNC_1(VAR_4->channels, VAR_2, VAR_0);

        FUNC_0(VAR_4);
    }


}
