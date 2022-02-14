
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int remote_bda; } ;
struct TYPE_13__ {TYPE_1__ api_cancel_conn; } ;
typedef TYPE_3__ tBTA_GATTC_DATA ;
struct TYPE_14__ {TYPE_2__* p_rcb; } ;
typedef TYPE_4__ tBTA_GATTC_CLCB ;
struct TYPE_15__ {int status; } ;
typedef TYPE_5__ tBTA_GATTC ;
struct TYPE_12__ {int (* p_cback ) (int ,TYPE_5__*) ;int client_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_5__*) ;

void FUNC_3(tBTA_GATTC_CLCB *VAR_4, tBTA_GATTC_DATA *VAR_5)
{
    tBTA_GATTC VAR_6;

    if (FUNC_0(VAR_4->p_rcb->client_if, VAR_5->api_cancel_conn.remote_bda, VAR_3)) {
        FUNC_1(VAR_4, VAR_1, VAR_5);
    } else {
        if ( VAR_4->p_rcb->p_cback ) {
            VAR_6.status = VAR_2;
            (*VAR_4->p_rcb->p_cback)(VAR_0, &VAR_6);
        }
    }
}
