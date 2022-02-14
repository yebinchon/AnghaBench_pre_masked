
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dev; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; } ;
typedef int __u32 ;
struct TYPE_2__ {int physical_port; scalar_t__ port_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 struct qlcnic_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct ethtool_pauseparam*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct net_device *VAR_6,
     struct ethtool_pauseparam *VAR_7)
{
 struct qlcnic_adapter *VAR_8 = FUNC_3(VAR_6);
 int VAR_9 = VAR_8->ahw->physical_port;
 __u32 VAR_10;

 if (FUNC_4(VAR_8)) {
  FUNC_5(VAR_8, VAR_7);
  return;
 }
 if (VAR_8->ahw->port_type == VAR_0) {
  if ((VAR_9 < 0) || (VAR_9 > VAR_2))
   return;

  VAR_10 = FUNC_1(VAR_8, FUNC_0(VAR_9));
  VAR_7->rx_pause = FUNC_10(VAR_10);
  VAR_10 = FUNC_1(VAR_8, VAR_1);
  switch (VAR_9) {
  case 0:
   VAR_7->tx_pause = !(FUNC_6(VAR_10));
   break;
  case 1:
   VAR_7->tx_pause = !(FUNC_7(VAR_10));
   break;
  case 2:
   VAR_7->tx_pause = !(FUNC_8(VAR_10));
   break;
  case 3:
  default:
   VAR_7->tx_pause = !(FUNC_9(VAR_10));
   break;
  }
 } else if (VAR_8->ahw->port_type == VAR_5) {
  if ((VAR_9 < 0) || (VAR_9 > VAR_3))
   return;
  VAR_7->rx_pause = 1;
  VAR_10 = FUNC_1(VAR_8, VAR_4);
  if (VAR_9 == 0)
   VAR_7->tx_pause = !(FUNC_11(VAR_10));
  else
   VAR_7->tx_pause = !(FUNC_12(VAR_10));
 } else {
  FUNC_2(&VAR_6->dev, "Unknown board type: %x\n",
     VAR_8->ahw->port_type);
 }
}
