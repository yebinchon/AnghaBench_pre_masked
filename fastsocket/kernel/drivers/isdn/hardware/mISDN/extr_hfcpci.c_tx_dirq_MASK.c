
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dchannel {scalar_t__ tx_idx; int hw; TYPE_1__* tx_skb; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct dchannel*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void
FUNC_3(struct dchannel *VAR_0)
{
 if (VAR_0->tx_skb && VAR_0->tx_idx < VAR_0->tx_skb->len)
  FUNC_2(VAR_0->hw);
 else {
  if (VAR_0->tx_skb)
   FUNC_0(VAR_0->tx_skb);
  if (FUNC_1(VAR_0))
   FUNC_2(VAR_0->hw);
 }
}
