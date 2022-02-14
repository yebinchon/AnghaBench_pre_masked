
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ocrdma_qp {scalar_t__ qp_type; scalar_t__ max_ord; scalar_t__ max_ird; TYPE_3__* dev; int qkey; } ;
struct TYPE_8__ {int path_mtu_pkey_indx; int dmac_b0_to_b3; int vlan_dmac_b4_to_b5; int ack_to_rnr_rtc_dest_qpn; int rnt_rc_sl_fl; int tclass_sq_psn; int hop_lmt_rq_psn; int max_ord_ird; int max_sge_recv_flags; int qkey; } ;
struct ocrdma_modify_qp {TYPE_4__ params; int flags; } ;
struct net_device {int mtu; } ;
struct ib_qp_attr {int pkey_index; int dest_qp_num; int path_mtu; int timeout; int retry_cnt; int min_rnr_timer; int rnr_retry; int sq_psn; int rq_psn; scalar_t__ max_rd_atomic; scalar_t__ max_dest_rd_atomic; scalar_t__ en_sqd_async_notify; int qkey; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
struct TYPE_6__ {scalar_t__ max_ord_per_qp; scalar_t__ max_ird_per_qp; } ;
struct TYPE_5__ {int* mac_addr; struct net_device* netdev; } ;
struct TYPE_7__ {TYPE_2__ attr; TYPE_1__ nic_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ocrdma_qp*,struct ocrdma_modify_qp*,struct ib_qp_attr*) ;

__attribute__((used)) static int FUNC_3(struct ocrdma_qp *VAR_43,
    struct ocrdma_modify_qp *VAR_44,
    struct ib_qp_attr *VAR_45, int VAR_46,
    enum ib_qp_state VAR_47)
{
 int VAR_48 = 0;
 struct net_device *VAR_49 = VAR_43->dev->nic_info.netdev;
 int VAR_50 = FUNC_1(VAR_49->mtu);

 if (VAR_46 & VAR_10) {
  VAR_44->params.path_mtu_pkey_indx |= (VAR_45->pkey_index &
         VAR_24);
  VAR_44->flags |= VAR_35;
 }
 if (VAR_46 & VAR_11) {
  VAR_43->qkey = VAR_45->qkey;
  VAR_44->params.qkey = VAR_45->qkey;
  VAR_44->flags |= VAR_37;
 }
 if (VAR_46 & VAR_3)
  FUNC_2(VAR_43, VAR_44, VAR_45);
 else if (VAR_43->qp_type == VAR_1 || VAR_43->qp_type == VAR_2) {

  VAR_44->params.dmac_b0_to_b3 = VAR_43->dev->nic_info.mac_addr[0] |
   (VAR_43->dev->nic_info.mac_addr[1] << 8) |
   (VAR_43->dev->nic_info.mac_addr[2] << 16) |
   (VAR_43->dev->nic_info.mac_addr[3] << 24);
  VAR_44->params.vlan_dmac_b4_to_b5 = VAR_43->dev->nic_info.mac_addr[4] |
     (VAR_43->dev->nic_info.mac_addr[5] << 8);
 }
 if ((VAR_46 & VAR_5) &&
     VAR_45->en_sqd_async_notify) {
  VAR_44->params.max_sge_recv_flags |=
   VAR_19;
  VAR_44->flags |= VAR_32;
 }
 if (VAR_46 & VAR_4) {
  VAR_44->params.ack_to_rnr_rtc_dest_qpn |= (VAR_45->dest_qp_num &
    VAR_18);
  VAR_44->flags |= VAR_32;
 }
 if (VAR_46 & VAR_9) {
  if (FUNC_0(VAR_50) <
      FUNC_0(VAR_45->path_mtu)) {
   VAR_48 = -VAR_0;
   goto pmtu_err;
  }
  VAR_44->params.path_mtu_pkey_indx |=
      (FUNC_0(VAR_45->path_mtu) <<
       VAR_23) &
      VAR_22;
  VAR_44->flags |= VAR_36;
 }
 if (VAR_46 & VAR_16) {
  VAR_44->params.ack_to_rnr_rtc_dest_qpn |= VAR_45->timeout <<
      VAR_17;
  VAR_44->flags |= VAR_31;
 }
 if (VAR_46 & VAR_12) {
  VAR_44->params.rnt_rc_sl_fl |= (VAR_45->retry_cnt <<
          VAR_26) &
      VAR_25;
  VAR_44->flags |= VAR_38;
 }
 if (VAR_46 & VAR_8) {
  VAR_44->params.rnt_rc_sl_fl |= (VAR_45->min_rnr_timer <<
          VAR_28) &
      VAR_27;
  VAR_44->flags |= VAR_39;
 }
 if (VAR_46 & VAR_13) {
  VAR_44->params.ack_to_rnr_rtc_dest_qpn |= (VAR_45->rnr_retry <<
   VAR_30)
   & VAR_29;
  VAR_44->flags |= VAR_41;
 }
 if (VAR_46 & VAR_15) {
  VAR_44->params.tclass_sq_psn |= (VAR_45->sq_psn & 0x00ffffff);
  VAR_44->flags |= VAR_42;
 }
 if (VAR_46 & VAR_14) {
  VAR_44->params.hop_lmt_rq_psn |= (VAR_45->rq_psn & 0x00ffffff);
  VAR_44->flags |= VAR_40;
 }
 if (VAR_46 & VAR_7) {
  if (VAR_45->max_rd_atomic > VAR_43->dev->attr.max_ord_per_qp) {
   VAR_48 = -VAR_0;
   goto pmtu_err;
  }
  VAR_43->max_ord = VAR_45->max_rd_atomic;
  VAR_44->flags |= VAR_34;
 }
 if (VAR_46 & VAR_6) {
  if (VAR_45->max_dest_rd_atomic > VAR_43->dev->attr.max_ird_per_qp) {
   VAR_48 = -VAR_0;
   goto pmtu_err;
  }
  VAR_43->max_ird = VAR_45->max_dest_rd_atomic;
  VAR_44->flags |= VAR_33;
 }
 VAR_44->params.max_ord_ird = (VAR_43->max_ord <<
    VAR_21) |
    (VAR_43->max_ird & VAR_20);
pmtu_err:
 return VAR_48;
}
