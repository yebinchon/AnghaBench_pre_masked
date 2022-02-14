
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int num_handles; int handles; int auth_req; } ;
struct TYPE_15__ {TYPE_1__ read_multiple; } ;
typedef TYPE_3__ tGATT_READ_PARAM ;
typedef scalar_t__ tBTA_GATT_STATUS ;
struct TYPE_14__ {int num_attr; int handles; int auth_req; } ;
struct TYPE_16__ {TYPE_2__ api_read_multi; } ;
typedef TYPE_4__ tBTA_GATTC_DATA ;
struct TYPE_17__ {int bta_conn_id; TYPE_4__* p_q_cmd; } ;
typedef TYPE_5__ tBTA_GATTC_CLCB ;
typedef int UINT16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

void FUNC_6(tBTA_GATTC_CLCB *VAR_3, tBTA_GATTC_DATA *VAR_4)
{
    tBTA_GATT_STATUS VAR_5 = VAR_0;
    tGATT_READ_PARAM VAR_6;

    if (FUNC_2(VAR_3, VAR_4)) {
        FUNC_5(&VAR_6, 0, sizeof(tGATT_READ_PARAM));

        if (VAR_5 == VAR_0) {
            VAR_6.read_multiple.num_handles = VAR_4->api_read_multi.num_attr;
            VAR_6.read_multiple.auth_req = VAR_4->api_read_multi.auth_req;
            FUNC_4(&VAR_6.read_multiple.handles, VAR_4->api_read_multi.handles,
                                        sizeof(UINT16) * VAR_4->api_read_multi.num_attr);

            VAR_5 = FUNC_0(VAR_3->bta_conn_id, VAR_2, &VAR_6);
        }


        if (VAR_5 != VAR_0) {

            if (VAR_3->p_q_cmd == VAR_4) {
                VAR_3->p_q_cmd = ((void*)0);
                FUNC_3(VAR_3);
            }

            FUNC_1(VAR_3->bta_conn_id, VAR_1, VAR_5, ((void*)0));
        }
    }
}
