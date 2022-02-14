
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ath_hw {TYPE_1__* eeprom_blob; } ;
struct TYPE_2__ {int size; scalar_t__ data; } ;



__attribute__((used)) static bool FUNC_0(struct ath_hw *VAR_0, u32 VAR_1,
         u16 *VAR_2)
{
 u16 *VAR_3;

 if (VAR_1 * sizeof(u16) > VAR_0->eeprom_blob->size)
  return 0;

 VAR_3 = (u16 *)VAR_0->eeprom_blob->data;
 *VAR_2 = VAR_3[VAR_1];
 return 1;
}
