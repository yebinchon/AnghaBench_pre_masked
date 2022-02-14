
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef size_t u32 ;
struct TYPE_4__ {int ip_addr_lo_lo; int ip_addr_lo_hi; int ip_addr_hi_lo; int ip_addr_hi_hi; } ;
struct TYPE_3__ {int ip_addr_lo_lo; int ip_addr_lo_hi; int ip_addr_hi_lo; int ip_addr_hi_hi; } ;
struct l5cm_conn_addr_params {int pmtu; int remote_tcp_port; int local_tcp_port; TYPE_2__ remote_ip_addr; TYPE_1__ local_ip_addr; int params; int remote_addr_5; int remote_addr_4; int remote_addr_3; int remote_addr_2; int remote_addr_1; int remote_addr_0; } ;
struct l5cm_active_conn_buffer {struct l5cm_conn_addr_params conn_addr_buf; } ;
struct l4_kwq_connect_req3 {int pmtu; } ;
struct l4_kwq_connect_req2 {int dst_ip_v6_2; int dst_ip_v6_3; int dst_ip_v6_4; int src_ip_v6_2; int src_ip_v6_3; int src_ip_v6_4; } ;
struct l4_kwq_connect_req1 {size_t pg_cid; int conn_flags; int tcp_flags; int cid; int dst_port; int src_port; int dst_ip; int src_ip; } ;
struct kwqe {int dummy; } ;
struct cnic_sock {int vlan_id; int * ha; } ;
struct cnic_local {int pfid; struct cnic_context* ctx_tbl; struct cnic_sock* csk_tbl; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct cnic_context {int ctx_flags; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cnic_dev*,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct cnic_dev*,int) ;
 struct l5cm_active_conn_buffer* FUNC_3 (struct cnic_local*,size_t,union l5cm_specific_data*) ;
 int FUNC_4 (struct cnic_dev*,struct l4_kwq_connect_req1*,struct l4_kwq_connect_req3*,struct l5cm_active_conn_buffer*) ;
 int FUNC_5 (struct cnic_dev*,int ,int ,int ,union l5cm_specific_data*) ;
 int FUNC_6 (struct l5cm_active_conn_buffer*,int ,int) ;
 int FUNC_7 (int ,char*) ;
 struct bnx2x* FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct cnic_dev *VAR_10, struct kwqe *VAR_11[],
         u32 VAR_12, int *VAR_13)
{
 struct cnic_local *VAR_14 = VAR_10->cnic_priv;
 struct bnx2x *VAR_15 = FUNC_8(VAR_10->netdev);
 struct l4_kwq_connect_req1 *VAR_16 =
  (struct l4_kwq_connect_req1 *) VAR_11[0];
 struct l4_kwq_connect_req3 *VAR_17;
 struct l5cm_active_conn_buffer *VAR_18;
 struct l5cm_conn_addr_params *VAR_19;
 union l5cm_specific_data VAR_20;
 u32 VAR_21 = VAR_16->pg_cid;
 struct cnic_sock *VAR_22 = &VAR_14->csk_tbl[VAR_21];
 struct cnic_context *VAR_23 = &VAR_14->ctx_tbl[VAR_21];
 int VAR_24;

 if (VAR_12 < 2) {
  *VAR_13 = VAR_12;
  return -VAR_3;
 }

 if (VAR_16->conn_flags & VAR_6)
  *VAR_13 = 3;
 else
  *VAR_13 = 2;

 if (VAR_12 < *VAR_13) {
  *VAR_13 = VAR_12;
  return -VAR_3;
 }

 if (sizeof(*VAR_18) > VAR_1) {
  FUNC_7(VAR_10->netdev, "conn_buf size too big\n");
  return -VAR_4;
 }
 VAR_18 = FUNC_3(VAR_14, VAR_21, &VAR_20);
 if (!VAR_18)
  return -VAR_4;

 FUNC_6(VAR_18, 0, sizeof(*VAR_18));

 VAR_19 = &VAR_18->conn_addr_buf;
 VAR_19->remote_addr_0 = VAR_22->ha[0];
 VAR_19->remote_addr_1 = VAR_22->ha[1];
 VAR_19->remote_addr_2 = VAR_22->ha[2];
 VAR_19->remote_addr_3 = VAR_22->ha[3];
 VAR_19->remote_addr_4 = VAR_22->ha[4];
 VAR_19->remote_addr_5 = VAR_22->ha[5];

 if (VAR_16->conn_flags & VAR_6) {
  struct l4_kwq_connect_req2 *VAR_25 =
   (struct l4_kwq_connect_req2 *) VAR_11[1];

  VAR_19->local_ip_addr.ip_addr_hi_hi = VAR_25->src_ip_v6_4;
  VAR_19->local_ip_addr.ip_addr_hi_lo = VAR_25->src_ip_v6_3;
  VAR_19->local_ip_addr.ip_addr_lo_hi = VAR_25->src_ip_v6_2;

  VAR_19->remote_ip_addr.ip_addr_hi_hi = VAR_25->dst_ip_v6_4;
  VAR_19->remote_ip_addr.ip_addr_hi_lo = VAR_25->dst_ip_v6_3;
  VAR_19->remote_ip_addr.ip_addr_lo_hi = VAR_25->dst_ip_v6_2;
  VAR_19->params |= VAR_8;
 }
 VAR_17 = (struct l4_kwq_connect_req3 *) VAR_11[*VAR_13 - 1];

 VAR_19->local_ip_addr.ip_addr_lo_lo = VAR_16->src_ip;
 VAR_19->remote_ip_addr.ip_addr_lo_lo = VAR_16->dst_ip;
 VAR_19->local_tcp_port = VAR_16->src_port;
 VAR_19->remote_tcp_port = VAR_16->dst_port;

 VAR_19->pmtu = VAR_17->pmtu;
 FUNC_4(VAR_10, VAR_16, VAR_17, VAR_18);

 FUNC_0(VAR_10, VAR_0 +
    FUNC_1(VAR_14->pfid), VAR_22->vlan_id);

 FUNC_2(VAR_10,
  VAR_16->tcp_flags & VAR_7);

 VAR_24 = FUNC_5(VAR_10, VAR_9,
   VAR_16->cid, VAR_5, &VAR_20);
 if (!VAR_24)
  FUNC_9(VAR_2, &VAR_23->ctx_flags);

 return VAR_24;
}
