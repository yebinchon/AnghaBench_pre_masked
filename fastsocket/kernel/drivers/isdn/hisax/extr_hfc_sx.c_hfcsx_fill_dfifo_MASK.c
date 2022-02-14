
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct IsdnCardState {TYPE_1__* tx_skb; } ;
struct TYPE_3__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct IsdnCardState*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_1)
{
 if (!VAR_1->tx_skb)
  return;
 if (VAR_1->tx_skb->len <= 0)
  return;

 if (FUNC_1(VAR_1, VAR_1->tx_skb, VAR_0, 0)) {
   FUNC_0(VAR_1->tx_skb);
   VAR_1->tx_skb = ((void*)0);
 }
 return;
}
