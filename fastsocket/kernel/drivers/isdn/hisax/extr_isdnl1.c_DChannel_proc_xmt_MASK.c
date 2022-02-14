
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* l1l2 ) (struct PStack*,int,int *) ;int Flags; } ;
struct PStack {struct PStack* next; TYPE_1__ l1; } ;
struct IsdnCardState {struct PStack* stlist; scalar_t__ tx_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void
FUNC_2(struct IsdnCardState *VAR_3)
{
 struct PStack *VAR_4;

 if (VAR_3->tx_skb)
  return;

 VAR_4 = VAR_3->stlist;
 while (VAR_4 != ((void*)0)) {
  if (FUNC_1(VAR_1, &VAR_4->l1.Flags)) {
   VAR_4->l1.l1l2(VAR_4, VAR_2 | VAR_0, ((void*)0));
   break;
  } else
   VAR_4 = VAR_4->next;
 }
}
