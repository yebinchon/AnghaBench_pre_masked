
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vlan; } ;
struct TYPE_4__ {TYPE_1__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_2__ wb; } ;
typedef int u16 ;
struct sk_buff {int protocol; } ;
struct net_device {int features; } ;
struct ixgbe_ring {int queue_index; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_3 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_4 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_6 (struct ixgbe_ring*,struct sk_buff*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_9(struct ixgbe_ring *VAR_2,
         union ixgbe_adv_rx_desc *VAR_3,
         struct sk_buff *VAR_4)
{
 struct net_device *VAR_5 = VAR_2->netdev;

 FUNC_6(VAR_2, VAR_4);

 FUNC_4(VAR_2, VAR_3, VAR_4);

 FUNC_3(VAR_2, VAR_3, VAR_4);





 if ((VAR_5->features & VAR_1) &&
     FUNC_5(VAR_3, VAR_0)) {
  u16 VAR_6 = FUNC_7(VAR_3->wb.upper.vlan);
  FUNC_0(VAR_4, VAR_6);
 }

 FUNC_8(VAR_4, VAR_2->queue_index);

 VAR_4->protocol = FUNC_1(VAR_4, VAR_5);
}
