
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lbs_private {int seqnum; int waitq; scalar_t__ surpriseremoved; } ;
struct cmd_header {int dummy; } ;
struct cmd_ctrl_node {int (* callback ) (struct lbs_private*,unsigned long,struct cmd_header*) ;unsigned long callback_arg; scalar_t__ cmdwaitqwoken; TYPE_1__* cmdbuf; } ;
struct TYPE_2__ {scalar_t__ result; void* seqnum; void* size; void* command; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_ctrl_node* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,char*,struct cmd_ctrl_node*) ;
 struct cmd_ctrl_node* FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (struct lbs_private*,struct cmd_ctrl_node*) ;
 int FUNC_7 (TYPE_1__*,struct cmd_header*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct cmd_ctrl_node *FUNC_9(struct lbs_private *VAR_3,
 uint16_t VAR_4, struct cmd_header *VAR_5, int VAR_6,
 int (*VAR_7)(struct lbs_private *, unsigned long, struct cmd_header *),
 unsigned long VAR_8)
{
 struct cmd_ctrl_node *VAR_9;

 FUNC_2(VAR_2);

 if (VAR_3->surpriseremoved) {
  FUNC_3("PREP_CMD: card removed\n");
  VAR_9 = FUNC_0(-VAR_1);
  goto done;
 }

 VAR_9 = FUNC_5(VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_3("PREP_CMD: cmdnode is NULL\n");


  FUNC_8(&VAR_3->waitq);
  VAR_9 = FUNC_0(-VAR_0);
  goto done;
 }

 VAR_9->callback = VAR_7;
 VAR_9->callback_arg = VAR_8;


 FUNC_7(VAR_9->cmdbuf, VAR_5, VAR_6);


 VAR_3->seqnum++;
 VAR_9->cmdbuf->command = FUNC_1(VAR_4);
 VAR_9->cmdbuf->size = FUNC_1(VAR_6);
 VAR_9->cmdbuf->seqnum = FUNC_1(VAR_3->seqnum);
 VAR_9->cmdbuf->result = 0;

 FUNC_3("PREP_CMD: command 0x%04x\n", VAR_4);

 VAR_9->cmdwaitqwoken = 0;
 FUNC_6(VAR_3, VAR_9);
 FUNC_8(&VAR_3->waitq);

 done:
 FUNC_4(VAR_2, "ret %p", VAR_9);
 return VAR_9;
}
