
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct net_device {int dummy; } ;
struct channel_data {struct sk_buff* tx_skb; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct channel_data*,int ,int ) ;
 struct channel_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_3(struct sk_buff *VAR_1,
         struct net_device *VAR_2)
{
 struct channel_data *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2);

 VAR_3->tx_skb = VAR_1;
 FUNC_0(VAR_3, VAR_1->data, VAR_1->len);
 return VAR_0;
}
