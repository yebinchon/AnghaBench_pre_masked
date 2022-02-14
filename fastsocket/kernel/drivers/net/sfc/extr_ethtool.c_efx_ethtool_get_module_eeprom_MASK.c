
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int dummy; } ;
struct efx_nic {int mac_lock; TYPE_1__* phy_op; } ;
struct TYPE_2__ {int (* get_module_eeprom ) (struct efx_nic*,struct ethtool_eeprom*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct efx_nic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct efx_nic*,struct ethtool_eeprom*,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
      struct ethtool_eeprom *VAR_2,
      u8 *VAR_3)
{
 struct efx_nic *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 if (!VAR_4->phy_op || !VAR_4->phy_op->get_module_eeprom)
  return -VAR_0;

 FUNC_0(&VAR_4->mac_lock);
 VAR_5 = VAR_4->phy_op->get_module_eeprom(VAR_4, VAR_2, VAR_3);
 FUNC_1(&VAR_4->mac_lock);

 return VAR_5;
}
