
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int len; scalar_t__ pa; } ;
struct ocrdma_srq {struct ocrdma_srq* rqe_wr_id_tbl; struct ocrdma_srq* idx_bit_fields; TYPE_1__ rq; TYPE_2__* pd; struct ocrdma_dev* dev; } ;
struct ocrdma_dev {int dummy; } ;
struct ib_srq {int dummy; } ;
struct TYPE_4__ {scalar_t__ uctx; } ;


 struct ocrdma_srq* FUNC_0 (struct ib_srq*) ;
 int FUNC_1 (struct ocrdma_srq*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_srq*) ;

int FUNC_4(struct ib_srq *VAR_0)
{
 int VAR_1;
 struct ocrdma_srq *VAR_2;
 struct ocrdma_dev *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = VAR_2->dev;

 VAR_1 = FUNC_3(VAR_3, VAR_2);

 if (VAR_2->pd->uctx)
  FUNC_2(VAR_2->pd->uctx, (u64) VAR_2->rq.pa, VAR_2->rq.len);

 FUNC_1(VAR_2->idx_bit_fields);
 FUNC_1(VAR_2->rqe_wr_id_tbl);
 FUNC_1(VAR_2);
 return VAR_1;
}
