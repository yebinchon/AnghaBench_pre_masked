
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
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,scalar_t__,int,scalar_t__*) ;
 int FUNC_1 (struct ixgbe_hw*) ;

s32 FUNC_2(struct ixgbe_hw *VAR_1, u16 VAR_2, u16 VAR_3)
{
 s32 VAR_4;

 VAR_1->eeprom.ops.init_params(VAR_1);

 if (VAR_2 >= VAR_1->eeprom.word_size) {
  VAR_4 = VAR_0;
  goto out;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2, 1, &VAR_3);

out:
 return VAR_4;
}
