
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ixgb_hw {scalar_t__ eeprom; } ;
struct ixgb_ee_map_type {int device_id; } ;


 int FUNC_0 (struct ixgb_hw*) ;
 int FUNC_1 (int ) ;

u16
FUNC_2(struct ixgb_hw *VAR_0)
{
 struct ixgb_ee_map_type *VAR_1 = (struct ixgb_ee_map_type *)VAR_0->eeprom;

 if (FUNC_0(VAR_0) == 1)
  return (FUNC_1(VAR_1->device_id));

 return (0);
}
