
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tBTA_GATTC_RCB ;
struct TYPE_8__ {int client_if; int transport; int remote_bda; scalar_t__ is_direct; } ;
struct TYPE_6__ {TYPE_5__ api_conn; } ;
typedef TYPE_1__ tBTA_GATTC_DATA ;
typedef int tBTA_GATTC_CLCB ;
typedef int tBTA_GATTC_CB ;
typedef int UINT16 ;
struct TYPE_7__ {int event; } ;
typedef TYPE_2__ BT_HDR ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;

void FUNC_7 (tBTA_GATTC_CB *VAR_2, tBTA_GATTC_DATA *VAR_3)
{
    UINT16 VAR_4 = ((BT_HDR *)VAR_3)->event;
    tBTA_GATTC_CLCB *VAR_5 = ((void*)0);
    tBTA_GATTC_RCB *VAR_6 = FUNC_2(VAR_3->api_conn.client_if);
    FUNC_1(VAR_2);

    if (VAR_6 != ((void*)0)) {
        if (VAR_3->api_conn.is_direct) {
            if ((VAR_5 = FUNC_3(VAR_3->api_conn.client_if,
                                                    VAR_3->api_conn.remote_bda,
                                                    VAR_3->api_conn.transport)) != ((void*)0)) {
                FUNC_6(VAR_5, VAR_4, VAR_3);
            } else {
                FUNC_0("No resources to open a new connection.");

                FUNC_5(VAR_6,
                                          VAR_1,
                                          VAR_3->api_conn.remote_bda,
                                          VAR_0,
                                          VAR_3->api_conn.transport, 0);
            }
        } else {
            FUNC_4(&VAR_3->api_conn, VAR_6);
        }
    } else {
        FUNC_0("bta_gattc_process_api_open Failed, unknown client_if: %d",
                         VAR_3->api_conn.client_if);
    }
}
