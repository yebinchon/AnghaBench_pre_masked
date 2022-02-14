
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l3_process {int callref; struct l3_process* next; } ;
struct TYPE_2__ {struct l3_process* proc; } ;
struct PStack {TYPE_1__ l3; } ;



struct l3_process
*FUNC_0(struct PStack *VAR_0, int VAR_1)
{
 struct l3_process *VAR_2 = VAR_0->l3.proc;

 while (VAR_2)
  if (VAR_2->callref == VAR_1)
   return (VAR_2);
  else
   VAR_2 = VAR_2->next;
 return (((void*)0));
}
