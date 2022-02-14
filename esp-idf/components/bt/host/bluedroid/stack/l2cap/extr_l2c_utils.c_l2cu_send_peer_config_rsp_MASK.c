
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int mon_tout; int rtrans_tout; } ;
struct TYPE_12__ {TYPE_2__ fcr; } ;
struct TYPE_15__ {int p_lcb; TYPE_3__ our_cfg; int remote_cid; int remote_id; } ;
typedef TYPE_6__ tL2C_CCB ;
struct TYPE_14__ {int flush_timeout; int access_latency; int sdu_inter_time; int max_sdu_size; scalar_t__ stype; scalar_t__ id; } ;
struct TYPE_13__ {int mps; scalar_t__ max_transmit; scalar_t__ tx_win_sz; scalar_t__ mode; } ;
struct TYPE_10__ {int delay_variation; int latency; int peak_bandwidth; int token_bucket_size; int token_rate; scalar_t__ service_type; scalar_t__ qos_flags; } ;
struct TYPE_16__ {TYPE_5__ ext_flow_spec; scalar_t__ ext_flow_spec_present; TYPE_4__ fcr; scalar_t__ fcr_present; TYPE_1__ qos; scalar_t__ qos_present; int flush_to; scalar_t__ flush_to_present; int mtu; scalar_t__ mtu_present; int result; int flags; } ;
typedef TYPE_7__ tL2CAP_CFG_INFO ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
typedef int BT_HDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ,int *,int *) ;
 int * FUNC_5 (int ,scalar_t__,int ,int ) ;

void FUNC_6 (tL2C_CCB *VAR_17, tL2CAP_CFG_INFO *VAR_18)
{
    BT_HDR *VAR_19;
    UINT16 VAR_20 = 0;
    UINT8 *VAR_21;


    if (VAR_18->mtu_present) {
        VAR_20 += VAR_4 + VAR_5;
    }
    if (VAR_18->flush_to_present) {
        VAR_20 += VAR_3 + VAR_5;
    }
    if (VAR_18->qos_present) {
        VAR_20 += VAR_6 + VAR_5;
    }
    if (VAR_18->fcr_present) {
        VAR_20 += VAR_2 + VAR_5;
    }
    if (VAR_18->ext_flow_spec_present) {
        VAR_20 += VAR_1 + VAR_5;
    }

    if ((VAR_19 = FUNC_5 (VAR_17->p_lcb, (UINT16)(VAR_14 + VAR_20),
                                    VAR_12, VAR_17->remote_id)) == ((void*)0) ) {
        FUNC_0 ("L2CAP - no buffer for conn_req");
        return;
    }

    VAR_21 = (UINT8 *)(VAR_19 + 1) + VAR_16 + VAR_0 + VAR_15 + VAR_13;

    FUNC_1 (VAR_21, VAR_17->remote_cid);
    FUNC_1 (VAR_21, VAR_18->flags);
    FUNC_1 (VAR_21, VAR_18->result);


    if (VAR_18->mtu_present) {
        FUNC_3 (VAR_21, VAR_10);
        FUNC_3 (VAR_21, VAR_4);
        FUNC_1 (VAR_21, VAR_18->mtu);
    }
    if (VAR_18->flush_to_present) {
        FUNC_3 (VAR_21, VAR_9);
        FUNC_3 (VAR_21, VAR_3);
        FUNC_1 (VAR_21, VAR_18->flush_to);
    }
    if (VAR_18->qos_present) {
        FUNC_3 (VAR_21, VAR_11);
        FUNC_3 (VAR_21, VAR_6);
        FUNC_3 (VAR_21, VAR_18->qos.qos_flags);
        FUNC_3 (VAR_21, VAR_18->qos.service_type);
        FUNC_2 (VAR_21, VAR_18->qos.token_rate);
        FUNC_2 (VAR_21, VAR_18->qos.token_bucket_size);
        FUNC_2 (VAR_21, VAR_18->qos.peak_bandwidth);
        FUNC_2 (VAR_21, VAR_18->qos.latency);
        FUNC_2 (VAR_21, VAR_18->qos.delay_variation);
    }
    if (VAR_18->fcr_present) {
        FUNC_3 (VAR_21, VAR_8);
        FUNC_3 (VAR_21, VAR_2);
        FUNC_3 (VAR_21, VAR_18->fcr.mode);
        FUNC_3 (VAR_21, VAR_18->fcr.tx_win_sz);
        FUNC_3 (VAR_21, VAR_18->fcr.max_transmit);
        FUNC_1 (VAR_21, VAR_17->our_cfg.fcr.rtrans_tout);
        FUNC_1 (VAR_21, VAR_17->our_cfg.fcr.mon_tout);
        FUNC_1 (VAR_21, VAR_18->fcr.mps);
    }

    if (VAR_18->ext_flow_spec_present) {
        FUNC_3 (VAR_21, VAR_7);
        FUNC_3 (VAR_21, VAR_1);
        FUNC_3 (VAR_21, VAR_18->ext_flow_spec.id);
        FUNC_3 (VAR_21, VAR_18->ext_flow_spec.stype);
        FUNC_1 (VAR_21, VAR_18->ext_flow_spec.max_sdu_size);
        FUNC_2 (VAR_21, VAR_18->ext_flow_spec.sdu_inter_time);
        FUNC_2 (VAR_21, VAR_18->ext_flow_spec.access_latency);
        FUNC_2 (VAR_21, VAR_18->ext_flow_spec.flush_timeout);
    }

    FUNC_4 (VAR_17->p_lcb, ((void*)0), VAR_19);
}
