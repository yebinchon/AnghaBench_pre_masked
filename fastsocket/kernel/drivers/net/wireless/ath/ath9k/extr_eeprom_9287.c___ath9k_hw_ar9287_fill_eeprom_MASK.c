
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ar9287_eeprom {int dummy; } ;
struct TYPE_2__ {struct ar9287_eeprom map9287; } ;
struct ath_hw {TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int,int *) ;

__attribute__((used)) static bool FUNC_1(struct ath_hw *VAR_2)
{
 struct ar9287_eeprom *VAR_3 = &VAR_2->eeprom.map9287;
 u16 *VAR_4;
 int VAR_5, VAR_6 = VAR_0;
 VAR_4 = (u16 *)VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (!FUNC_0(VAR_2, VAR_5 + VAR_6, VAR_4))
   return 0;
  VAR_4++;
 }

 return 1;
}
