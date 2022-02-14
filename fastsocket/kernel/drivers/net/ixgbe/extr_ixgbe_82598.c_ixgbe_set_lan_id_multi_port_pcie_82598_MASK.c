
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,scalar_t__,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_bus_info {scalar_t__ func; } ;
struct ixgbe_hw {TYPE_2__ eeprom; struct ixgbe_bus_info bus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__,int*) ;
 int FUNC_2 (struct ixgbe_hw*,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_hw *VAR_5)
{
 struct ixgbe_bus_info *VAR_6 = &VAR_5->bus;
 u16 VAR_7 = 0;
 u16 VAR_8 = 0;

 FUNC_0(VAR_5);


 VAR_5->eeprom.ops.read(VAR_5, VAR_4, &VAR_7);
 if ((VAR_7 != 0) && (VAR_7 != 0xFFFF)) {

  VAR_5->eeprom.ops.read(VAR_5, VAR_7 + VAR_0, &VAR_8);


  if ((VAR_8 & VAR_3) &&
      !(VAR_8 & VAR_1) &&
      !(VAR_8 & VAR_2)) {

   VAR_6->func = 0;
  }
 }
}
