
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_gs; scalar_t__ max; } ;
struct mlx4_ib_srq {TYPE_1__ msrq; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_srq_attr {int srq_limit; int max_sge; scalar_t__ max_wr; } ;
struct ib_srq {int device; } ;


 int FUNC_0 (int ,TYPE_1__*,int*) ;
 struct mlx4_ib_dev* FUNC_1 (int ) ;
 struct mlx4_ib_srq* FUNC_2 (struct ib_srq*) ;

int FUNC_3(struct ib_srq *VAR_0, struct ib_srq_attr *VAR_1)
{
 struct mlx4_ib_dev *VAR_2 = FUNC_1(VAR_0->device);
 struct mlx4_ib_srq *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2->dev, &VAR_3->msrq, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_1->srq_limit = VAR_5;
 VAR_1->max_wr = VAR_3->msrq.max - 1;
 VAR_1->max_sge = VAR_3->msrq.max_gs;

 return 0;
}
