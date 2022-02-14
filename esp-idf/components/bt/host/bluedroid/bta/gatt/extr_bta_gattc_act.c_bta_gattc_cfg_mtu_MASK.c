
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTA_GATT_STATUS ;
typedef int tBTA_GATTC_DATA ;
struct TYPE_5__ {int bta_conn_id; int * p_q_cmd; } ;
typedef TYPE_1__ tBTA_GATTC_CLCB ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(tBTA_GATTC_CLCB *VAR_3, tBTA_GATTC_DATA *VAR_4)
{
    tBTA_GATT_STATUS VAR_5;

    if (FUNC_2(VAR_3, VAR_4)) {
        VAR_5 = FUNC_0 (VAR_3->bta_conn_id);


        if (VAR_5 != VAR_2 && VAR_5 != VAR_1) {

            if (VAR_3->p_q_cmd == VAR_4) {
                VAR_3->p_q_cmd = ((void*)0);
                FUNC_3(VAR_3);
            }

            FUNC_1(VAR_3->bta_conn_id, VAR_0, VAR_5, ((void*)0));
        }
    }
}
