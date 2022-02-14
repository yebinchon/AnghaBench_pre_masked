
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int max_cnt; } ;
struct TYPE_3__ {int max_cnt; } ;
struct ocrdma_qp {int * rqe_wr_id_tbl; TYPE_2__ rq; int * wqe_wr_id_tbl; TYPE_1__ sq; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct ocrdma_qp *VAR_2)
{
 VAR_2->wqe_wr_id_tbl =
     FUNC_0(sizeof(*(VAR_2->wqe_wr_id_tbl)) * VAR_2->sq.max_cnt,
      VAR_1);
 if (VAR_2->wqe_wr_id_tbl == ((void*)0))
  return -VAR_0;
 VAR_2->rqe_wr_id_tbl =
     FUNC_0(sizeof(u64) * VAR_2->rq.max_cnt, VAR_1);
 if (VAR_2->rqe_wr_id_tbl == ((void*)0))
  return -VAR_0;

 return 0;
}
