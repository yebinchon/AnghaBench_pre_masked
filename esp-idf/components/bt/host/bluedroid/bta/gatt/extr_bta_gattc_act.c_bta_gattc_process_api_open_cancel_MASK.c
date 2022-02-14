
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int (* p_cback ) (int ,TYPE_3__*) ;} ;
typedef TYPE_1__ tBTA_GATTC_RCB ;
struct TYPE_14__ {int client_if; int remote_bda; scalar_t__ is_direct; } ;
struct TYPE_11__ {TYPE_9__ api_cancel_conn; } ;
typedef TYPE_2__ tBTA_GATTC_DATA ;
typedef int tBTA_GATTC_CLCB ;
typedef int tBTA_GATTC_CB ;
struct TYPE_12__ {int status; } ;
typedef TYPE_3__ tBTA_GATTC ;
typedef int UINT16 ;
struct TYPE_13__ {int event; } ;
typedef TYPE_4__ BT_HDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_9__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,int ,TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_3__*) ;

void FUNC_7 (tBTA_GATTC_CB *VAR_3, tBTA_GATTC_DATA *VAR_4)
{
    UINT16 VAR_5 = ((BT_HDR *)VAR_4)->event;
    tBTA_GATTC_CLCB *VAR_6 = ((void*)0);
    tBTA_GATTC_RCB *VAR_7;
    tBTA_GATTC VAR_8;
    FUNC_1(VAR_3);

    if (VAR_4->api_cancel_conn.is_direct) {
        if ((VAR_6 = FUNC_4(VAR_4->api_cancel_conn.client_if,
                      VAR_4->api_cancel_conn.remote_bda,
                      VAR_2)) != ((void*)0)) {
            FUNC_5(VAR_6, VAR_5, VAR_4);
        } else {
            FUNC_0("No such connection need to be cancelled");

            VAR_7 = FUNC_3(VAR_4->api_cancel_conn.client_if);

            if (VAR_7 && VAR_7->p_cback) {
                VAR_8.status = VAR_1;
                (*VAR_7->p_cback)(VAR_0, &VAR_8);
            }
        }
    } else {
        FUNC_2(&VAR_4->api_cancel_conn);

    }
}
