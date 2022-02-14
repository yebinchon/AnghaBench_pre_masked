
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,int ,scalar_t__*) ;scalar_t__ (* calc_checksum ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,scalar_t__*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_2,
                                           u16 *VAR_3)
{
 s32 VAR_4;
 u16 VAR_5;
 u16 VAR_6 = 0;






 VAR_4 = VAR_2->eeprom.ops.read(VAR_2, 0, &VAR_5);

 if (VAR_4 == 0) {
  VAR_5 = VAR_2->eeprom.ops.calc_checksum(VAR_2);

  VAR_2->eeprom.ops.read(VAR_2, VAR_0, &VAR_6);





  if (VAR_6 != VAR_5)
   VAR_4 = VAR_1;


  if (VAR_3)
   *VAR_3 = VAR_5;
 } else {
  FUNC_0(VAR_2, "EEPROM read failed\n");
 }

 return VAR_4;
}
