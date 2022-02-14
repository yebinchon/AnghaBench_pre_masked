
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tBTA_GATT_STATUS ;
struct TYPE_12__ {int p_srvc_uuid; } ;
struct TYPE_16__ {TYPE_1__ api_search; } ;
typedef TYPE_5__ tBTA_GATTC_DATA ;
struct TYPE_17__ {TYPE_3__* p_rcb; int searched_service_source; int bta_conn_id; TYPE_4__* p_srcb; } ;
typedef TYPE_6__ tBTA_GATTC_CLCB ;
struct TYPE_13__ {int searched_service_source; int conn_id; int status; } ;
struct TYPE_18__ {TYPE_2__ search_cmpl; } ;
typedef TYPE_7__ tBTA_GATTC ;
struct TYPE_15__ {scalar_t__ p_srvc_cache; } ;
struct TYPE_14__ {int (* p_cback ) (int ,TYPE_7__*) ;} ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (int ,TYPE_7__*) ;

void FUNC_3(tBTA_GATTC_CLCB *VAR_3, tBTA_GATTC_DATA *VAR_4)
{
    tBTA_GATT_STATUS VAR_5 = VAR_2;
    tBTA_GATTC VAR_6;
    FUNC_0("bta_gattc_search conn_id=%d", VAR_3->bta_conn_id);
    if (VAR_3->p_srcb && VAR_3->p_srcb->p_srvc_cache) {
        VAR_5 = VAR_1;

        FUNC_1(VAR_3, VAR_4->api_search.p_srvc_uuid);
    }
    VAR_6.search_cmpl.status = VAR_5;
    VAR_6.search_cmpl.conn_id = VAR_3->bta_conn_id;
    VAR_6.search_cmpl.searched_service_source = VAR_3->searched_service_source;


    ( *VAR_3->p_rcb->p_cback)(VAR_0, &VAR_6);
}
