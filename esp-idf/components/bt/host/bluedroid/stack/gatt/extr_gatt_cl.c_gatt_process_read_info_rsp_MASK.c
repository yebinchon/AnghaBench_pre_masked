
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tGATT_TCB ;
struct TYPE_11__ {scalar_t__ handle; int type; } ;
typedef TYPE_3__ tGATT_DISC_RES ;
struct TYPE_12__ {scalar_t__ operation; scalar_t__ op_subtype; scalar_t__ s_handle; int conn_id; TYPE_2__* p_reg; int uuid; } ;
typedef TYPE_4__ tGATT_CLCB ;
typedef int tBT_UUID ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_9__ {int (* p_disc_res_cb ) (int ,scalar_t__,TYPE_3__*) ;} ;
struct TYPE_10__ {TYPE_1__ app_cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int *) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__**) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int ,scalar_t__,TYPE_3__*) ;

void FUNC_9(tGATT_TCB *VAR_8, tGATT_CLCB *VAR_9, UINT8 VAR_10,
                                UINT16 VAR_11, UINT8 *VAR_12)
{
    tGATT_DISC_RES VAR_13;
    UINT8 *VAR_14 = VAR_12, VAR_15 = 0, VAR_16;

    FUNC_3(VAR_8);
    FUNC_3(VAR_10);

    if (VAR_11 < VAR_2) {
        FUNC_0("invalid Info Response PDU received, discard.");
        FUNC_5(VAR_9, VAR_5, ((void*)0));
        return;
    }

    if (VAR_9->operation != VAR_0 || VAR_9->op_subtype != VAR_1) {
        return;
    }

    FUNC_2(VAR_16, VAR_14);
    VAR_11 -= 1;

    if (VAR_16 == VAR_4) {
        VAR_15 = VAR_7;
    } else if (VAR_16 == VAR_3) {
        VAR_15 = VAR_6;
    }

    while (VAR_11 >= VAR_15 + 2) {
        FUNC_1 (VAR_13.handle, VAR_14);

        if (VAR_15 > 0) {
            if (!FUNC_6(&VAR_13.type, VAR_15, &VAR_14)) {
                break;
            }
        } else {
            FUNC_7 (&VAR_13.type, &VAR_9->uuid, sizeof(tBT_UUID));
        }

        VAR_11 -= (VAR_15 + 2);

        if (VAR_9->p_reg->app_cb.p_disc_res_cb) {
            (*VAR_9->p_reg->app_cb.p_disc_res_cb)(VAR_9->conn_id, VAR_9->op_subtype, &VAR_13);
        }
    }

    VAR_9->s_handle = (VAR_13.handle == 0) ? 0 : (VAR_13.handle + 1);

    FUNC_4(VAR_9) ;
}
