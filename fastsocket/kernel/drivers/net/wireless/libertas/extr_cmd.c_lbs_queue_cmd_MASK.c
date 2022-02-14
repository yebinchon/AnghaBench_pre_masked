
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {scalar_t__ psstate; int driver_lock; int cmdpendingq; } ;
struct cmd_ds_802_11_ps_mode {scalar_t__ action; } ;
struct cmd_ctrl_node {TYPE_1__* cmdbuf; int list; scalar_t__ result; } ;
struct TYPE_2__ {int command; int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct lbs_private *VAR_4,
     struct cmd_ctrl_node *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 1;

 FUNC_1(VAR_2);

 if (!VAR_5) {
  FUNC_2("QUEUE_CMD: cmdnode is NULL\n");
  goto done;
 }
 if (!VAR_5->cmdbuf->size) {
  FUNC_2("DNLD_CMD: cmd size is zero\n");
  goto done;
 }
 VAR_5->result = 0;


 if (FUNC_4(VAR_5->cmdbuf->command) == VAR_0) {
  struct cmd_ds_802_11_ps_mode *VAR_8 = (void *) &VAR_5->cmdbuf[1];

  if (VAR_8->action == FUNC_0(VAR_1)) {
   if (VAR_4->psstate != VAR_3)
    VAR_7 = 0;
  }
 }

 FUNC_7(&VAR_4->driver_lock, VAR_6);

 if (VAR_7)
  FUNC_6(&VAR_5->list, &VAR_4->cmdpendingq);
 else
  FUNC_5(&VAR_5->list, &VAR_4->cmdpendingq);

 FUNC_8(&VAR_4->driver_lock, VAR_6);

 FUNC_2("QUEUE_CMD: inserted command 0x%04x into cmdpendingq\n",
       FUNC_4(VAR_5->cmdbuf->command));

done:
 FUNC_3(VAR_2);
}
