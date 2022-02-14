
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dbid; } ;
struct ocrdma_srq {int dev; TYPE_1__ rq; } ;
struct ocrdma_query_srq_rsp {int srq_lmt_max_sge; int max_rqe_pdid; } ;
struct ocrdma_query_srq {int id; } ;
struct ocrdma_mqe {int dummy; } ;
struct ib_srq_attr {int max_sge; int max_wr; int srq_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ocrdma_query_srq*) ;
 struct ocrdma_query_srq* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct ocrdma_mqe*) ;

int FUNC_3(struct ocrdma_srq *VAR_5, struct ib_srq_attr *VAR_6)
{
 int VAR_7 = -VAR_0;
 struct ocrdma_query_srq *VAR_8;
 VAR_8 = FUNC_1(VAR_1, sizeof(*VAR_8));
 if (!VAR_8)
  return VAR_7;
 VAR_8->id = VAR_5->rq.dbid;
 VAR_7 = FUNC_2(VAR_5->dev, (struct ocrdma_mqe *)VAR_8);
 if (VAR_7 == 0) {
  struct ocrdma_query_srq_rsp *VAR_9 =
      (struct ocrdma_query_srq_rsp *)VAR_8;
  VAR_6->max_sge =
      VAR_9->srq_lmt_max_sge &
      VAR_3;
  VAR_6->max_wr =
      VAR_9->max_rqe_pdid >> VAR_2;
  VAR_6->srq_limit = VAR_9->srq_lmt_max_sge >>
      VAR_4;
 }
 FUNC_0(VAR_8);
 return VAR_7;
}
