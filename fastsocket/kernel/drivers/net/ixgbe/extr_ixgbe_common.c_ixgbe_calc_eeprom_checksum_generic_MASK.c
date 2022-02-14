
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;

u16 FUNC_5(struct ixgbe_hw *VAR_4)
{
 u16 VAR_5;
 u16 VAR_6;
 u16 VAR_7 = 0;
 u16 VAR_8 = 0;
 u16 VAR_9 = 0;
 u16 VAR_10 = 0;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->eeprom.ops.read(VAR_4, VAR_5, &VAR_10) != 0) {
   FUNC_0(VAR_4, "EEPROM read failed\n");
   break;
  }
  VAR_7 += VAR_10;
 }


 for (VAR_5 = VAR_3; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->eeprom.ops.read(VAR_4, VAR_5, &VAR_9);


  if (VAR_9 != 0xFFFF && VAR_9 != 0) {
   VAR_4->eeprom.ops.read(VAR_4, VAR_9, &VAR_8);

   if (VAR_8 != 0xFFFF && VAR_8 != 0) {
    for (VAR_6 = VAR_9+1; VAR_6 <= VAR_9+VAR_8; VAR_6++) {
     VAR_4->eeprom.ops.read(VAR_4, VAR_6, &VAR_10);
     VAR_7 += VAR_10;
    }
   }
  }
 }

 VAR_7 = (u16)VAR_1 - VAR_7;

 return VAR_7;
}
