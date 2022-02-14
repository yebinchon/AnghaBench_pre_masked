
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct mc_request {int originating_fd; TYPE_1__* cmd; int regs; } ;
struct TYPE_2__ {void (* handler ) (struct mc_request*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct mc_request*) ;
 void FUNC_2 (struct mc_request*) ;
 int FUNC_3 (struct mc_request*,char*,int,int ) ;
 void FUNC_4 (struct mc_request*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 struct pt_regs* FUNC_7 (struct pt_regs*) ;
 void FUNC_8 (struct mc_request*) ;

void FUNC_9(struct mc_request *VAR_1)
{
 FUNC_0(VAR_1->originating_fd, VAR_0);
 FUNC_5(VAR_1->originating_fd, 1);
 FUNC_3(VAR_1, "stopped", 0, 0);
 for (;;) {
  if (!FUNC_1(VAR_1->originating_fd, VAR_1))
   continue;
  if (VAR_1->cmd->handler == FUNC_2)
   break;
  if (VAR_1->cmd->handler == FUNC_9) {
   FUNC_3(VAR_1, "Already stopped", 1, 0);
   continue;
  }
  if (VAR_1->cmd->handler == FUNC_4) {
   struct pt_regs *VAR_2;
   VAR_2 = FUNC_7((struct pt_regs *)&VAR_1->regs);
   FUNC_4(VAR_1);
   FUNC_7(VAR_2);
   continue;
  }
  (*VAR_1->cmd->handler)(VAR_1);
 }
 FUNC_5(VAR_1->originating_fd, 0);
 FUNC_6(VAR_1->originating_fd, VAR_0);
 FUNC_3(VAR_1, "", 0, 0);
}
