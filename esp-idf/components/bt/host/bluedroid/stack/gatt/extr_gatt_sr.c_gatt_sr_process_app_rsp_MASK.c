
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ status; int handle; int * p_rsp_msg; } ;
struct TYPE_12__ {TYPE_2__ sr_cmd; int payload_size; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ tGATT_STATUS ;
typedef int tGATT_SR_MSG ;
typedef scalar_t__ tGATT_IF ;
typedef int tGATTS_RSP ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int ,int ) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,int ,int ) ;
 int FUNC_11 (TYPE_2__*,scalar_t__,int *,int ) ;

tGATT_STATUS FUNC_12 (tGATT_TCB *VAR_7, tGATT_IF VAR_8,
                                      UINT32 VAR_9, UINT8 VAR_10,
                                      tGATT_STATUS VAR_11, tGATTS_RSP *VAR_12)
{
    tGATT_STATUS VAR_13 = VAR_4;
    FUNC_2(VAR_9);

    FUNC_0("gatt_sr_process_app_rsp gatt_if=%d\n", VAR_8);

    FUNC_9(VAR_7, VAR_8, VAR_0, VAR_0);

    if (VAR_10 == VAR_3) {

        if (!FUNC_11 (&VAR_7->sr_cmd, VAR_11, VAR_12, VAR_7->payload_size)) {
            return (VAR_4);
        }
    } else {
        if (VAR_10 == VAR_2 && VAR_11 == VAR_4) {
            FUNC_10(VAR_7, VAR_8, VAR_6, VAR_0);
        }

        if (VAR_10 == VAR_1 && VAR_11 != VAR_4) {
            FUNC_8(VAR_7);
        }

        VAR_7->sr_cmd.status = VAR_11;

        if (FUNC_7(VAR_7)
                && VAR_11 == VAR_4) {
            if (VAR_7->sr_cmd.p_rsp_msg == ((void*)0)) {
                VAR_7->sr_cmd.p_rsp_msg = FUNC_3 (VAR_7, (UINT8)(VAR_10 + 1), (tGATT_SR_MSG *)VAR_12);
            } else {
                FUNC_1("Exception!!! already has respond message\n");
            }
        }
    }
    if (FUNC_7(VAR_7)) {
        if ( (VAR_7->sr_cmd.status == VAR_4) && (VAR_7->sr_cmd.p_rsp_msg) ) {
            VAR_13 = FUNC_4 (VAR_7, VAR_7->sr_cmd.p_rsp_msg);
            VAR_7->sr_cmd.p_rsp_msg = ((void*)0);
        } else {
            if (VAR_7->sr_cmd.status == VAR_4){
                VAR_11 = VAR_5;
            }
            VAR_13 = FUNC_6 (VAR_7, VAR_11, VAR_10, VAR_7->sr_cmd.handle, VAR_0);
        }

        FUNC_5(VAR_7);
    }

    FUNC_0("gatt_sr_process_app_rsp ret_code=%d\n", VAR_13);

    return VAR_13;
}
