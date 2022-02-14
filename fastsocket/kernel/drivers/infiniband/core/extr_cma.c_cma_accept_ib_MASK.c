
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ib; } ;
struct rdma_id_private {TYPE_1__ cm_id; scalar_t__ srq; int seq_num; int qp_num; } ;
struct rdma_conn_param {int rnr_retry_count; int flow_control; int initiator_depth; int responder_resources; int private_data_len; int private_data; } ;
struct ib_cm_rep_param {int srq; int rnr_retry_count; int flow_control; scalar_t__ failover_accepted; int initiator_depth; int responder_resources; int private_data_len; int private_data; int starting_psn; int qp_num; } ;


 int FUNC_0 (struct rdma_id_private*,struct rdma_conn_param*) ;
 int FUNC_1 (struct rdma_id_private*,struct rdma_conn_param*) ;
 int FUNC_2 (int ,struct ib_cm_rep_param*) ;
 int FUNC_3 (struct ib_cm_rep_param*,int ,int) ;
 int FUNC_4 (int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct rdma_id_private *VAR_1,
    struct rdma_conn_param *VAR_2)
{
 struct ib_cm_rep_param VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4)
  goto out;

 FUNC_3(&VAR_3, 0, sizeof VAR_3);
 VAR_3.qp_num = VAR_1->qp_num;
 VAR_3.starting_psn = VAR_1->seq_num;
 VAR_3.private_data = VAR_2->private_data;
 VAR_3.private_data_len = VAR_2->private_data_len;
 VAR_3.responder_resources = VAR_2->responder_resources;
 VAR_3.initiator_depth = VAR_2->initiator_depth;
 VAR_3.failover_accepted = 0;
 VAR_3.flow_control = VAR_2->flow_control;
 VAR_3.rnr_retry_count = FUNC_4(VAR_0, 7, VAR_2->rnr_retry_count);
 VAR_3.srq = VAR_1->srq ? 1 : 0;

 VAR_4 = FUNC_2(VAR_1->cm_id.ib, &VAR_3);
out:
 return VAR_4;
}
