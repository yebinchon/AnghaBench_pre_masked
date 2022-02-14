
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tBTA_GATTC_DATA ;
struct TYPE_13__ {scalar_t__ auto_update; scalar_t__ transport; scalar_t__ status; int state; TYPE_7__* p_srcb; int searched_service_source; int disc_active; TYPE_2__* p_rcb; int bta_conn_id; int * p_q_cmd; } ;
typedef TYPE_3__ tBTA_GATTC_CLCB ;
struct TYPE_11__ {scalar_t__ status; int conn_id; } ;
struct TYPE_14__ {TYPE_1__ dis_cmpl; } ;
typedef TYPE_4__ tBTA_GATTC ;
struct TYPE_15__ {scalar_t__ state; int server_bda; scalar_t__ update_count; int srvc_hdl_chg; } ;
struct TYPE_12__ {int (* p_cback ) (int ,TYPE_4__*) ;} ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ) ;
 int VAR_13 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_7__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,scalar_t__) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int ,TYPE_4__*) ;

void FUNC_9(tBTA_GATTC_CLCB *VAR_14, tBTA_GATTC_DATA *VAR_15)
{
    FUNC_3(VAR_15);

    FUNC_0("bta_gattc_start_discover conn_id=%d p_clcb->p_srcb->state = %d ",
                     VAR_14->bta_conn_id, VAR_14->p_srcb->state);

    if (((VAR_14->p_q_cmd == ((void*)0) || VAR_14->auto_update == VAR_4) &&
            VAR_14->p_srcb->state == VAR_8) ||
            VAR_14->p_srcb->state == VAR_6) {

        VAR_14->auto_update = VAR_3;

        if (VAR_14->p_srcb != ((void*)0)) {

            VAR_14->p_srcb->srvc_hdl_chg = VAR_11;
            VAR_14->p_srcb->update_count = 0;
            VAR_14->p_srcb->state = VAR_7;

            if (VAR_14->transport == VAR_10) {
                FUNC_2(VAR_14->p_srcb->server_bda, VAR_11);
            }


            FUNC_7(VAR_14->p_srcb);

            if ((VAR_14->status = FUNC_5(VAR_14->p_srcb)) == VAR_9) {
                VAR_14->status = FUNC_4(VAR_14->bta_conn_id,
                                 VAR_14->p_srcb, VAR_12);
            }
            if (VAR_14->status != VAR_9) {
                FUNC_1("discovery on server failed");
                FUNC_6(VAR_14->p_srcb, VAR_14->status);

                tBTA_GATTC VAR_16;
                VAR_16.dis_cmpl.status = VAR_14->status;
                VAR_16.dis_cmpl.conn_id = VAR_14->bta_conn_id;
                ( *VAR_14->p_rcb->p_cback)(VAR_2, &VAR_16);
            } else {
                VAR_14->disc_active = VAR_13;
            }
            VAR_14->searched_service_source = VAR_5;
        } else {
            FUNC_1("unknown device, can not start discovery");
        }
    }

    else {
        VAR_14->auto_update = VAR_1;

        if (VAR_14->p_srcb->state == VAR_8) {
            VAR_14->state = VAR_0;
        }
    }

}
