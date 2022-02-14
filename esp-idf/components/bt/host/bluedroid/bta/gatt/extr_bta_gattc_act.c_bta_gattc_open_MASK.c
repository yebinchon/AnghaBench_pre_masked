
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tGATT_TCB ;
struct TYPE_13__ {int layer_specific; } ;
struct TYPE_14__ {int already_connect; TYPE_3__ hdr; } ;
struct TYPE_12__ {int transport; int remote_bda; int remote_addr_type; } ;
struct TYPE_15__ {TYPE_4__ int_conn; TYPE_2__ api_conn; } ;
typedef TYPE_5__ tBTA_GATTC_DATA ;
struct TYPE_16__ {int bta_conn_id; TYPE_1__* p_rcb; } ;
typedef TYPE_6__ tBTA_GATTC_CLCB ;
struct TYPE_11__ {int client_if; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_6__*,int ,TYPE_5__*) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ,int ) ;

void FUNC_6(tBTA_GATTC_CLCB *VAR_5, tBTA_GATTC_DATA *VAR_6)
{
    tBTA_GATTC_DATA VAR_7;
    BOOLEAN VAR_8 = VAR_3;

    tGATT_TCB *VAR_9 = FUNC_5(VAR_6->api_conn.remote_bda, VAR_2);
    if(VAR_9 && VAR_5 && VAR_6) {
        VAR_8 = FUNC_4(VAR_9, VAR_5->p_rcb->client_if);
    }

    if (!FUNC_1(VAR_5->p_rcb->client_if, VAR_6->api_conn.remote_bda, VAR_6->api_conn.remote_addr_type,
                      VAR_4, VAR_6->api_conn.transport)) {
        FUNC_0("Connection open failure");

        FUNC_3(VAR_5, VAR_1, VAR_6);
    } else {

        if (FUNC_2(VAR_5->p_rcb->client_if,
                                      VAR_6->api_conn.remote_bda,
                                      &VAR_5->bta_conn_id,
                                      VAR_6->api_conn.transport)) {
            VAR_7.int_conn.hdr.layer_specific = VAR_5->bta_conn_id;
            VAR_7.int_conn.already_connect = VAR_8;
            FUNC_3(VAR_5, VAR_0, &VAR_7);
        }

    }
}
