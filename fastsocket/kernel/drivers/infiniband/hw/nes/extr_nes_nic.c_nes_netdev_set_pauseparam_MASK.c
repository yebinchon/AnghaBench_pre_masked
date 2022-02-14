
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_device {int disable_tx_flow_control; int mac_index; int disable_rx_flow_control; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nes_device*,scalar_t__) ;
 int FUNC_1 (struct nes_device*,scalar_t__,int ) ;
 struct nes_vnic* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
  struct ethtool_pauseparam *VAR_5)
{
 struct nes_vnic *VAR_6 = FUNC_2(VAR_4);
 struct nes_device *VAR_7 = VAR_6->nesdev;
 u32 VAR_8;

 if (VAR_5->autoneg) {

  return 0;
 }
 if ((VAR_5->tx_pause == 1) && (VAR_7->disable_tx_flow_control == 1)) {
  VAR_8 = FUNC_0(VAR_7,
    VAR_0 + (VAR_7->mac_index*0x200));
  VAR_8 |= VAR_1;
  FUNC_1(VAR_7,
    VAR_0 + (VAR_7->mac_index*0x200), VAR_8);
  VAR_7->disable_tx_flow_control = 0;
 } else if ((VAR_5->tx_pause == 0) && (VAR_7->disable_tx_flow_control == 0)) {
  VAR_8 = FUNC_0(VAR_7,
    VAR_0 + (VAR_7->mac_index*0x200));
  VAR_8 &= ~VAR_1;
  FUNC_1(VAR_7,
    VAR_0 + (VAR_7->mac_index*0x200), VAR_8);
  VAR_7->disable_tx_flow_control = 1;
 }
 if ((VAR_5->rx_pause == 1) && (VAR_7->disable_rx_flow_control == 1)) {
  VAR_8 = FUNC_0(VAR_7,
    VAR_2 + (VAR_7->mac_index*0x40));
  VAR_8 &= ~VAR_3;
  FUNC_1(VAR_7,
    VAR_2 + (VAR_7->mac_index*0x40), VAR_8);
  VAR_7->disable_rx_flow_control = 0;
 } else if ((VAR_5->rx_pause == 0) && (VAR_7->disable_rx_flow_control == 0)) {
  VAR_8 = FUNC_0(VAR_7,
    VAR_2 + (VAR_7->mac_index*0x40));
  VAR_8 |= VAR_3;
  FUNC_1(VAR_7,
    VAR_2 + (VAR_7->mac_index*0x40), VAR_8);
  VAR_7->disable_rx_flow_control = 1;
 }

 return 0;
}
