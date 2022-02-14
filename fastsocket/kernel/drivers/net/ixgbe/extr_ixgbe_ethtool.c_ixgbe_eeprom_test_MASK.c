
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {scalar_t__ (* validate_checksum ) (struct ixgbe_hw*,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 scalar_t__ FUNC_0 (struct ixgbe_hw*,int *) ;

__attribute__((used)) static int FUNC_1(struct ixgbe_adapter *VAR_0, u64 *VAR_1)
{
 struct ixgbe_hw *VAR_2 = &VAR_0->hw;
 if (VAR_2->eeprom.ops.validate_checksum(VAR_2, ((void*)0)))
  *VAR_1 = 1;
 else
  *VAR_1 = 0;
 return *VAR_1;
}
