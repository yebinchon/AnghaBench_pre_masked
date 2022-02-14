
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int func; } ;
struct ixgbe_hw {TYPE_1__ bus; } ;
struct ixgbe_adapter {int eeprom_cap; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





int FUNC_0(struct ixgbe_adapter *VAR_4, u16 VAR_5,
   u16 VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_4->hw;
 u16 VAR_8 = VAR_4->eeprom_cap & VAR_0;
 int VAR_9 = 0;

 switch (VAR_5) {
 case 137:

  switch (VAR_6) {
  case 133:

   if (VAR_7->bus.func != 0)
    break;
  case 128:
  case 129:
  case 130:
  case 132:
  case 131:
   VAR_9 = 1;
   break;
  }
  break;
 case 140:

  switch (VAR_6) {
  case 134:
   VAR_9 = 1;
   break;
  }
  break;
 case 139:

  if (VAR_6 != VAR_3)
   VAR_9 = 1;
  break;
 case 138:
  VAR_9 = 1;
  break;
 case 136:
 case 135:

  if ((VAR_8 == VAR_2) ||
      ((VAR_8 == VAR_1) &&
       (VAR_7->bus.func == 0))) {
   VAR_9 = 1;
  }
  break;
 }

 return VAR_9;
}
