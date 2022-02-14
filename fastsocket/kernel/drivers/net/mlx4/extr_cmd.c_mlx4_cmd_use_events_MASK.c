
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_cmds; int token_mask; int use_events; int poll_sem; int context_lock; int event_sem; scalar_t__ free_head; TYPE_2__* context; } ;
struct mlx4_priv {TYPE_1__ cmd; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_context {int dummy; } ;
struct TYPE_4__ {int token; int next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx4_dev *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;
 int VAR_5 = 0;

 VAR_3->cmd.context = FUNC_1(VAR_3->cmd.max_cmds *
       sizeof (struct mlx4_cmd_context),
       VAR_1);
 if (!VAR_3->cmd.context)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->cmd.max_cmds; ++VAR_4) {
  VAR_3->cmd.context[VAR_4].token = VAR_4;
  VAR_3->cmd.context[VAR_4].next = VAR_4 + 1;
 }

 VAR_3->cmd.context[VAR_3->cmd.max_cmds - 1].next = -1;
 VAR_3->cmd.free_head = 0;

 FUNC_3(&VAR_3->cmd.event_sem, VAR_3->cmd.max_cmds);
 FUNC_4(&VAR_3->cmd.context_lock);

 for (VAR_3->cmd.token_mask = 1;
      VAR_3->cmd.token_mask < VAR_3->cmd.max_cmds;
      VAR_3->cmd.token_mask <<= 1)
  ;
 --VAR_3->cmd.token_mask;

 FUNC_0(&VAR_3->cmd.poll_sem);
 VAR_3->cmd.use_events = 1;

 return VAR_5;
}
