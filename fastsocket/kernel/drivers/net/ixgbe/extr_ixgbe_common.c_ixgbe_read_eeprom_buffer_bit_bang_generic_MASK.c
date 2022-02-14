
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* init_params ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {scalar_t__ word_size; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct ixgbe_hw*) ;

s32 FUNC_2(struct ixgbe_hw *VAR_3, u16 VAR_4,
           u16 VAR_5, u16 *VAR_6)
{
 s32 VAR_7 = 0;
 u16 VAR_8, VAR_9;

 VAR_3->eeprom.ops.init_params(VAR_3);

 if (VAR_5 == 0) {
  VAR_7 = VAR_2;
  goto out;
 }

 if (VAR_4 + VAR_5 > VAR_3->eeprom.word_size) {
  VAR_7 = VAR_1;
  goto out;
 }






 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += VAR_0) {
  VAR_9 = (VAR_5 - VAR_8) / VAR_0 > 0 ?
    VAR_0 : (VAR_5 - VAR_8);

  VAR_7 = FUNC_0(VAR_3, VAR_4 + VAR_8,
          VAR_9, &VAR_6[VAR_8]);

  if (VAR_7 != 0)
   break;
 }

out:
 return VAR_7;
}
