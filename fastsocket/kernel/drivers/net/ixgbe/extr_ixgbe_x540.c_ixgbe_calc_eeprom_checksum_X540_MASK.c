
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ word_size; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static u16 FUNC_2(struct ixgbe_hw *VAR_6)
{
 u16 VAR_7;
 u16 VAR_8;
 u16 VAR_9 = 0;
 u16 VAR_10 = 0;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (FUNC_1(VAR_6, VAR_7, &VAR_12) != 0) {
   FUNC_0(VAR_6, "EEPROM read failed\n");
   break;
  }
  VAR_9 += VAR_12;
 }





 for (VAR_7 = VAR_4; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_7 == VAR_5 || VAR_7 == VAR_3)
   continue;

  if (FUNC_1(VAR_6, VAR_7, &VAR_11) != 0) {
   FUNC_0(VAR_6, "EEPROM read failed\n");
   break;
  }


  if (VAR_11 == 0xFFFF || VAR_11 == 0 ||
      VAR_11 >= VAR_6->eeprom.word_size)
   continue;

  if (FUNC_1(VAR_6, VAR_11, &VAR_10) != 0) {
   FUNC_0(VAR_6, "EEPROM read failed\n");
   break;
  }


  if (VAR_10 == 0xFFFF || VAR_10 == 0 ||
      (VAR_11 + VAR_10) >= VAR_6->eeprom.word_size)
   continue;

  for (VAR_8 = VAR_11+1; VAR_8 <= VAR_11+VAR_10; VAR_8++) {
   if (FUNC_1(VAR_6, VAR_8, &VAR_12) != 0) {
    FUNC_0(VAR_6, "EEPROM read failed\n");
    break;
   }
   VAR_9 += VAR_12;
  }
 }

 VAR_9 = (u16)VAR_1 - VAR_9;

 return VAR_9;
}
