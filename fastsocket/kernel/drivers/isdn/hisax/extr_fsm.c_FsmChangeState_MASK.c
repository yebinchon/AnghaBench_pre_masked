
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct FsmInst {int state; TYPE_1__* fsm; int (* printdebug ) (struct FsmInst*,char*,int ) ;scalar_t__ debug; } ;
struct TYPE_2__ {int * strState; } ;


 int FUNC_0 (struct FsmInst*,char*,int ) ;

void
FUNC_1(struct FsmInst *VAR_0, int VAR_1)
{
 VAR_0->state = VAR_1;
 if (VAR_0->debug)
  VAR_0->printdebug(VAR_0, "ChangeState %s",
   VAR_0->fsm->strState[VAR_1]);
}
