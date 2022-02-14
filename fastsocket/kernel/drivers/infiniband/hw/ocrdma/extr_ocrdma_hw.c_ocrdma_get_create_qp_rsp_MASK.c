
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int dbid; int max_cnt; int max_wqe_idx; } ;
struct TYPE_3__ {int dbid; int max_cnt; int max_wqe_idx; } ;
struct ocrdma_qp {int id; int max_ird; int max_ord; int dpp_enabled; TYPE_2__ rq; TYPE_1__ sq; } ;
struct ocrdma_create_qp_rsp {int qp_id; int sq_rq_id; int max_ord_ird; int dpp_response; int max_wqe_rqe; } ;
struct ib_qp_init_attr {int srq; } ;


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

__attribute__((used)) static void FUNC_0(struct ocrdma_create_qp_rsp *VAR_11,
         struct ocrdma_qp *VAR_12,
         struct ib_qp_init_attr *VAR_13,
         u16 *VAR_14, u16 *VAR_15)
{
 u32 VAR_16, VAR_17;
 VAR_12->id = VAR_11->qp_id & VAR_8;
 VAR_12->rq.dbid = VAR_11->sq_rq_id & VAR_9;
 VAR_12->sq.dbid = VAR_11->sq_rq_id >> VAR_10;
 VAR_12->max_ird = VAR_11->max_ord_ird & VAR_5;
 VAR_12->max_ord = (VAR_11->max_ord_ird >> VAR_6);
 VAR_12->dpp_enabled = 0;
 if (VAR_11->dpp_response & VAR_2) {
  VAR_12->dpp_enabled = 1;
  *VAR_15 = (VAR_11->dpp_response &
    VAR_0) >>
    VAR_1;
  *VAR_14 = (VAR_11->dpp_response &
    VAR_3) >>
    VAR_4;
 }
 VAR_16 =
  VAR_11->max_wqe_rqe >> VAR_7;
 VAR_16 = 1 << VAR_16;
 VAR_17 = 1 << ((u16)VAR_11->max_wqe_rqe);

 VAR_12->sq.max_cnt = VAR_16;
 VAR_12->sq.max_wqe_idx = VAR_16 - 1;

 if (!VAR_13->srq) {
  VAR_12->rq.max_cnt = VAR_17;
  VAR_12->rq.max_wqe_idx = VAR_17 - 1;
 }
}
