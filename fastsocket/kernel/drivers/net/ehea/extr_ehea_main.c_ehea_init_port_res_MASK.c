
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u64 ;
struct port_res_cfg {int max_entries_rq3; int max_entries_rq2; int max_entries_rq1; int max_entries_sq; int max_entries_scq; int max_entries_rcq; } ;
struct ehea_qp_init_attr {int low_lat_rq1; int signalingtype; int rq_count; int qp_token; int act_nr_send_wqes; int act_nr_rwqes_rq1; int act_nr_rwqes_rq2; int act_nr_rwqes_rq3; int qp_nr; int aff_eq_handle; int recv_cq_handle; int send_cq_handle; int port_nr; int rq3_threshold; int rq2_threshold; int wqe_size_enc_rq3; int wqe_size_enc_rq2; int wqe_size_enc_rq1; int wqe_size_enc_sq; int max_nr_rwqes_rq3; int max_nr_rwqes_rq2; int max_nr_rwqes_rq1; int max_nr_send_wqes; } ;
struct TYPE_9__ {int arr; } ;
struct ehea_port_res {int sq_skba_size; int swqe_refill_th; TYPE_4__* eq; TYPE_5__* recv_cq; TYPE_5__* send_cq; int qp; TYPE_3__ rq3_skba; TYPE_3__ rq2_skba; TYPE_3__ rq1_skba; TYPE_3__ sq_skba; int napi; struct ehea_port* port; int swqe_avail; void* rx_packets; void* rx_bytes; void* tx_packets; void* tx_bytes; } ;
struct ehea_port {int netdev; TYPE_2__* qp_eq; int logical_port_id; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int pd; } ;
typedef enum ehea_eq_type { ____Placeholder_ehea_eq_type } ehea_eq_type ;
struct TYPE_7__ {int act_nr_of_cqes; } ;
struct TYPE_11__ {int fw_handle; TYPE_1__ attr; } ;
struct TYPE_10__ {int fw_handle; } ;
struct TYPE_8__ {int fw_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int) ;
 void* FUNC_1 (struct ehea_adapter*,int ,int ,int ) ;
 TYPE_4__* FUNC_2 (struct ehea_adapter*,int,int ,int ) ;
 int FUNC_3 (struct ehea_adapter*,int ,struct ehea_qp_init_attr*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (struct ehea_port_res*) ;
 int FUNC_9 (char*,int ,int,...) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int VAR_11 ;
 int FUNC_11 (struct ehea_qp_init_attr*) ;
 struct ehea_qp_init_attr* FUNC_12 (int,int ) ;
 int FUNC_13 (struct ehea_port_res*,int ,int) ;
 scalar_t__ FUNC_14 (struct ehea_port*) ;
 int FUNC_15 (int ,int *,int ,int) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct ehea_port *VAR_12, struct ehea_port_res *VAR_13,
         struct port_res_cfg *VAR_14, int VAR_15)
{
 struct ehea_adapter *VAR_16 = VAR_12->adapter;
 enum ehea_eq_type VAR_17 = VAR_0;
 struct ehea_qp_init_attr *VAR_18 = ((void*)0);
 int VAR_19 = -VAR_8;
 u64 VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_20 = VAR_13->tx_bytes;
 VAR_22 = VAR_13->tx_packets;
 VAR_21 = VAR_13->rx_bytes;
 VAR_23 = VAR_13->rx_packets;

 FUNC_13(VAR_13, 0, sizeof(struct ehea_port_res));

 VAR_13->tx_bytes = VAR_21;
 VAR_13->tx_packets = VAR_22;
 VAR_13->rx_bytes = VAR_21;
 VAR_13->rx_packets = VAR_23;

 VAR_13->port = VAR_12;

 VAR_13->eq = FUNC_2(VAR_16, VAR_17, VAR_1, 0);
 if (!VAR_13->eq) {
  FUNC_7("create_eq failed (eq)");
  goto out_free;
 }

 VAR_13->recv_cq = FUNC_1(VAR_16, VAR_14->max_entries_rcq,
         VAR_13->eq->fw_handle,
         VAR_12->logical_port_id);
 if (!VAR_13->recv_cq) {
  FUNC_7("create_cq failed (cq_recv)");
  goto out_free;
 }

 VAR_13->send_cq = FUNC_1(VAR_16, VAR_14->max_entries_scq,
         VAR_13->eq->fw_handle,
         VAR_12->logical_port_id);
 if (!VAR_13->send_cq) {
  FUNC_7("create_cq failed (cq_send)");
  goto out_free;
 }

