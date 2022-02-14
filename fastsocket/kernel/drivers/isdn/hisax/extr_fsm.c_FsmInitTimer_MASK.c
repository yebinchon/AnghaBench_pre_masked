
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long data; void* function; } ;
struct FsmTimer {TYPE_1__ tl; struct FsmInst* fi; } ;
struct FsmInst {int (* printdebug ) (struct FsmInst*,char*,long) ;scalar_t__ debug; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct FsmInst*,char*,long) ;

void
FUNC_2(struct FsmInst *VAR_1, struct FsmTimer *VAR_2)
{
 VAR_2->fi = VAR_1;
 VAR_2->tl.function = (void *) VAR_0;
 VAR_2->tl.data = (long) VAR_2;




 FUNC_0(&VAR_2->tl);
}
