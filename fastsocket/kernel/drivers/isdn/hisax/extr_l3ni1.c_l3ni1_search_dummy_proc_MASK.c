
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int invoke_id; } ;
struct TYPE_6__ {TYPE_2__ ni1; } ;
struct l3_process {int callref; struct l3_process* next; TYPE_3__ prot; } ;
struct TYPE_4__ {struct l3_process* proc; } ;
struct PStack {TYPE_1__ l3; } ;



__attribute__((used)) static struct l3_process *
FUNC_0(struct PStack *VAR_0, int VAR_1)
{ struct l3_process *VAR_2 = VAR_0->l3.proc;

  if (!VAR_1) return(((void*)0));

  while (VAR_2)
   { if ((VAR_2->callref == -1) && (VAR_2->prot.ni1.invoke_id == VAR_1))
       return(VAR_2);
     VAR_2 = VAR_2->next;
   }
  return(((void*)0));
}
