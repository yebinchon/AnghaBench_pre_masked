
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_SET_PKT_DATA_LENGTH_CBACK ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int * p_set_pkt_data_cback; int tx_data_length; TYPE_1__ hdr; int remote_bda; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_SET_DATA_LENGTH ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(BD_ADDR VAR_1, UINT16 VAR_2, tBTA_SET_PKT_DATA_LENGTH_CBACK *VAR_3)
{
    tBTA_DM_API_BLE_SET_DATA_LENGTH *VAR_4;

    if ((VAR_4 = (tBTA_DM_API_BLE_SET_DATA_LENGTH *)FUNC_2(sizeof(tBTA_DM_API_BLE_SET_DATA_LENGTH)))
            != ((void*)0)) {
        FUNC_0(VAR_4->remote_bda, VAR_1);
        VAR_4->hdr.event = VAR_0;
        VAR_4->tx_data_length = VAR_2;
        VAR_4->p_set_pkt_data_cback = VAR_3;

        FUNC_1(VAR_4);
    }
}
