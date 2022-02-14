
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int event; } ;
struct TYPE_13__ {TYPE_2__ hdr; } ;
typedef TYPE_3__ tBTA_GATTC_DATA ;
struct TYPE_14__ {scalar_t__ status; scalar_t__ auto_update; int bda; int bta_conn_id; TYPE_3__* p_q_cmd; TYPE_1__* p_srcb; int disc_active; } ;
typedef TYPE_4__ tBTA_GATTC_CLCB ;
struct TYPE_11__ {int server_bda; TYPE_3__* p_srvc_list; int * p_srvc_cache; int state; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_3__*) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;

void FUNC_8(tBTA_GATTC_CLCB *VAR_6, tBTA_GATTC_DATA *VAR_7)
{
    tBTA_GATTC_DATA *VAR_8 = VAR_6->p_q_cmd;
    FUNC_1(VAR_7);

    FUNC_0("bta_gattc_disc_cmpl conn_id=%d, status = %d", VAR_6->bta_conn_id, VAR_6->status);

    VAR_6->p_srcb->state = VAR_2;
    VAR_6->disc_active = VAR_4;

    if (VAR_6->status != VAR_5) {

        if (VAR_6->p_srcb && VAR_6->p_srcb->p_srvc_cache) {
            FUNC_6(VAR_6->p_srcb->p_srvc_cache);
            VAR_6->p_srcb->p_srvc_cache = ((void*)0);
        }


        FUNC_2(VAR_6->p_srcb->server_bda);

    }
    if (VAR_6->p_srcb && VAR_6->p_srcb->p_srvc_list) {

        FUNC_7(VAR_6->p_srcb->p_srvc_list);
        VAR_6->p_srcb->p_srvc_list = ((void*)0);

    }

    if (VAR_6->auto_update == VAR_0) {

        FUNC_4(VAR_6, VAR_1, ((void*)0));
    }

    else if (VAR_8 != ((void*)0)) {
        VAR_6->p_q_cmd = ((void*)0);

        if (FUNC_5(VAR_6->p_srcb->server_bda, VAR_3) != ((void*)0)) {
            FUNC_4(VAR_6, VAR_8->hdr.event, VAR_8);
        }




        if (VAR_8 != VAR_6->p_q_cmd) {
            FUNC_7(VAR_8);
            VAR_8 = ((void*)0);
        }
    }


    FUNC_3(VAR_6->bta_conn_id, VAR_6->bda);

}
