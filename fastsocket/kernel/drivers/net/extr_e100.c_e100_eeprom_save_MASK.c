
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nic {int eeprom_wc; int * eeprom; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nic*,int*,int ) ;
 int FUNC_2 (struct nic*,int,int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nic *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4, VAR_5 = 8, VAR_6 = 0;


 FUNC_1(VAR_1, &VAR_5, 0);
 VAR_1->eeprom_wc = 1 << VAR_5;

 if (VAR_2 + VAR_3 >= VAR_1->eeprom_wc)
  return -VAR_0;

 for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_3; VAR_4++)
  FUNC_2(VAR_1, VAR_5, VAR_4, VAR_1->eeprom[VAR_4]);



 for (VAR_4 = 0; VAR_4 < VAR_1->eeprom_wc - 1; VAR_4++)
  VAR_6 += FUNC_3(VAR_1->eeprom[VAR_4]);
 VAR_1->eeprom[VAR_1->eeprom_wc - 1] = FUNC_0(0xBABA - VAR_6);
 FUNC_2(VAR_1, VAR_5, VAR_1->eeprom_wc - 1,
  VAR_1->eeprom[VAR_1->eeprom_wc - 1]);

 return 0;
}
