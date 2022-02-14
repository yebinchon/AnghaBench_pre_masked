
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int going_down_lock; int is_going_down; } ;
struct mlx4_ib_dev {TYPE_1__ sriov; } ;
struct mlx4_ib_demux_pv_ctx {scalar_t__ state; int work; int wq; int ib_dev; } ;
struct ib_cq {struct mlx4_ib_demux_pv_ctx* cq_context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct mlx4_ib_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ib_cq *VAR_1, void *VAR_2)
{
 unsigned long VAR_3;
 struct mlx4_ib_demux_pv_ctx *VAR_4 = VAR_1->cq_context;
 struct mlx4_ib_dev *VAR_5 = FUNC_3(VAR_4->ib_dev);
 FUNC_1(&VAR_5->sriov.going_down_lock, VAR_3);
 if (!VAR_5->sriov.is_going_down && VAR_4->state == VAR_0)
  FUNC_0(VAR_4->wq, &VAR_4->work);
 FUNC_2(&VAR_5->sriov.going_down_lock, VAR_3);
}
