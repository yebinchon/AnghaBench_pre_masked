
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PStack {struct PStack* next; } ;
struct IsdnCardState {struct PStack* stlist; } ;



void
FUNC_0(struct IsdnCardState *VAR_0,
       struct PStack *VAR_1)
{
 VAR_1->next = VAR_0->stlist;
 VAR_0->stlist = VAR_1;
}
