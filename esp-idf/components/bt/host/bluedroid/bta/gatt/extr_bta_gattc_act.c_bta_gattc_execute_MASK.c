
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ tBTA_GATT_STATUS ;
struct TYPE_9__ {int is_execute; } ;
struct TYPE_10__ {TYPE_1__ api_exec; } ;
typedef TYPE_2__ tBTA_GATTC_DATA ;
struct TYPE_11__ {int bta_conn_id; TYPE_2__* p_q_cmd; } ;
typedef TYPE_3__ tBTA_GATTC_CLCB ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(tBTA_GATTC_CLCB *VAR_2, tBTA_GATTC_DATA *VAR_3)
{
    tBTA_GATT_STATUS VAR_4;

    if (FUNC_2(VAR_2, VAR_3)) {
        VAR_4 = FUNC_0(VAR_2->bta_conn_id, VAR_3->api_exec.is_execute);

        if (VAR_4 != VAR_0) {

            if (VAR_2->p_q_cmd == VAR_3) {
                VAR_2->p_q_cmd = ((void*)0);
                FUNC_3(VAR_2);
            }

            FUNC_1(VAR_2->bta_conn_id, VAR_1, VAR_4, ((void*)0));
        }
    }
}
