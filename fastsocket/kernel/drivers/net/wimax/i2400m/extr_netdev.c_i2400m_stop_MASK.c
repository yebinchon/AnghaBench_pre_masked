
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct i2400m {int tx_lock; struct sk_buff* wake_tx_skb; int wake_tx_ws; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,struct device*,char*,struct net_device*,struct i2400m*) ;
 int FUNC_2 (int,struct device*,char*,struct net_device*,struct i2400m*) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct i2400m* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static
int FUNC_9(struct net_device *VAR_0)
{
 struct i2400m *VAR_1 = FUNC_6(VAR_0);
 struct device *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(3, VAR_2, "(net_dev %p [i2400m %p])\n", VAR_0, VAR_1);




 if (FUNC_0(&VAR_1->wake_tx_ws) == 0
     && VAR_1->wake_tx_skb != ((void*)0)) {
  unsigned long VAR_3;
  struct sk_buff *VAR_4;
  FUNC_7(&VAR_1->tx_lock, VAR_3);
  VAR_4 = VAR_1->wake_tx_skb;
  VAR_1->wake_tx_skb = ((void*)0);
  FUNC_8(&VAR_1->tx_lock, VAR_3);
  FUNC_4(VAR_1);
  FUNC_5(VAR_4);
 }
 FUNC_1(3, VAR_2, "(net_dev %p [i2400m %p]) = 0\n", VAR_0, VAR_1);
 return 0;
}
