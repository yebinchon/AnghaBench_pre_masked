
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ib_srq {int dummy; } ;
struct TYPE_7__ {int max_cnt; } ;
struct ocrdma_srq {int bit_fields_len; struct ocrdma_srq* idx_bit_fields; struct ocrdma_srq* rqe_wr_id_tbl; struct ib_srq ibsrq; TYPE_3__ rq; scalar_t__ db; struct ocrdma_pd* pd; struct ocrdma_dev* dev; int q_lock; } ;
struct ocrdma_pd {int id; struct ocrdma_dev* dev; } ;
struct TYPE_6__ {int db_page_size; scalar_t__ db; } ;
struct TYPE_5__ {scalar_t__ max_recv_sge; scalar_t__ max_rqe; } ;
struct ocrdma_dev {TYPE_2__ nic_info; TYPE_1__ attr; } ;
struct ib_udata {int dummy; } ;
struct TYPE_8__ {scalar_t__ max_sge; scalar_t__ max_wr; scalar_t__ srq_limit; } ;
struct ib_srq_init_attr {TYPE_4__ attr; } ;
struct ib_pd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_srq* FUNC_0 (int) ;
 int VAR_2 ;
 struct ocrdma_pd* FUNC_1 (struct ib_pd*) ;
 int FUNC_2 (struct ocrdma_srq*) ;
 struct ocrdma_srq* FUNC_3 (int,int ) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ocrdma_srq*,int,int) ;
 int FUNC_6 (struct ocrdma_srq*,struct ib_udata*) ;
 int FUNC_7 (struct ocrdma_srq*,struct ib_srq_init_attr*,struct ocrdma_pd*) ;
 int FUNC_8 (struct ocrdma_dev*,struct ocrdma_srq*) ;
 int FUNC_9 (struct ocrdma_srq*,TYPE_4__*) ;
 int FUNC_10 (int *) ;

struct ib_srq *FUNC_11(struct ib_pd *VAR_3,
     struct ib_srq_init_attr *VAR_4,
     struct ib_udata *VAR_5)
{
 int VAR_6 = -VAR_1;
 struct ocrdma_pd *VAR_7 = FUNC_1(VAR_3);
 struct ocrdma_dev *VAR_8 = VAR_7->dev;
 struct ocrdma_srq *VAR_9;

 if (VAR_4->attr.max_sge > VAR_8->attr.max_recv_sge)
  return FUNC_0(-VAR_0);
 if (VAR_4->attr.max_wr > VAR_8->attr.max_rqe)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(VAR_6);

 FUNC_10(&VAR_9->q_lock);
 VAR_9->dev = VAR_8;
 VAR_9->pd = VAR_7;
 VAR_9->db = VAR_8->nic_info.db + (VAR_7->id * VAR_8->nic_info.db_page_size);
 VAR_6 = FUNC_7(VAR_9, VAR_4, VAR_7);
 if (VAR_6)
  goto err;

 if (VAR_5 == ((void*)0)) {
  VAR_9->rqe_wr_id_tbl = FUNC_4(sizeof(u64) * VAR_9->rq.max_cnt,
       VAR_2);
  if (VAR_9->rqe_wr_id_tbl == ((void*)0))
   goto arm_err;

  VAR_9->bit_fields_len = (VAR_9->rq.max_cnt / 32) +
      (VAR_9->rq.max_cnt % 32 ? 1 : 0);
  VAR_9->idx_bit_fields =
      FUNC_3(VAR_9->bit_fields_len * sizeof(u32), VAR_2);
  if (VAR_9->idx_bit_fields == ((void*)0))
   goto arm_err;
  FUNC_5(VAR_9->idx_bit_fields, 0xff,
         VAR_9->bit_fields_len * sizeof(u32));
 }

 if (VAR_4->attr.srq_limit) {
  VAR_6 = FUNC_9(VAR_9, &VAR_4->attr);
  if (VAR_6)
   goto arm_err;
 }

 if (VAR_5) {
  VAR_6 = FUNC_6(VAR_9, VAR_5);
  if (VAR_6)
   goto arm_err;
 }

 return &VAR_9->ibsrq;

arm_err:
 FUNC_8(VAR_8, VAR_9);
err:
 FUNC_2(VAR_9->rqe_wr_id_tbl);
 FUNC_2(VAR_9->idx_bit_fields);
 FUNC_2(VAR_9);
 return FUNC_0(VAR_6);
}
