
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ixgb_hw {scalar_t__ eeprom; } ;
struct ixgb_ee_map_type {int * mac_addr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ixgb_hw*) ;

void
FUNC_3(struct ixgb_hw *VAR_1,
   u8 *VAR_2)
{
 int VAR_3;
 struct ixgb_ee_map_type *VAR_4 = (struct ixgb_ee_map_type *)VAR_1->eeprom;

 FUNC_0("ixgb_get_ee_mac_addr");

 if (FUNC_2(VAR_1) == 1) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   VAR_2[VAR_3] = VAR_4->mac_addr[VAR_3];
   FUNC_1("mac(%d) = %.2X\n", VAR_3, VAR_2[VAR_3]);
  }
 }
}
