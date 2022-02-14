
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int,int*) ;
 int FUNC_1 (struct ixgbe_hw*,int,int*) ;
 int FUNC_2 (struct ixgbe_hw*,int,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int,int*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_5, u16 *VAR_6,
                                        u16 *VAR_7)
{
 u16 VAR_8, VAR_9;
 u16 VAR_10;


 *VAR_6 = 0xFFFF;
 *VAR_7 = 0xFFFF;


 VAR_5->eeprom.ops.read(VAR_5, VAR_0,
                     &VAR_10);

 if ((VAR_10 == 0) ||
     (VAR_10 == 0xFFFF))
  goto wwn_prefix_out;


 VAR_8 = VAR_10 + VAR_2;
 VAR_5->eeprom.ops.read(VAR_5, VAR_8, &VAR_9);
 if (!(VAR_9 & VAR_1))
  goto wwn_prefix_out;


 VAR_8 = VAR_10 + VAR_3;
 VAR_5->eeprom.ops.read(VAR_5, VAR_8, VAR_6);

 VAR_8 = VAR_10 + VAR_4;
 VAR_5->eeprom.ops.read(VAR_5, VAR_8, VAR_7);

wwn_prefix_out:
 return 0;
}
