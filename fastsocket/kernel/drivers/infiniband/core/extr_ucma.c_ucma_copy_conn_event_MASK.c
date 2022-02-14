
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ucm_conn_param {int qp_num; int srq; int rnr_retry_count; int retry_count; int flow_control; int initiator_depth; int responder_resources; scalar_t__ private_data_len; int private_data; } ;
struct rdma_conn_param {int qp_num; int srq; int rnr_retry_count; int retry_count; int flow_control; int initiator_depth; int responder_resources; scalar_t__ private_data_len; int private_data; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rdma_ucm_conn_param *VAR_0,
     struct rdma_conn_param *VAR_1)
{
 if (VAR_1->private_data_len)
  FUNC_0(VAR_0->private_data, VAR_1->private_data,
         VAR_1->private_data_len);
 VAR_0->private_data_len = VAR_1->private_data_len;
 VAR_0->responder_resources =VAR_1->responder_resources;
 VAR_0->initiator_depth = VAR_1->initiator_depth;
 VAR_0->flow_control = VAR_1->flow_control;
 VAR_0->retry_count = VAR_1->retry_count;
 VAR_0->rnr_retry_count = VAR_1->rnr_retry_count;
 VAR_0->srq = VAR_1->srq;
 VAR_0->qp_num = VAR_1->qp_num;
}
