
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* read ) (struct ixgbe_hw*,scalar_t__,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct ixgbe_hw {TYPE_3__ eeprom; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,scalar_t__,int*) ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__,int*) ;
 int FUNC_2 (struct ixgbe_hw*,scalar_t__,int*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_5)
{
 s32 VAR_6 = VAR_0;
 u16 VAR_7, VAR_8;
 u16 VAR_9 = 0;


 if (VAR_5->phy.media_type != VAR_4) {
  VAR_6 = 0;
  goto fw_version_out;
 }


 VAR_5->eeprom.ops.read(VAR_5, VAR_3, &VAR_7);

 if ((VAR_7 == 0) || (VAR_7 == 0xFFFF))
  goto fw_version_out;


 VAR_5->eeprom.ops.read(VAR_5, (VAR_7 +
                          VAR_1),
                          &VAR_8);

 if ((VAR_8 == 0) || (VAR_8 == 0xFFFF))
  goto fw_version_out;


 VAR_5->eeprom.ops.read(VAR_5, (VAR_8 +
                          VAR_2),
                          &VAR_9);

 if (VAR_9 > 0x5)
  VAR_6 = 0;

fw_version_out:
 return VAR_6;
}
