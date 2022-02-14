
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_hw {int subsystem_vendor_id; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 int FUNC_1 (char*) ;

s32 FUNC_2(struct e1000_hw *VAR_4)
{
 u16 VAR_5 = 0;
 u16 VAR_6, VAR_7;

 FUNC_1("e1000_validate_eeprom_checksum");

 for (VAR_6 = 0; VAR_6 < (VAR_2 + 1); VAR_6++) {
  if (FUNC_0(VAR_4, VAR_6, 1, &VAR_7) < 0) {
   FUNC_1("EEPROM Read Error\n");
   return -VAR_0;
  }
  VAR_5 += VAR_7;
 }







 if (VAR_5 == (u16) VAR_3)
  return VAR_1;
 else {
  FUNC_1("EEPROM Checksum Invalid\n");
  return -VAR_0;
 }
}
