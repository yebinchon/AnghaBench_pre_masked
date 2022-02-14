
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tGATT_TCB ;
struct TYPE_17__ {scalar_t__ e_handle; int service_type; } ;
struct TYPE_18__ {TYPE_5__ group_value; } ;
struct TYPE_13__ {int uuid16; } ;
struct TYPE_14__ {int len; TYPE_1__ uu; } ;
struct TYPE_19__ {scalar_t__ handle; TYPE_6__ value; TYPE_2__ type; } ;
typedef TYPE_7__ tGATT_DISC_RES ;
struct TYPE_20__ {scalar_t__ operation; scalar_t__ op_subtype; scalar_t__ s_handle; int conn_id; TYPE_4__* p_reg; int uuid; } ;
typedef TYPE_8__ tGATT_CLCB ;
typedef int tBT_UUID ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_15__ {int (* p_disc_res_cb ) (int ,scalar_t__,TYPE_7__*) ;} ;
struct TYPE_16__ {TYPE_3__ app_cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (TYPE_7__*,int ,int) ;
 int FUNC_6 (int ,scalar_t__,TYPE_7__*) ;

void FUNC_7 (tGATT_TCB *VAR_3, tGATT_CLCB *VAR_4, UINT16 VAR_5, UINT8 *VAR_6)
{
    tGATT_DISC_RES VAR_7;
    UINT8 *VAR_8 = VAR_6;

    FUNC_2(VAR_3);

    FUNC_0("gatt_process_find_type_value_rsp ");

    if (VAR_4->operation != VAR_0 || VAR_4->op_subtype != VAR_1) {
        return;
    }

    FUNC_5 (&VAR_7, 0, sizeof(tGATT_DISC_RES));
    VAR_7.type.len = 2;
    VAR_7.type.uu.uuid16 = VAR_2;


    while (VAR_5 >= 4) {
        FUNC_1 (VAR_7.handle, VAR_8);
        FUNC_1 (VAR_7.value.group_value.e_handle, VAR_8);
        FUNC_4 (&VAR_7.value.group_value.service_type, &VAR_4->uuid, sizeof(tBT_UUID));

        VAR_5 -= 4;

        if (VAR_4->p_reg->app_cb.p_disc_res_cb) {
            (*VAR_4->p_reg->app_cb.p_disc_res_cb)(VAR_4->conn_id, VAR_4->op_subtype, &VAR_7);
        }
    }


    VAR_4->s_handle = (VAR_7.value.group_value.e_handle == 0) ? 0 : (VAR_7.value.group_value.e_handle + 1);

    FUNC_3(VAR_4) ;
}
