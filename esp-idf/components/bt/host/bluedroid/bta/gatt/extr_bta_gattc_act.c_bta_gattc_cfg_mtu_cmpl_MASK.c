
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ status; TYPE_4__* p_cmpl; } ;
typedef TYPE_5__ tBTA_GATTC_OP_CMPL ;
struct TYPE_18__ {scalar_t__ status; TYPE_3__* p_rcb; TYPE_2__* p_srcb; int bta_conn_id; } ;
typedef TYPE_6__ tBTA_GATTC_CLCB ;
struct TYPE_13__ {scalar_t__ status; int mtu; int conn_id; } ;
struct TYPE_19__ {TYPE_1__ cfg_mtu; } ;
typedef TYPE_7__ tBTA_GATTC ;
struct TYPE_16__ {int mtu; } ;
struct TYPE_15__ {int (* p_cback ) (int ,TYPE_7__*) ;} ;
struct TYPE_14__ {int mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,TYPE_7__*) ;

void FUNC_3(tBTA_GATTC_CLCB *VAR_2, tBTA_GATTC_OP_CMPL *VAR_3)
{
    tBTA_GATTC VAR_4;

    FUNC_0(VAR_2);
    FUNC_1(VAR_2);

    if (VAR_3->p_cmpl && VAR_3->status == VAR_1) {
        VAR_2->p_srcb->mtu = VAR_3->p_cmpl->mtu;
    }


    VAR_2->status = VAR_3->status;
    VAR_4.cfg_mtu.conn_id = VAR_2->bta_conn_id;
    VAR_4.cfg_mtu.status = VAR_3->status;
    VAR_4.cfg_mtu.mtu = VAR_2->p_srcb->mtu;

    (*VAR_2->p_rcb->p_cback) (VAR_0, &VAR_4);

}
