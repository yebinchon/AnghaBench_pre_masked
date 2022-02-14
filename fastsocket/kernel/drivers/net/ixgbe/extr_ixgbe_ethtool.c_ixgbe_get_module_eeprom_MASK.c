
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* read_i2c_eeprom ) (struct ixgbe_hw*,int,int*) ;scalar_t__ (* read_i2c_sff8472 ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
struct ixgbe_adapter {int state; struct ixgbe_hw hw; } ;
struct ethtool_eeprom {int len; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6,
      struct ethtool_eeprom *VAR_7,
      u8 *VAR_8)
{
 struct ixgbe_adapter *VAR_9 = FUNC_0(VAR_6);
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 u32 VAR_11 = VAR_4;
 u8 VAR_12 = 0xFF;
 int VAR_13 = 0;
 int VAR_14 = 0;

 if (VAR_7->len == 0)
  return -VAR_1;

 for (VAR_13 = VAR_7->offset; VAR_13 < VAR_7->len; VAR_13++) {

  if (FUNC_3(VAR_5, &VAR_9->state))
   return -VAR_0;

  if (VAR_13 < VAR_3)
   VAR_11 = VAR_10->phy.ops.read_i2c_eeprom(VAR_10, VAR_13, &VAR_12);
  else
   VAR_11 = VAR_10->phy.ops.read_i2c_sff8472(VAR_10, VAR_13, &VAR_12);

  if (VAR_11 != 0)
   VAR_14 = -VAR_2;

  VAR_8[VAR_13 - VAR_7->offset] = VAR_12;
 }

 return VAR_14;
}
