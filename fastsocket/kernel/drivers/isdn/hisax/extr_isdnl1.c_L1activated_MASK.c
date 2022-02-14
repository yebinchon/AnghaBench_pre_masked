
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* l1l2 ) (struct PStack*,int,int *) ;int Flags; } ;
struct PStack {struct PStack* next; TYPE_1__ l1; } ;
struct IsdnCardState {struct PStack* stlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct PStack*,int,int *) ;
 int FUNC_1 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct IsdnCardState *VAR_4)
{
 struct PStack *VAR_5;

 VAR_5 = VAR_4->stlist;
 while (VAR_5) {
  if (FUNC_2(VAR_1, &VAR_5->l1.Flags))
   VAR_5->l1.l1l2(VAR_5, VAR_3 | VAR_0, ((void*)0));
  else
   VAR_5->l1.l1l2(VAR_5, VAR_3 | VAR_2, ((void*)0));
  VAR_5 = VAR_5->next;
 }
}
