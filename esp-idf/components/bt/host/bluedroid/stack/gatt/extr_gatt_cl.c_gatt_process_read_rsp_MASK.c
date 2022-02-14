
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_24__ {int payload_size; } ;
typedef TYPE_8__ tGATT_TCB ;
struct TYPE_17__ {scalar_t__ uuid128; } ;
struct TYPE_18__ {scalar_t__ len; TYPE_1__ uu; } ;
struct TYPE_19__ {TYPE_2__ service_type; } ;
struct TYPE_20__ {TYPE_3__ incl_service; } ;
struct TYPE_16__ {TYPE_4__ value; } ;
struct TYPE_23__ {TYPE_10__ result; scalar_t__ wait_for_read_rsp; int next_disc_start_hdl; } ;
struct TYPE_25__ {scalar_t__ counter; scalar_t__ operation; scalar_t__ op_subtype; scalar_t__ p_attr_buf; TYPE_7__ read_uuid128; int conn_id; TYPE_6__* p_reg; int s_handle; } ;
typedef TYPE_9__ tGATT_CLCB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_21__ {int (* p_disc_res_cb ) (int ,scalar_t__,TYPE_10__*) ;} ;
struct TYPE_22__ {TYPE_5__ app_cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*,scalar_t__) ;
 int FUNC_5 (TYPE_9__*,int ,void*) ;
 int FUNC_6 (scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,scalar_t__,TYPE_10__*) ;

void FUNC_9(tGATT_TCB *VAR_10, tGATT_CLCB *VAR_11, UINT8 VAR_12,
                           UINT16 VAR_13, UINT8 *VAR_14)
{
    UINT16 VAR_15 = VAR_11->counter;
    UINT8 *VAR_16 = VAR_14;

    FUNC_2(VAR_12);

    if (VAR_11->operation == VAR_2) {
        if (VAR_11->op_subtype != VAR_7) {
            VAR_11->counter = VAR_13;
            FUNC_5(VAR_11, VAR_8, (void *)VAR_16);
        } else {


            if (!VAR_11->p_attr_buf) {
                VAR_11->p_attr_buf = (UINT8 *)FUNC_7(VAR_5);
            }


            if (VAR_11->p_attr_buf && VAR_15 < VAR_5) {
                if ((VAR_13 + VAR_15) > VAR_5) {
                    VAR_13 = VAR_5 - VAR_15;
                }

                VAR_11->counter += VAR_13;

                FUNC_6(VAR_11->p_attr_buf + VAR_15, VAR_16, VAR_13);



                if (VAR_13 == (VAR_10->payload_size - 1) &&
                        VAR_13 + VAR_15 < VAR_5) {
                    FUNC_0("full pkt issue read blob for remianing bytes old offset=%d len=%d new offset=%d",
                                     VAR_15, VAR_13, VAR_11->counter);
                    FUNC_4(VAR_11, VAR_11->counter);
                } else {
                    FUNC_5(VAR_11, VAR_8, (void *)VAR_11->p_attr_buf);
                }
            } else {
                FUNC_1("attr offset = %d p_attr_buf = %p ", VAR_15, VAR_11->p_attr_buf);
                FUNC_5(VAR_11, VAR_6, (void *)VAR_11->p_attr_buf);
            }
        }
    } else {
        if (VAR_11->operation == VAR_1 &&
                VAR_11->op_subtype == VAR_3 &&
                VAR_11->read_uuid128.wait_for_read_rsp ) {
            VAR_11->s_handle = VAR_11->read_uuid128.next_disc_start_hdl;
            VAR_11->read_uuid128.wait_for_read_rsp = VAR_0;
            if (VAR_13 == VAR_9) {

                FUNC_6(VAR_11->read_uuid128.result.value.incl_service.service_type.uu.uuid128, VAR_16, VAR_13);
                VAR_11->read_uuid128.result.value.incl_service.service_type.len = VAR_9;
                if ( VAR_11->p_reg->app_cb.p_disc_res_cb) {
                    (*VAR_11->p_reg->app_cb.p_disc_res_cb)(VAR_11->conn_id, VAR_11->op_subtype, &VAR_11->read_uuid128.result);
                }
                FUNC_3(VAR_11) ;
            } else {
                FUNC_5(VAR_11, VAR_4, (void *)VAR_16);
            }
        }
    }

}
