
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nic {int eeprom_wc; int netdev; int * eeprom; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nic*,int*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nic*,int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct nic *VAR_3)
{
 u16 VAR_4, VAR_5 = 8, VAR_6 = 0;


 FUNC_1(VAR_3, &VAR_5, 0);
 VAR_3->eeprom_wc = 1 << VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->eeprom_wc; VAR_4++) {
  VAR_3->eeprom[VAR_4] = FUNC_1(VAR_3, &VAR_5, VAR_4);
  if (VAR_4 < VAR_3->eeprom_wc - 1)
   VAR_6 += FUNC_2(VAR_3->eeprom[VAR_4]);
 }



 if (FUNC_0(0xBABA - VAR_6) != VAR_3->eeprom[VAR_3->eeprom_wc - 1]) {
  FUNC_3(VAR_3, VAR_2, VAR_3->netdev, "EEPROM corrupted\n");
  if (!VAR_1)
   return -VAR_0;
 }

 return 0;
}
