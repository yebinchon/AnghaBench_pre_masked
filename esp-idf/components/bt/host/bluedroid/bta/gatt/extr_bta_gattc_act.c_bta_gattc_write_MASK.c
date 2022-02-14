
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int value; int auth_req; int len; int offset; int handle; int conn_id; } ;
typedef TYPE_2__ tGATT_VALUE ;
typedef scalar_t__ tBTA_GATT_STATUS ;
struct TYPE_11__ {int write_type; int len; int p_value; int auth_req; int offset; int handle; } ;
struct TYPE_13__ {TYPE_1__ api_write; } ;
typedef TYPE_3__ tBTA_GATTC_DATA ;
struct TYPE_14__ {int bta_conn_id; TYPE_3__* p_q_cmd; } ;
typedef TYPE_4__ tBTA_GATTC_CLCB ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,scalar_t__,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(tBTA_GATTC_CLCB *VAR_2, tBTA_GATTC_DATA *VAR_3)
{
    if (!FUNC_2(VAR_2, VAR_3)) {
        return;
    }

    tBTA_GATT_STATUS VAR_4 = VAR_0;
    tGATT_VALUE VAR_5;

    VAR_5.conn_id = VAR_2->bta_conn_id;
    VAR_5.handle = VAR_3->api_write.handle;
    VAR_5.offset = VAR_3->api_write.offset;
    VAR_5.len = VAR_3->api_write.len;
    VAR_5.auth_req = VAR_3->api_write.auth_req;

    if (VAR_3->api_write.p_value) {
        FUNC_4(VAR_5.value, VAR_3->api_write.p_value, VAR_3->api_write.len);
    }

    VAR_4 = FUNC_0(VAR_2->bta_conn_id, VAR_3->api_write.write_type, &VAR_5);


    if (VAR_4 != VAR_0) {

        if (VAR_2->p_q_cmd == VAR_3) {
            VAR_2->p_q_cmd = ((void*)0);
            FUNC_3(VAR_2);
        }

        FUNC_1(VAR_2->bta_conn_id, VAR_1, VAR_4, ((void*)0));
    }
}
