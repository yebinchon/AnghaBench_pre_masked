
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int t202; } ;
struct PStack {struct PStack* next; TYPE_1__ ma; } ;
struct IsdnCardState {struct PStack* stlist; } ;


 int FUNC_0 (int *,int) ;

void
FUNC_1(struct IsdnCardState *VAR_0)
{
 struct PStack *VAR_1 = VAR_0->stlist;

 while (VAR_1) {
  FUNC_0(&VAR_1->ma.t202, 1);
  VAR_1 = VAR_1->next;
 }
}
