
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans {int dev; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct iwl_trans*,char*,...) ;
 int FUNC_2 (struct iwl_trans*,int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_trans *VAR_3, bool VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_3, VAR_0) & VAR_1;

 FUNC_0(VAR_3->dev, "EEPROM signature=0x%08x\n", VAR_5);

 switch (VAR_5) {
 case 130:
  if (!VAR_4) {
   FUNC_1(VAR_3, "EEPROM with bad signature: 0x%08x\n",
    VAR_5);
   return -VAR_2;
  }
  return 0;
 case 129:
 case 128:
  if (VAR_4) {
   FUNC_1(VAR_3, "OTP with bad signature: 0x%08x\n", VAR_5);
   return -VAR_2;
  }
  return 0;
 case 131:
 default:
  FUNC_1(VAR_3,
   "bad EEPROM/OTP signature, type=%s, EEPROM_GP=0x%08x\n",
   VAR_4 ? "OTP" : "EEPROM", VAR_5);
  return -VAR_2;
 }
}
