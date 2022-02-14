
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_8__* p_lcb; int remote_cid; scalar_t__ local_id; } ;
typedef TYPE_4__ tL2C_CCB ;
struct TYPE_13__ {int flush_timeout; int access_latency; int sdu_inter_time; int max_sdu_size; scalar_t__ stype; scalar_t__ id; } ;
struct TYPE_12__ {int mps; int mon_tout; int rtrans_tout; scalar_t__ max_transmit; scalar_t__ tx_win_sz; scalar_t__ mode; } ;
struct TYPE_11__ {int delay_variation; int latency; int peak_bandwidth; int token_bucket_size; int token_rate; scalar_t__ service_type; scalar_t__ qos_flags; } ;
struct TYPE_15__ {TYPE_3__ ext_flow_spec; scalar_t__ ext_flow_spec_present; scalar_t__ fcs; scalar_t__ fcs_present; TYPE_2__ fcr; scalar_t__ fcr_present; TYPE_1__ qos; scalar_t__ qos_present; int flush_to; scalar_t__ flush_to_present; int mtu; scalar_t__ mtu_present; int flags; } ;
typedef TYPE_5__ tL2CAP_CFG_INFO ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_16__ {scalar_t__ id; } ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (TYPE_8__*,int *,int *) ;
 int FUNC_5 (TYPE_8__*,int ) ;
 int * FUNC_6 (TYPE_8__*,scalar_t__,int ,scalar_t__) ;

void FUNC_7 (tL2C_CCB *VAR_20, tL2CAP_CFG_INFO *VAR_21)
{
    BT_HDR *VAR_22;
    UINT16 VAR_23 = 0;
    UINT8 *VAR_24;


    VAR_20->p_lcb->id++;
    FUNC_5(VAR_20->p_lcb, VAR_1);

    VAR_20->local_id = VAR_20->p_lcb->id;

    if (VAR_21->mtu_present) {
        VAR_23 += VAR_6 + VAR_7;
    }
    if (VAR_21->flush_to_present) {
        VAR_23 += VAR_5 + VAR_7;
    }
    if (VAR_21->qos_present) {
        VAR_23 += VAR_8 + VAR_7;
    }
    if (VAR_21->fcr_present) {
        VAR_23 += VAR_3 + VAR_7;
    }
    if (VAR_21->fcs_present) {
        VAR_23 += VAR_4 + VAR_7;
    }
    if (VAR_21->ext_flow_spec_present) {
        VAR_23 += VAR_2 + VAR_7;
    }

    if ((VAR_22 = FUNC_6 (VAR_20->p_lcb, (UINT16) (VAR_17 + VAR_23),
                                    VAR_15, VAR_20->local_id)) == ((void*)0) ) {
        FUNC_0 ("L2CAP - no buffer for conn_req");
        return;
    }

    VAR_24 = (UINT8 *)(VAR_22 + 1) + VAR_19 + VAR_0 +
        VAR_18 + VAR_16;

    FUNC_1 (VAR_24, VAR_20->remote_cid);
    FUNC_1 (VAR_24, VAR_21->flags);


    if (VAR_21->mtu_present) {
        FUNC_3 (VAR_24, VAR_13);
        FUNC_3 (VAR_24, VAR_6);
        FUNC_1 (VAR_24, VAR_21->mtu);
    }
    if (VAR_21->flush_to_present) {
        FUNC_3 (VAR_24, VAR_12);
        FUNC_3 (VAR_24, VAR_5);
        FUNC_1 (VAR_24, VAR_21->flush_to);
    }
    if (VAR_21->qos_present) {
        FUNC_3 (VAR_24, VAR_14);
        FUNC_3 (VAR_24, VAR_8);
        FUNC_3 (VAR_24, VAR_21->qos.qos_flags);
        FUNC_3 (VAR_24, VAR_21->qos.service_type);
        FUNC_2 (VAR_24, VAR_21->qos.token_rate);
        FUNC_2 (VAR_24, VAR_21->qos.token_bucket_size);
        FUNC_2 (VAR_24, VAR_21->qos.peak_bandwidth);
        FUNC_2 (VAR_24, VAR_21->qos.latency);
        FUNC_2 (VAR_24, VAR_21->qos.delay_variation);
    }
    if (VAR_21->fcr_present) {
        FUNC_3 (VAR_24, VAR_10);
        FUNC_3 (VAR_24, VAR_3);
        FUNC_3 (VAR_24, VAR_21->fcr.mode);
        FUNC_3 (VAR_24, VAR_21->fcr.tx_win_sz);
        FUNC_3 (VAR_24, VAR_21->fcr.max_transmit);
        FUNC_1 (VAR_24, VAR_21->fcr.rtrans_tout);
        FUNC_1 (VAR_24, VAR_21->fcr.mon_tout);
        FUNC_1 (VAR_24, VAR_21->fcr.mps);
    }

    if (VAR_21->fcs_present) {
        FUNC_3 (VAR_24, VAR_11);
        FUNC_3 (VAR_24, VAR_4);
        FUNC_3 (VAR_24, VAR_21->fcs);
    }

    if (VAR_21->ext_flow_spec_present) {
        FUNC_3 (VAR_24, VAR_9);
        FUNC_3 (VAR_24, VAR_2);
        FUNC_3 (VAR_24, VAR_21->ext_flow_spec.id);
        FUNC_3 (VAR_24, VAR_21->ext_flow_spec.stype);
        FUNC_1 (VAR_24, VAR_21->ext_flow_spec.max_sdu_size);
        FUNC_2 (VAR_24, VAR_21->ext_flow_spec.sdu_inter_time);
        FUNC_2 (VAR_24, VAR_21->ext_flow_spec.access_latency);
        FUNC_2 (VAR_24, VAR_21->ext_flow_spec.flush_timeout);
    }

    FUNC_4 (VAR_20->p_lcb, ((void*)0), VAR_22);
}
