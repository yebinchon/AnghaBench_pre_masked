
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgb_hw {scalar_t__ eeprom; } ;
struct ixgb_ee_map_type {int init_ctrl_reg_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ixgb_hw*) ;

__attribute__((used)) static bool
FUNC_2 (struct ixgb_hw* VAR_2)
{
 struct ixgb_ee_map_type *VAR_3 = (struct ixgb_ee_map_type *)VAR_2->eeprom;

 if ((VAR_3->init_ctrl_reg_1 & FUNC_0(VAR_0))
     == FUNC_0(VAR_1)) {
  return (1);
 } else {
  return FUNC_1(VAR_2);
 }
}
