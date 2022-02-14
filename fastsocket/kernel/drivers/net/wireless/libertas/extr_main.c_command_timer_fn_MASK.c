
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lbs_private {int cmd_timed_out; int driver_lock; int waitq; TYPE_2__* cur_cmd; } ;
struct TYPE_4__ {TYPE_1__* cmdbuf; } ;
struct TYPE_3__ {int command; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_1)
{
 struct lbs_private *VAR_2 = (struct lbs_private *)VAR_1;
 unsigned long VAR_3;

 FUNC_0(VAR_0);
 FUNC_4(&VAR_2->driver_lock, VAR_3);

 if (!VAR_2->cur_cmd)
  goto out;

 FUNC_2("command 0x%04x timed out\n",
  FUNC_3(VAR_2->cur_cmd->cmdbuf->command));

 VAR_2->cmd_timed_out = 1;
 FUNC_6(&VAR_2->waitq);
out:
 FUNC_5(&VAR_2->driver_lock, VAR_3);
 FUNC_1(VAR_0);
}
