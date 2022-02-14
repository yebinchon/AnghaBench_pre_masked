
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int status; } ;
typedef TYPE_3__ tBTA_GATTC_OP_CMPL ;
struct TYPE_14__ {TYPE_2__* p_rcb; int bta_conn_id; int status; } ;
typedef TYPE_4__ tBTA_GATTC_CLCB ;
struct TYPE_11__ {int status; int conn_id; } ;
struct TYPE_15__ {TYPE_1__ exec_cmpl; } ;
typedef TYPE_5__ tBTA_GATTC ;
struct TYPE_12__ {int (* p_cback ) (int ,TYPE_5__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_5__*) ;

void FUNC_3(tBTA_GATTC_CLCB *VAR_2, tBTA_GATTC_OP_CMPL *VAR_3)
{
    tBTA_GATTC VAR_4;

    FUNC_0(VAR_2);
    FUNC_1(VAR_2);
    VAR_2->status = VAR_1;


    VAR_4.exec_cmpl.conn_id = VAR_2->bta_conn_id;
    VAR_4.exec_cmpl.status = VAR_3->status;

    ( *VAR_2->p_rcb->p_cback)(VAR_0, &VAR_4);

}
