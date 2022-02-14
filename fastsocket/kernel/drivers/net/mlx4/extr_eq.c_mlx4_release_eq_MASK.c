
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned long long pool_bm; int pool_lock; } ;
struct TYPE_6__ {TYPE_4__* eq; } ;
struct mlx4_priv {TYPE_3__ msix_ctl; TYPE_2__ eq_table; } ;
struct TYPE_5__ {int num_comp_vectors; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_8__ {int irq; } ;


 int FUNC_0 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx4_dev *VAR_0, int VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_2(VAR_0);

 int VAR_3 = VAR_1 - VAR_0->caps.num_comp_vectors - 1;

 if (FUNC_1(VAR_3 >= 0)) {


  FUNC_3(&VAR_2->msix_ctl.pool_lock);
  if (VAR_2->msix_ctl.pool_bm & 1ULL << VAR_3) {
   FUNC_0(VAR_2->eq_table.eq[VAR_1].irq,
     &VAR_2->eq_table.eq[VAR_1]);
   VAR_2->msix_ctl.pool_bm &= ~(1ULL << VAR_3);
  }
  FUNC_4(&VAR_2->msix_ctl.pool_lock);
 }

}
