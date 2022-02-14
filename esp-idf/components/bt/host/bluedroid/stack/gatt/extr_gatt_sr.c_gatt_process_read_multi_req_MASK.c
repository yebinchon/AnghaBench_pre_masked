
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


struct TYPE_19__ {scalar_t__ num_handles; int* handles; } ;
struct TYPE_20__ {TYPE_1__ multi_req; } ;
struct TYPE_23__ {TYPE_2__ sr_cmd; int transport; int peer_bda; } ;
typedef TYPE_5__ tGATT_TCB ;
typedef scalar_t__ tGATT_STATUS ;
struct TYPE_21__ {int handle; int len; int value; } ;
struct TYPE_24__ {TYPE_3__ attr_value; } ;
typedef TYPE_6__ tGATTS_RSP ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_22__ {int gatt_if; int p_db; } ;
struct TYPE_18__ {scalar_t__ req_op_code; scalar_t__ err_status; TYPE_4__* sr_reg; scalar_t__ enable_err_rsp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,scalar_t__*) ;
 TYPE_17__ VAR_10 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_5 (TYPE_5__*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (TYPE_5__*,int ,int ,scalar_t__,scalar_t__,TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (int ,int ,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_5__*,int ,scalar_t__,int,int ,int ,int *,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_12 (TYPE_6__*,int ,int) ;
 int FUNC_13 (TYPE_6__*) ;
 scalar_t__ FUNC_14 (int) ;

void FUNC_15 (tGATT_TCB *VAR_11, UINT8 VAR_12, UINT16 VAR_13, UINT8 *VAR_14)
{
    UINT32 VAR_15;
    UINT16 VAR_16 = 0, VAR_17 = VAR_13;
    UINT8 *VAR_18 = VAR_14, VAR_19;
    tGATT_STATUS VAR_20 = VAR_9;
    UINT8 VAR_21, VAR_22;
    tGATTS_RSP *VAR_23;

    FUNC_0("gatt_process_read_multi_req" );
    VAR_11->sr_cmd.multi_req.num_handles = 0;

    FUNC_7(VAR_11->peer_bda,
                         VAR_11->transport,
                         &VAR_21,
                         &VAR_22);


    if (VAR_10.enable_err_rsp && VAR_10.req_op_code == VAR_12) {
        FUNC_0("Conformance tst: forced err rspvofr ReadMultiple: error status=%d\n", VAR_10.err_status);

        FUNC_2(VAR_16, VAR_18);

        FUNC_4 (VAR_11, VAR_10.err_status, VAR_10.req_op_code, VAR_16, VAR_0);

        return;
    }


    while (VAR_17 >= 2 && VAR_11->sr_cmd.multi_req.num_handles < VAR_4) {
        FUNC_2(VAR_16, VAR_18);

        if ((VAR_19 = FUNC_6(VAR_16)) < VAR_5) {
            VAR_11->sr_cmd.multi_req.handles[VAR_11->sr_cmd.multi_req.num_handles++] = VAR_16;


            if ((VAR_20 = FUNC_10( VAR_10.sr_reg[VAR_19].p_db,
                       VAR_0,
                       VAR_16,
                       VAR_21,
                       VAR_22))
                    != VAR_9) {
                FUNC_0("read permission denied : 0x%02x", VAR_20);
                break;
            }
        } else {

            VAR_20 = VAR_2;
            break;
        }
        VAR_17 -= 2;
    }

    if (VAR_17 != 0) {
        FUNC_1("max attribute handle reached in ReadMultiple Request.");
    }

    if (VAR_11->sr_cmd.multi_req.num_handles == 0) {
        VAR_20 = VAR_2;
    }

    if (VAR_20 == VAR_9) {
        if ((VAR_15 = FUNC_5 (VAR_11, VAR_12, VAR_11->sr_cmd.multi_req.handles[0])) != 0) {
            FUNC_9(VAR_11);

            for (VAR_17 = 0; VAR_17 < VAR_11->sr_cmd.multi_req.num_handles; VAR_17 ++) {
                if ((VAR_23 = (tGATTS_RSP *)FUNC_14(sizeof(tGATTS_RSP))) != ((void*)0)) {
                    FUNC_12(VAR_23, 0, sizeof(tGATTS_RSP))
                    ;
                    VAR_16 = VAR_11->sr_cmd.multi_req.handles[VAR_17];
                    VAR_19 = FUNC_6(VAR_16);

                    VAR_23->attr_value.handle = VAR_16;
                    VAR_20 = FUNC_11(VAR_11,
                                                          VAR_10.sr_reg[VAR_19].p_db,
                                                          VAR_12,
                                                          VAR_16,
                                                          0,
                                                          VAR_23->attr_value.value,
                                                          &VAR_23->attr_value.len,
                                                          VAR_3,
                                                          VAR_21,
                                                          VAR_22,
                                                          VAR_15);

                    if (VAR_20 == VAR_9 || VAR_20 == VAR_8) {
                        FUNC_8(VAR_11, VAR_10.sr_reg[VAR_19].gatt_if , VAR_15, VAR_12, VAR_9, VAR_23);
                    }

                    FUNC_13(VAR_23);
                } else {
                    VAR_20 = VAR_6;
                    FUNC_3(VAR_11);
                    break;
                }
            }
        } else {
            VAR_20 = VAR_6;
        }
    }

    if (VAR_20 != VAR_9 && VAR_20 != VAR_8 && VAR_20 != VAR_7 && VAR_20 != VAR_1) {
        FUNC_4(VAR_11, VAR_20, VAR_12, VAR_16, VAR_0);
    }
}
