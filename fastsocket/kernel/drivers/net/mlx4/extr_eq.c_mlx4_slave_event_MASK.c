
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_slave_state {int active; } ;
struct TYPE_3__ {struct mlx4_slave_state* slave_state; } ;
struct TYPE_4__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_eqe {int dummy; } ;
struct mlx4_dev {int dummy; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_eqe*) ;

__attribute__((used)) static void FUNC_2(struct mlx4_dev *VAR_0, int VAR_1,
        struct mlx4_eqe *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_0(VAR_0);
 struct mlx4_slave_state *VAR_4 =
  &VAR_3->mfunc.master.slave_state[VAR_1];

 if (!VAR_4->active) {

  return;
 }

 FUNC_1(VAR_0, VAR_1, VAR_2);
}
