
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,scalar_t__,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,scalar_t__,int*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,int*) ;

bool FUNC_3(struct ixgbe_hw *VAR_4)
{
 bool VAR_5 = 0;
 u16 VAR_6, VAR_7, VAR_8;
 s32 VAR_9;


 VAR_9 = VAR_4->eeprom.ops.read(VAR_4, VAR_3, &VAR_6);

 if ((VAR_9 != 0) ||
     (VAR_6 == 0) || (VAR_6 == 0xFFFF))
  goto out;


 VAR_9 = VAR_4->eeprom.ops.read(VAR_4, (VAR_6 +
         VAR_0),
         &VAR_7);

 if ((VAR_9 != 0) ||
     (VAR_7 == 0) || (VAR_7 == 0xFFFF))
  goto out;


 VAR_9 = VAR_4->eeprom.ops.read(VAR_4, (VAR_7 +
         VAR_1),
         &VAR_8);

 if ((VAR_9 == 0) &&
     (VAR_8 & VAR_2))
  VAR_5 = 1;

out:
 return VAR_5;
}
