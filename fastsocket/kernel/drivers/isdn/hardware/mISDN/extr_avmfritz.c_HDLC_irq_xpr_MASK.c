
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bchannel {scalar_t__ tx_idx; TYPE_1__* tx_skb; int Flags; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (struct bchannel*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct bchannel*) ;
 int FUNC_3 (struct bchannel*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct bchannel *VAR_1)
{
 if (VAR_1->tx_skb && VAR_1->tx_idx < VAR_1->tx_skb->len)
  FUNC_3(VAR_1);
 else {
  if (VAR_1->tx_skb) {

   if (FUNC_4(VAR_0, &VAR_1->Flags))
    FUNC_0(VAR_1);
   FUNC_1(VAR_1->tx_skb);
  }
  if (FUNC_2(VAR_1))
   FUNC_3(VAR_1);
 }
}
