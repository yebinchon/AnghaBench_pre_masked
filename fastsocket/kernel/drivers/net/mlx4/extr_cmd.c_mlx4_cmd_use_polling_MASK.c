
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_cmds; int poll_sem; int context; int event_sem; scalar_t__ use_events; } ;
struct mlx4_priv {TYPE_1__ cmd; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx4_dev *VAR_0)
{
 struct mlx4_priv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_1->cmd.use_events = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->cmd.max_cmds; ++VAR_2)
  FUNC_0(&VAR_1->cmd.event_sem);

 FUNC_1(VAR_1->cmd.context);

 FUNC_3(&VAR_1->cmd.poll_sem);
}
