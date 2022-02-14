
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct p54_common {int hw; int (* tx ) (int ,struct sk_buff*) ;int tx_pending; } ;


 int FUNC_0 (struct p54_common*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct p54_common *VAR_0)
{
 struct sk_buff *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(&VAR_0->tx_pending);
 if (FUNC_4(!VAR_1))
  return ;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (FUNC_4(VAR_2))
  FUNC_2(&VAR_0->tx_pending, VAR_1);
 else
  VAR_0->tx(VAR_0->hw, VAR_1);
}
