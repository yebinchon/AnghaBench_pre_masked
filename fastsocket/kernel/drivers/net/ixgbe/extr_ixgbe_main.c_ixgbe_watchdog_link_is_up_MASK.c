
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {scalar_t__ link_speed; int state; int last_rx_ptp_check; int flags2; struct ixgbe_hw hw; struct net_device* netdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;



 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int VAR_14 ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct ixgbe_adapter *VAR_15)
{
 struct net_device *VAR_16 = VAR_15->netdev;
 struct ixgbe_hw *VAR_17 = &VAR_15->hw;
 u32 VAR_18 = VAR_15->link_speed;
 bool VAR_19, VAR_20;


 if (FUNC_6(VAR_16))
  return;

 VAR_15->flags2 &= ~VAR_4;

 switch (VAR_17->mac.type) {
 case 130: {
  u32 VAR_21 = FUNC_0(VAR_17, VAR_2);
  u32 VAR_22 = FUNC_0(VAR_17, VAR_10);
  VAR_19 = !!(VAR_21 & VAR_3);
  VAR_20 = !!(VAR_22 & VAR_11);
 }
  break;
 case 128:
 case 129: {
  u32 VAR_23 = FUNC_0(VAR_17, VAR_8);
  u32 VAR_24 = FUNC_0(VAR_17, VAR_0);
  VAR_19 = !!(VAR_23 & VAR_9);
  VAR_20 = !!(VAR_24 & VAR_1);
 }
  break;
 default:
  VAR_20 = 0;
  VAR_19 = 0;
  break;
 }
 FUNC_1(VAR_13, "NIC Link is Up %s, Flow Control: %s\n",
        (VAR_18 == VAR_6 ?
        "10 Gbps" :
        (VAR_18 == VAR_7 ?
        "1 Gbps" :
        (VAR_18 == VAR_5 ?
        "100 Mbps" :
        "unknown speed"))),
        ((VAR_19 && VAR_20) ? "RX/TX" :
        (VAR_19 ? "RX" :
        (VAR_20 ? "TX" : "None"))));

 FUNC_7(VAR_16);
 FUNC_2(VAR_15);


 FUNC_5(VAR_15);


 FUNC_3(VAR_15);
}
