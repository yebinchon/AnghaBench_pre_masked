
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int (* init_params ) (struct ixgbe_hw*) ;} ;
struct TYPE_3__ {scalar_t__ word_size; TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (struct ixgbe_hw*) ;

s32 FUNC_5(struct ixgbe_hw *VAR_7, u16 VAR_8,
       u16 VAR_9, u16 *VAR_10)
{
 u32 VAR_11;
 s32 VAR_12 = 0;
 u32 VAR_13;

 VAR_7->eeprom.ops.init_params(VAR_7);

 if (VAR_9 == 0) {
  VAR_12 = VAR_5;
  goto out;
 }

 if (VAR_8 >= VAR_7->eeprom.word_size) {
  VAR_12 = VAR_4;
  goto out;
 }

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_11 = ((VAR_8 + VAR_13) << VAR_0) |
         VAR_2;

  FUNC_1(VAR_7, VAR_3, VAR_11);
  VAR_12 = FUNC_3(VAR_7, VAR_6);

  if (VAR_12 == 0) {
   VAR_10[VAR_13] = (FUNC_0(VAR_7, VAR_3) >>
       VAR_1);
  } else {
   FUNC_2(VAR_7, "Eeprom read timed out\n");
   goto out;
  }
 }
out:
 return VAR_12;
}
