
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; size_t queue_mapping; } ;
struct net_device {int dummy; } ;
struct ixgbe_ring {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_ring** tx_ring; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct ixgbe_adapter*,struct ixgbe_ring*) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_5(struct sk_buff *VAR_1,
        struct net_device *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_1(VAR_2);
 struct ixgbe_ring *VAR_4;





 if (FUNC_4(VAR_1->len < 17)) {
  if (FUNC_2(VAR_1, 17 - VAR_1->len))
   return VAR_0;
  VAR_1->len = 17;
  FUNC_3(VAR_1, 17);
 }

 VAR_4 = VAR_3->tx_ring[VAR_1->queue_mapping];
 return FUNC_0(VAR_1, VAR_3, VAR_4);
}
