
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; } ;
struct PStack {struct PStack* next; TYPE_1__ l1; } ;
struct IsdnCardState {struct PStack* stlist; } ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct IsdnCardState *VAR_0,
      struct PStack *VAR_1)
{
 struct PStack *VAR_2;

 FUNC_0(&VAR_1->l1.timer, 0);
 if (VAR_0->stlist == VAR_1)
  VAR_0->stlist = VAR_1->next;
 else {
  VAR_2 = VAR_0->stlist;
  while (VAR_2)
   if (VAR_2->next == VAR_1) {
    VAR_2->next = VAR_1->next;
    return;
   } else
    VAR_2 = VAR_2->next;
 }
}
