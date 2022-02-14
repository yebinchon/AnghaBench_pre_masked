
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_7__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {scalar_t__ (* read ) (struct ixgbe_hw*,int ,scalar_t__*) ;scalar_t__ (* calc_checksum ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_4,
            u16 *VAR_5)
{
 s32 VAR_6;
 u16 VAR_7;
 u16 VAR_8 = 0;






 VAR_6 = VAR_4->eeprom.ops.read(VAR_4, 0, &VAR_7);

 if (VAR_6 != 0) {
  FUNC_0(VAR_4, "EEPROM read failed\n");
  goto out;
 }

 if (VAR_4->mac.ops.acquire_swfw_sync(VAR_4, VAR_3) == 0) {
  VAR_7 = VAR_4->eeprom.ops.calc_checksum(VAR_4);





  FUNC_1(VAR_4, VAR_0,
     &VAR_8);





  if (VAR_8 != VAR_7)
   VAR_6 = VAR_1;


  if (VAR_5)
   *VAR_5 = VAR_7;
 } else {
  VAR_6 = VAR_2;
 }

 VAR_4->mac.ops.release_swfw_sync(VAR_4, VAR_3);
out:
 return VAR_6;
}
