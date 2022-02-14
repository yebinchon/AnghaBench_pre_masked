
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {void* supervision_tout; void* slave_latency; void* conn_int_min; void* conn_int_max; int peer_bda; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_CONN_PARAMS ;
typedef void* UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(BD_ADDR VAR_2,
                                UINT16 VAR_3, UINT16 VAR_4,
                                UINT16 VAR_5, UINT16 VAR_6 )
{

    tBTA_DM_API_BLE_CONN_PARAMS *VAR_7;

    if ((VAR_7 = (tBTA_DM_API_BLE_CONN_PARAMS *) FUNC_3(sizeof(tBTA_DM_API_BLE_CONN_PARAMS))) != ((void*)0)) {
        FUNC_2(VAR_7, 0, sizeof(tBTA_DM_API_BLE_CONN_PARAMS));

        VAR_7->hdr.event = VAR_1;

        FUNC_1(VAR_7->peer_bda, VAR_2, VAR_0);

        VAR_7->conn_int_max = VAR_4;
        VAR_7->conn_int_min = VAR_3;
        VAR_7->slave_latency = VAR_5;
        VAR_7->supervision_tout = VAR_6;

        FUNC_0(VAR_7);
    }

}
