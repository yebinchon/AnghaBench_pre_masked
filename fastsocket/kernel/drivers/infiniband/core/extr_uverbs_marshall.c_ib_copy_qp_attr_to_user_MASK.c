
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_qp_attr {int reserved; int alt_timeout; int alt_port_num; int rnr_retry; int retry_cnt; int timeout; int port_num; int min_rnr_timer; int max_dest_rd_atomic; int max_rd_atomic; int sq_draining; int en_sqd_async_notify; int alt_pkey_index; int pkey_index; int alt_ah_attr; int ah_attr; int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; int qp_access_flags; int dest_qp_num; int sq_psn; int rq_psn; int qkey; int path_mig_state; int path_mtu; int cur_qp_state; int qp_state; } ;
struct TYPE_2__ {int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; } ;
struct ib_qp_attr {int alt_timeout; int alt_port_num; int rnr_retry; int retry_cnt; int timeout; int port_num; int min_rnr_timer; int max_dest_rd_atomic; int max_rd_atomic; int sq_draining; int en_sqd_async_notify; int alt_pkey_index; int pkey_index; int alt_ah_attr; int ah_attr; TYPE_1__ cap; int qp_access_flags; int dest_qp_num; int sq_psn; int rq_psn; int qkey; int path_mig_state; int path_mtu; int cur_qp_state; int qp_state; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct ib_uverbs_qp_attr *VAR_0,
        struct ib_qp_attr *VAR_1)
{
 VAR_0->qp_state = VAR_1->qp_state;
 VAR_0->cur_qp_state = VAR_1->cur_qp_state;
 VAR_0->path_mtu = VAR_1->path_mtu;
 VAR_0->path_mig_state = VAR_1->path_mig_state;
 VAR_0->qkey = VAR_1->qkey;
 VAR_0->rq_psn = VAR_1->rq_psn;
 VAR_0->sq_psn = VAR_1->sq_psn;
 VAR_0->dest_qp_num = VAR_1->dest_qp_num;
 VAR_0->qp_access_flags = VAR_1->qp_access_flags;

 VAR_0->max_send_wr = VAR_1->cap.max_send_wr;
 VAR_0->max_recv_wr = VAR_1->cap.max_recv_wr;
 VAR_0->max_send_sge = VAR_1->cap.max_send_sge;
 VAR_0->max_recv_sge = VAR_1->cap.max_recv_sge;
 VAR_0->max_inline_data = VAR_1->cap.max_inline_data;

 FUNC_0(&VAR_0->ah_attr, &VAR_1->ah_attr);
 FUNC_0(&VAR_0->alt_ah_attr, &VAR_1->alt_ah_attr);

 VAR_0->pkey_index = VAR_1->pkey_index;
 VAR_0->alt_pkey_index = VAR_1->alt_pkey_index;
 VAR_0->en_sqd_async_notify = VAR_1->en_sqd_async_notify;
 VAR_0->sq_draining = VAR_1->sq_draining;
 VAR_0->max_rd_atomic = VAR_1->max_rd_atomic;
 VAR_0->max_dest_rd_atomic = VAR_1->max_dest_rd_atomic;
 VAR_0->min_rnr_timer = VAR_1->min_rnr_timer;
 VAR_0->port_num = VAR_1->port_num;
 VAR_0->timeout = VAR_1->timeout;
 VAR_0->retry_cnt = VAR_1->retry_cnt;
 VAR_0->rnr_retry = VAR_1->rnr_retry;
 VAR_0->alt_port_num = VAR_1->alt_port_num;
 VAR_0->alt_timeout = VAR_1->alt_timeout;
 FUNC_1(VAR_0->reserved, 0, sizeof(VAR_0->reserved));
}
