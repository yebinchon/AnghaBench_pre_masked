
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * vhcr; int vhcr_dma; } ;
struct TYPE_4__ {int hcr; int pool; } ;
struct mlx4_priv {TYPE_3__ mfunc; TYPE_1__ cmd; } ;
struct mlx4_dev {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct mlx4_dev *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(VAR_2->cmd.pool);

 if (!FUNC_3(VAR_1))
  FUNC_1(VAR_2->cmd.hcr);
 if (FUNC_2(VAR_1))
  FUNC_0(&(VAR_1->pdev->dev), VAR_0,
      VAR_2->mfunc.vhcr, VAR_2->mfunc.vhcr_dma);
 VAR_2->mfunc.vhcr = ((void*)0);
}
