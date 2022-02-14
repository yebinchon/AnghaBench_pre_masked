
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


struct TYPE_13__ {int event; } ;
struct TYPE_16__ {TYPE_2__ hdr; } ;
typedef TYPE_5__ tBTA_GATTC_DATA ;
struct TYPE_17__ {TYPE_4__* p_rcb; int bta_conn_id; void* is_full; int p_cmd_list; TYPE_1__* p_srcb; } ;
typedef TYPE_6__ tBTA_GATTC_CLCB ;
struct TYPE_14__ {void* is_full; int conn_id; } ;
struct TYPE_18__ {TYPE_3__ queue_full; int status; int member_0; } ;
typedef TYPE_7__ tBTA_GATTC ;
typedef int list_node_t ;
struct TYPE_15__ {int (* p_cback ) (int ,TYPE_7__*) ;} ;
struct TYPE_12__ {int server_bda; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ,TYPE_5__*) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,TYPE_7__*) ;

__attribute__((used)) static void FUNC_7(tBTA_GATTC_CLCB *VAR_4)
{
    if (!FUNC_3(VAR_4->p_cmd_list)) {
        list_node_t *VAR_5 = FUNC_2(VAR_4->p_cmd_list);
        tBTA_GATTC_DATA *VAR_6 = (tBTA_GATTC_DATA *)FUNC_4(VAR_5);
        if (VAR_6 != ((void*)0)) {

            if (FUNC_1(VAR_4->p_srcb->server_bda, VAR_1) != ((void*)0)) {

                if(FUNC_0(VAR_4, VAR_6->hdr.event, VAR_6)) {
                    FUNC_5(VAR_4->p_cmd_list, (void *)VAR_6);
                }

                if (VAR_4->is_full) {
                    tBTA_GATTC VAR_7 = {0};
                    VAR_4->is_full = VAR_2;
                    VAR_7.status = VAR_3;
                    VAR_7.queue_full.conn_id = VAR_4->bta_conn_id;
                    VAR_7.queue_full.is_full = VAR_2;
                    if (VAR_4->p_rcb->p_cback != ((void*)0)) {
                        ( *VAR_4->p_rcb->p_cback)(VAR_0, (tBTA_GATTC *)&VAR_7);
                    }
                }
            }
        }
    }
}
