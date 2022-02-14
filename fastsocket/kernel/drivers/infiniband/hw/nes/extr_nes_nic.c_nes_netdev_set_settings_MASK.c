
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_device {size_t mac_index; struct nes_adapter* nesadapter; } ;
struct nes_adapter {scalar_t__* phy_type; int phy_lock; int * phy_index; scalar_t__ OneG_Mode; } ;
struct ethtool_cmd {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nes_device*,int ,int ,int*) ;
 int FUNC_1 (struct nes_device*,int ,int ,int) ;
 struct nes_vnic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ethtool_cmd *VAR_2)
{
 struct nes_vnic *VAR_3 = FUNC_2(VAR_1);
 struct nes_device *VAR_4 = VAR_3->nesdev;
 struct nes_adapter *VAR_5 = VAR_4->nesadapter;

 if ((VAR_5->OneG_Mode) &&
     (VAR_5->phy_type[VAR_4->mac_index] != VAR_0)) {
  unsigned long VAR_6;
  u16 VAR_7;
  u8 VAR_8 = VAR_5->phy_index[VAR_4->mac_index];

  FUNC_3(&VAR_5->phy_lock, VAR_6);
  FUNC_0(VAR_4, 0, VAR_8, &VAR_7);
  if (VAR_2->autoneg) {

   VAR_7 |= 0x1300;
  } else {

   VAR_7 &= ~0x1000;
  }
  FUNC_1(VAR_4, 0, VAR_8, VAR_7);
  FUNC_4(&VAR_5->phy_lock, VAR_6);
 }

 return 0;
}
