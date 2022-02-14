
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


struct TYPE_11__ {int layer_specific; } ;
struct TYPE_14__ {TYPE_1__ hdr; } ;
typedef TYPE_4__ tBTA_GATTC_DATA ;
struct TYPE_15__ {TYPE_3__* p_rcb; int bda; } ;
typedef TYPE_5__ tBTA_GATTC_CLCB ;
struct TYPE_12__ {int reason; int status; int remote_bda; int conn_id; int client_if; } ;
struct TYPE_16__ {TYPE_2__ close; } ;
typedef TYPE_6__ tBTA_GATTC ;
struct TYPE_13__ {int (* p_cback ) (int ,TYPE_6__*) ;int client_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 int FUNC_2 (int ,TYPE_6__*) ;

void FUNC_3(tBTA_GATTC_CLCB *VAR_3, tBTA_GATTC_DATA *VAR_4)
{
    tBTA_GATTC VAR_5;

    if ( VAR_3->p_rcb->p_cback ) {
        FUNC_1(&VAR_5, 0, sizeof(tBTA_GATTC));
        VAR_5.close.client_if = VAR_3->p_rcb->client_if;
        VAR_5.close.conn_id = VAR_4->hdr.layer_specific;
        FUNC_0(VAR_5.close.remote_bda, VAR_3->bda);
        VAR_5.close.status = VAR_2;
        VAR_5.close.reason = VAR_1;


        (*VAR_3->p_rcb->p_cback)(VAR_0, &VAR_5);
    }
}