 if (FUNC_14(VAR_12))
  FUNC_9("Send CQ: act_nr_cqes=%d, Recv CQ: act_nr_cqes=%d",
     VAR_13->send_cq->attr.act_nr_of_cqes,
     VAR_13->recv_cq->attr.act_nr_of_cqes);

 VAR_18 = FUNC_12(sizeof(*VAR_18), VAR_10);
 if (!VAR_18) {
  VAR_19 = -VAR_9;
  FUNC_7("no mem for ehea_qp_init_attr");
  goto out_free;
 }

 VAR_18->low_lat_rq1 = 1;
 VAR_18->signalingtype = 1;
 VAR_18->rq_count = 3;
 VAR_18->qp_token = VAR_15;
 VAR_18->max_nr_send_wqes = VAR_14->max_entries_sq;
 VAR_18->max_nr_rwqes_rq1 = VAR_14->max_entries_rq1;
 VAR_18->max_nr_rwqes_rq2 = VAR_14->max_entries_rq2;
 VAR_18->max_nr_rwqes_rq3 = VAR_14->max_entries_rq3;
 VAR_18->wqe_size_enc_sq = VAR_7;
 VAR_18->wqe_size_enc_rq1 = VAR_4;
 VAR_18->wqe_size_enc_rq2 = VAR_5;
 VAR_18->wqe_size_enc_rq3 = VAR_6;
 VAR_18->rq2_threshold = VAR_2;
 VAR_18->rq3_threshold = VAR_3;
 VAR_18->port_nr = VAR_12->logical_port_id;
 VAR_18->send_cq_handle = VAR_13->send_cq->fw_handle;
 VAR_18->recv_cq_handle = VAR_13->recv_cq->fw_handle;
 VAR_18->aff_eq_handle = VAR_12->qp_eq->fw_handle;

 VAR_13->qp = FUNC_3(VAR_16, VAR_16->pd, VAR_18);
 if (!VAR_13->qp) {
  FUNC_7("create_qp failed");
  VAR_19 = -VAR_8;
  goto out_free;
 }

 if (FUNC_14(VAR_12))
  FUNC_9("QP: qp_nr=%d\n act_nr_snd_wqe=%d\n nr_rwqe_rq1=%d\n "
     "nr_rwqe_rq2=%d\n nr_rwqe_rq3=%d", VAR_18->qp_nr,
     VAR_18->act_nr_send_wqes,
     VAR_18->act_nr_rwqes_rq1,
     VAR_18->act_nr_rwqes_rq2,
     VAR_18->act_nr_rwqes_rq3);

 VAR_13->sq_skba_size = VAR_18->act_nr_send_wqes + 1;

 VAR_19 = FUNC_10(&VAR_13->sq_skba, VAR_13->sq_skba_size);
 VAR_19 |= FUNC_10(&VAR_13->rq1_skba, VAR_18->act_nr_rwqes_rq1 + 1);
 VAR_19 |= FUNC_10(&VAR_13->rq2_skba, VAR_18->act_nr_rwqes_rq2 + 1);
 VAR_19 |= FUNC_10(&VAR_13->rq3_skba, VAR_18->act_nr_rwqes_rq3 + 1);
 if (VAR_19)
  goto out_free;

 VAR_13->swqe_refill_th = VAR_18->act_nr_send_wqes / 10;
 if (FUNC_8(VAR_13) != 0) {
  VAR_19 = -VAR_8;
  goto out_free;
 }

 FUNC_0(&VAR_13->swqe_avail, VAR_18->act_nr_send_wqes - 1);

 FUNC_11(VAR_18);

 FUNC_15(VAR_13->port->netdev, &VAR_13->napi, VAR_11, 64);

 VAR_19 = 0;
 goto out;

out_free:
 FUNC_11(VAR_18);
 FUNC_16(VAR_13->sq_skba.arr);
 FUNC_16(VAR_13->rq1_skba.arr);
 FUNC_16(VAR_13->rq2_skba.arr);
 FUNC_16(VAR_13->rq3_skba.arr);
 FUNC_6(VAR_13->qp);
 FUNC_4(VAR_13->send_cq);
 FUNC_4(VAR_13->recv_cq);
 FUNC_5(VAR_13->eq);
out:
 return VAR_19;
}
