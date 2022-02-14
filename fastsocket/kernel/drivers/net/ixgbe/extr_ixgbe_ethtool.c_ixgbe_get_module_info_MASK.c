
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* read_i2c_eeprom ) (struct ixgbe_hw*,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
struct ethtool_modinfo {int eeprom_len; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_10,
           struct ethtool_modinfo *VAR_11)
{
 struct ixgbe_adapter *VAR_12 = FUNC_1(VAR_10);
 struct ixgbe_hw *VAR_13 = &VAR_12->hw;
 u32 VAR_14;
 u8 VAR_15, VAR_16;
 bool VAR_17 = 0;


 VAR_14 = VAR_13->phy.ops.read_i2c_eeprom(VAR_13,
          VAR_6,
          &VAR_15);
 if (VAR_14 != 0)
  return -VAR_0;


 VAR_14 = VAR_13->phy.ops.read_i2c_eeprom(VAR_13,
          VAR_7,
          &VAR_16);
 if (VAR_14 != 0)
  return -VAR_0;

 if (VAR_16 & VAR_5) {
  FUNC_0(VAR_9, "Address change required to access page 0xA2, but not supported. Please report the module type to the driver maintainers.\n");
  VAR_17 = 1;
 }

 if (VAR_15 == VAR_8 || VAR_17) {

  VAR_11->type = VAR_1;
  VAR_11->eeprom_len = VAR_2;
 } else {

  VAR_11->type = VAR_3;
  VAR_11->eeprom_len = VAR_4;
 }

 return 0;
}
