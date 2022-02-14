
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbtf_private {int driver_lock; int cmdpendingq; } ;
struct cmd_ctrl_node {TYPE_1__* cmdbuf; int list; scalar_t__ result; } ;
struct TYPE_2__ {int command; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct lbtf_private *VAR_1,
     struct cmd_ctrl_node *VAR_2)
{
 unsigned long VAR_3;
 FUNC_0(VAR_0);

 if (!VAR_2) {
  FUNC_1("QUEUE_CMD: cmdnode is NULL\n");
  goto qcmd_done;
 }

 if (!VAR_2->cmdbuf->size) {
  FUNC_1("DNLD_CMD: cmd size is zero\n");
  goto qcmd_done;
 }

 VAR_2->result = 0;
 FUNC_5(&VAR_1->driver_lock, VAR_3);
 FUNC_4(&VAR_2->list, &VAR_1->cmdpendingq);
 FUNC_6(&VAR_1->driver_lock, VAR_3);

 FUNC_1("QUEUE_CMD: inserted command 0x%04x into cmdpendingq\n",
       FUNC_3(VAR_2->cmdbuf->command));

qcmd_done:
 FUNC_2(VAR_0);
}
