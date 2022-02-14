
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct i2400m {int rx_lock; struct sk_buff* ack_skb; } ;


 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct i2400m *VAR_0, int VAR_1)
{
 struct sk_buff *VAR_2;
 unsigned long VAR_3;

 FUNC_3(&VAR_0->rx_lock, VAR_3);
 VAR_2 = VAR_0->ack_skb;
 if (VAR_2 && !FUNC_1(VAR_2))
  FUNC_2(VAR_2);
 VAR_0->ack_skb = FUNC_0(VAR_1);
 FUNC_4(&VAR_0->rx_lock, VAR_3);
}
