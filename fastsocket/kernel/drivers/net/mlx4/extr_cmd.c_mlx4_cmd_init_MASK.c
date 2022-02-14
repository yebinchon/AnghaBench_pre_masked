
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int toggle; int * hcr; int pool; scalar_t__ use_events; int poll_sem; int slave_cmd_mutex; int hcr_mutex; } ;
struct TYPE_5__ {int * vhcr; int vhcr_dma; } ;
struct mlx4_priv {TYPE_2__ cmd; TYPE_1__ mfunc; } ;
struct mlx4_dev {TYPE_3__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int * FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx4_dev*,char*) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (int *,int) ;

int FUNC_12(struct mlx4_dev *VAR_6)
{
 struct mlx4_priv *VAR_7 = FUNC_7(VAR_6);

 FUNC_8(&VAR_7->cmd.hcr_mutex);
 FUNC_8(&VAR_7->cmd.slave_cmd_mutex);
 FUNC_11(&VAR_7->cmd.poll_sem, 1);
 VAR_7->cmd.use_events = 0;
 VAR_7->cmd.toggle = 1;

 VAR_7->cmd.hcr = ((void*)0);
 VAR_7->mfunc.vhcr = ((void*)0);

 if (!FUNC_6(VAR_6)) {
  VAR_7->cmd.hcr = FUNC_2(FUNC_10(VAR_6->pdev, 0) +
     VAR_2, VAR_3);
  if (!VAR_7->cmd.hcr) {
   FUNC_4(VAR_6, "Couldn't map command register.\n");
   return -VAR_0;
  }
 }

 if (FUNC_5(VAR_6)) {
  VAR_7->mfunc.vhcr = FUNC_0(&(VAR_6->pdev->dev), VAR_5,
            &VAR_7->mfunc.vhcr_dma,
            VAR_1);
  if (!VAR_7->mfunc.vhcr) {
   FUNC_4(VAR_6, "Couldn't allocate VHCR.\n");
   goto err_hcr;
  }
 }

 VAR_7->cmd.pool = FUNC_9("mlx4_cmd", VAR_6->pdev,
      VAR_4,
      VAR_4, 0);
 if (!VAR_7->cmd.pool)
  goto err_vhcr;

 return 0;

err_vhcr:
 if (FUNC_5(VAR_6))
  FUNC_1(&(VAR_6->pdev->dev), VAR_5,
      VAR_7->mfunc.vhcr, VAR_7->mfunc.vhcr_dma);
 VAR_7->mfunc.vhcr = ((void*)0);

err_hcr:
 if (!FUNC_6(VAR_6))
  FUNC_3(VAR_7->cmd.hcr);
 return -VAR_0;
}
