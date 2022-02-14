
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fcoe_task_ctx_entry {int dummy; } ;
struct TYPE_3__ {int counter; } ;
struct TYPE_4__ {TYPE_1__ refcount; } ;
struct bnx2fc_cmd {int tm_done; scalar_t__ wait_for_comp; TYPE_2__ refcount; int cmd_type; } ;


 int FUNC_0 (struct bnx2fc_cmd*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2fc_cmd*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(struct bnx2fc_cmd *VAR_2,
      struct fcoe_task_ctx_entry *VAR_3,
      u8 VAR_4)
{
 FUNC_0(VAR_2, "Entered process_cleanup_compl "
         "refcnt = %d, cmd_type = %d\n",
     VAR_2->refcount.refcount.counter, VAR_2->cmd_type);
 FUNC_1(VAR_2, VAR_0);
 FUNC_3(&VAR_2->refcount, VAR_1);
 if (VAR_2->wait_for_comp)
  FUNC_2(&VAR_2->tm_done);
}
