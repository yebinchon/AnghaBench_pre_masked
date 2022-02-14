
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lbtf_private {int seqnum; int cmd_work; scalar_t__ surpriseremoved; } ;
struct cmd_header {int dummy; } ;
struct cmd_ctrl_node {int (* callback ) (struct lbtf_private*,unsigned long,struct cmd_header*) ;unsigned long callback_arg; scalar_t__ cmdwaitqwoken; TYPE_1__* cmdbuf; } ;
struct TYPE_2__ {scalar_t__ result; void* seqnum; void* size; void* command; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_ctrl_node* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,char*,struct cmd_ctrl_node*) ;
 struct cmd_ctrl_node* FUNC_5 (struct lbtf_private*) ;
 int FUNC_6 (struct lbtf_private*,struct cmd_ctrl_node*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,struct cmd_header*,int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static struct cmd_ctrl_node *FUNC_9(struct lbtf_private *VAR_4,
 uint16_t VAR_5, struct cmd_header *VAR_6, int VAR_7,
 int (*VAR_8)(struct lbtf_private *, unsigned long,
   struct cmd_header *),
 unsigned long VAR_9)
{
 struct cmd_ctrl_node *VAR_10;

 FUNC_2(VAR_2);

 if (VAR_4->surpriseremoved) {
  FUNC_3("PREP_CMD: card removed\n");
  VAR_10 = FUNC_0(-VAR_1);
  goto done;
 }

 VAR_10 = FUNC_5(VAR_4);
 if (VAR_10 == ((void*)0)) {
  FUNC_3("PREP_CMD: cmdnode is NULL\n");


  FUNC_8(VAR_3, &VAR_4->cmd_work);
  VAR_10 = FUNC_0(-VAR_0);
  goto done;
 }

 VAR_10->callback = VAR_8;
 VAR_10->callback_arg = VAR_9;


 FUNC_7(VAR_10->cmdbuf, VAR_6, VAR_7);


 VAR_4->seqnum++;
 VAR_10->cmdbuf->command = FUNC_1(VAR_5);
 VAR_10->cmdbuf->size = FUNC_1(VAR_7);
 VAR_10->cmdbuf->seqnum = FUNC_1(VAR_4->seqnum);
 VAR_10->cmdbuf->result = 0;

 FUNC_3("PREP_CMD: command 0x%04x\n", VAR_5);

 VAR_10->cmdwaitqwoken = 0;
 FUNC_6(VAR_4, VAR_10);
 FUNC_8(VAR_3, &VAR_4->cmd_work);

 done:
 FUNC_4(VAR_2, "ret %p", VAR_10);
 return VAR_10;
}
