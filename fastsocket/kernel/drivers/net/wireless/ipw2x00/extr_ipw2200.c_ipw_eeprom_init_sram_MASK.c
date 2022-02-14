
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw_priv {int * eeprom; } ;
typedef int __le16 ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipw_priv*,int ) ;
 int FUNC_4 (struct ipw_priv*,int ,int) ;
 int FUNC_5 (struct ipw_priv*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct ipw_priv *VAR_4)
{
 int VAR_5;
 __le16 *VAR_6 = (__le16 *) VAR_4->eeprom;

 FUNC_1(">>\n");


 for (VAR_5 = 0; VAR_5 < 128; VAR_5++)
  VAR_6[VAR_5] = FUNC_2(FUNC_3(VAR_4, (u8) VAR_5));






 if (VAR_4->eeprom[VAR_0] != 0) {
  FUNC_0("Writing EEPROM data into SRAM\n");


  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   FUNC_5(VAR_4, VAR_1 + VAR_5, VAR_4->eeprom[VAR_5]);


  FUNC_4(VAR_4, VAR_3, 0);
 } else {
  FUNC_0("Enabling FW initializationg of SRAM\n");


  FUNC_4(VAR_4, VAR_3, 1);
 }

 FUNC_1("<<\n");
}
