
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_cmds; int token_mask; int poll_sem; int flags; int context_lock; int event_sem; scalar_t__ free_head; TYPE_2__* context; } ;
struct mthca_dev {TYPE_1__ cmd; } ;
struct mthca_cmd_context {int dummy; } ;
struct TYPE_4__ {int token; int next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mthca_dev *VAR_3)
{
 int VAR_4;

 VAR_3->cmd.context = FUNC_1(VAR_3->cmd.max_cmds *
       sizeof (struct mthca_cmd_context),
       VAR_1);
 if (!VAR_3->cmd.context)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->cmd.max_cmds; ++VAR_4) {
  VAR_3->cmd.context[VAR_4].token = VAR_4;
  VAR_3->cmd.context[VAR_4].next = VAR_4 + 1;
 }

 VAR_3->cmd.context[VAR_3->cmd.max_cmds - 1].next = -1;
 VAR_3->cmd.free_head = 0;

 FUNC_2(&VAR_3->cmd.event_sem, VAR_3->cmd.max_cmds);
 FUNC_3(&VAR_3->cmd.context_lock);

 for (VAR_3->cmd.token_mask = 1;
      VAR_3->cmd.token_mask < VAR_3->cmd.max_cmds;
      VAR_3->cmd.token_mask <<= 1)
  ;
 --VAR_3->cmd.token_mask;

 VAR_3->cmd.flags |= VAR_2;

 FUNC_0(&VAR_3->cmd.poll_sem);

 return 0;
}
