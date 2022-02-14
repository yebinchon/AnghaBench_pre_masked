
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc9420_pdata {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct smsc9420_pdata*,int ) ;
 int FUNC_2 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct smsc9420_pdata *VAR_5)
{
 int VAR_6 = 100000;

 FUNC_0(!VAR_5);

 if (FUNC_1(VAR_5, VAR_1) & VAR_2) {
  FUNC_3(VAR_0, "smsc9420_eeprom_reload: Eeprom busy");
  return -VAR_4;
 }

 FUNC_2(VAR_5, VAR_1,
  (VAR_2 | VAR_3));

 do {
  FUNC_5(10);
  if (!(FUNC_1(VAR_5, VAR_1) & VAR_2))
   return 0;
 } while (VAR_6--);

 FUNC_4(VAR_0, "smsc9420_eeprom_reload: Eeprom timed out");
 return -VAR_4;
}
