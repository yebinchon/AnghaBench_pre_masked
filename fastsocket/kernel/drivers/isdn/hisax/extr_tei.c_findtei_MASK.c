
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tei; } ;
struct TYPE_3__ {struct PStack** stlistp; } ;
struct PStack {struct PStack* next; TYPE_2__ l2; TYPE_1__ l1; } ;



__attribute__((used)) static struct PStack *
FUNC_0(struct PStack *VAR_0, int VAR_1)
{
 struct PStack *VAR_2 = *(VAR_0->l1.stlistp);

 if (VAR_1 == 127)
  return (((void*)0));

 while (VAR_2)
  if (VAR_2->l2.tei == VAR_1)
   return (VAR_2);
  else
   VAR_2 = VAR_2->next;
 return (((void*)0));
}
