
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int real_num_tx_queues; } ;
struct ixgbe_ring_feature {int indices; scalar_t__ offset; } ;
struct ixgbe_adapter {int flags; struct ixgbe_ring_feature* ring_feature; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct net_device*,struct sk_buff*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_8(struct net_device *VAR_5, struct sk_buff *VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_1(VAR_5);
 int VAR_8 = FUNC_3(VAR_6) ? FUNC_2(VAR_6) :
            FUNC_5();
 if (VAR_7->flags & VAR_3) {
  while (FUNC_6(VAR_8 >= VAR_5->real_num_tx_queues))
   VAR_8 -= VAR_5->real_num_tx_queues;
  return VAR_8;
 }

 return FUNC_4(VAR_5, VAR_6);
}
