
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* read ) (struct ixgbe_hw*,int ,int *) ;scalar_t__ (* write ) (struct ixgbe_hw*,int ,int ) ;int (* calc_checksum ) (struct ixgbe_hw*) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int *) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_1)
{
 s32 VAR_2;
 u16 VAR_3;






 VAR_2 = VAR_1->eeprom.ops.read(VAR_1, 0, &VAR_3);

 if (VAR_2 == 0) {
  VAR_3 = VAR_1->eeprom.ops.calc_checksum(VAR_1);
  VAR_2 = VAR_1->eeprom.ops.write(VAR_1, VAR_0,
           VAR_3);
 } else {
  FUNC_0(VAR_1, "EEPROM read failed\n");
 }

 return VAR_2;
}
