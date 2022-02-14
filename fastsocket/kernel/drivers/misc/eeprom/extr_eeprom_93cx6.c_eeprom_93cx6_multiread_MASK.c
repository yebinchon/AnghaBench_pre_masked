
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned int u16 ;
struct eeprom_93cx6 {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct eeprom_93cx6*,scalar_t__ const,unsigned int*) ;

void FUNC_2(struct eeprom_93cx6 *VAR_0, const u8 VAR_1,
 __le16 *VAR_2, const u16 VAR_3)
{
 unsigned int VAR_4;
 u16 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = 0;
  FUNC_1(VAR_0, VAR_1 + VAR_4, &VAR_5);
  VAR_2[VAR_4] = FUNC_0(VAR_5);
 }
}
