
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_ib_dev {int dummy; } ;
struct mlx4_ib_demux_pv_ctx {scalar_t__ state; int * cq; int * pd; int * mr; TYPE_1__* qp; scalar_t__ has_smi; int wq; } ;
struct TYPE_2__ {int * qp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx4_ib_demux_pv_ctx*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct mlx4_ib_dev *VAR_4, int VAR_5, int VAR_6,
     struct mlx4_ib_demux_pv_ctx *VAR_7, int VAR_8)
{
 if (!VAR_7)
  return;
 if (VAR_7->state > VAR_0) {
  VAR_7->state = VAR_1;
  if (VAR_8)
   FUNC_0(VAR_7->wq);
  if (VAR_7->has_smi) {
   FUNC_4(VAR_7->qp[0].qp);
   VAR_7->qp[0].qp = ((void*)0);
   FUNC_5(VAR_7, VAR_3, 1);
  }
  FUNC_4(VAR_7->qp[1].qp);
  VAR_7->qp[1].qp = ((void*)0);
  FUNC_5(VAR_7, VAR_2, 1);
  FUNC_2(VAR_7->mr);
  VAR_7->mr = ((void*)0);
  FUNC_1(VAR_7->pd);
  VAR_7->pd = ((void*)0);
  FUNC_3(VAR_7->cq);
  VAR_7->cq = ((void*)0);
  VAR_7->state = VAR_0;
 }
}
