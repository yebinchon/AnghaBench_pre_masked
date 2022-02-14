
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct TYPE_7__ {scalar_t__ (* read ) (struct ixgbe_hw*,int ,int *) ;int (* calc_checksum ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; TYPE_4__ eeprom; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int *) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_3)
{
 s32 VAR_4;
 u16 VAR_5;






 VAR_4 = VAR_3->eeprom.ops.read(VAR_3, 0, &VAR_5);

 if (VAR_4 != 0)
  FUNC_0(VAR_3, "EEPROM read failed\n");

 if (VAR_3->mac.ops.acquire_swfw_sync(VAR_3, VAR_2) == 0) {
  VAR_5 = VAR_3->eeprom.ops.calc_checksum(VAR_3);





  VAR_4 = FUNC_2(VAR_3, VAR_0,
        VAR_5);

 if (VAR_4 == 0)
  VAR_4 = FUNC_1(VAR_3);
 else
  VAR_4 = VAR_1;
 }

 VAR_3->mac.ops.release_swfw_sync(VAR_3, VAR_2);

 return VAR_4;
}
