
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int is_direct; int remote_bda; int client_if; } ;
struct TYPE_9__ {int layer_specific; } ;
struct TYPE_10__ {TYPE_1__ api_conn; TYPE_2__ hdr; } ;
typedef TYPE_3__ tBTA_GATTC_DATA ;
struct TYPE_11__ {int bta_conn_id; } ;
typedef TYPE_4__ tBTA_GATTC_CLCB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ) ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(UINT8 VAR_5, BD_ADDR VAR_6)
{
    tBTA_GATTC_CLCB *VAR_7 = ((void*)0);
    tBTA_GATTC_DATA VAR_8;
    UINT16 VAR_9;


    if (FUNC_1(VAR_5, VAR_6, &VAR_9, VAR_2) == VAR_3) {
        FUNC_0("bta_gattc_init_clcb_conn ERROR: not a connected device");
        return;
    }


    if ((VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_2)) != ((void*)0)) {
        VAR_8.hdr.layer_specific = VAR_7->bta_conn_id = VAR_9;

        VAR_8.api_conn.client_if = VAR_5;
        FUNC_4(VAR_8.api_conn.remote_bda, VAR_6, VAR_0);
        VAR_8.api_conn.is_direct = VAR_4;

        FUNC_3(VAR_7, VAR_1, &VAR_8);
    } else {
        FUNC_0("No resources");
    }
}
