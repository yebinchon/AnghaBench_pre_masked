
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_DM_BLE_SEL_CBACK ;
typedef int tBTA_DM_BLE_CONN_TYPE ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int * p_select_cback; int bg_conn_type; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_SET_BG_CONN_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(tBTA_DM_BLE_CONN_TYPE VAR_1, tBTA_DM_BLE_SEL_CBACK *VAR_2)
{

    tBTA_DM_API_BLE_SET_BG_CONN_TYPE *VAR_3;

    if ((VAR_3 = (tBTA_DM_API_BLE_SET_BG_CONN_TYPE *) FUNC_2(sizeof(tBTA_DM_API_BLE_SET_BG_CONN_TYPE))) != ((void*)0)) {
        FUNC_1(VAR_3, 0, sizeof(tBTA_DM_API_BLE_SET_BG_CONN_TYPE));

        VAR_3->hdr.event = VAR_0;
        VAR_3->bg_conn_type = VAR_1;
        VAR_3->p_select_cback = VAR_2;

        FUNC_0(VAR_3);
    }

}
