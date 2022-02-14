
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l3_process {struct l3_process* next; } ;
struct TYPE_2__ {int (* l3ml3 ) (struct PStack*,int,struct l3_process*) ;struct l3_process* proc; } ;
struct PStack {TYPE_1__ l3; } ;


 int FUNC_0 (struct PStack*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_1(struct PStack *VAR_0, int VAR_1)
{
 struct l3_process *VAR_2 = VAR_0->l3.proc;
 struct l3_process *VAR_3;

 while (VAR_2) {

  VAR_3 = VAR_2->next;
  VAR_0->l3.l3ml3(VAR_0, VAR_1, VAR_2);
  VAR_2 = VAR_3;
 }
}
