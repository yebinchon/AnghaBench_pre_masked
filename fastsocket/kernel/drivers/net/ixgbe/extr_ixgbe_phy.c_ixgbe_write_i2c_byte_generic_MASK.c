
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ) ;
 int FUNC_8 (struct ixgbe_hw*,int ) ;

s32 FUNC_9(struct ixgbe_hw *VAR_5, u8 VAR_6,
                                 u8 VAR_7, u8 VAR_8)
{
 s32 VAR_9 = 0;
 u32 VAR_10 = 1;
 u32 VAR_11 = 0;
 u16 VAR_12 = 0;

 if (FUNC_0(VAR_5, VAR_3) & VAR_4)
  VAR_12 = VAR_2;
 else
  VAR_12 = VAR_1;

 if (VAR_5->mac.ops.acquire_swfw_sync(VAR_5, VAR_12) != 0) {
  VAR_9 = VAR_0;
  goto write_byte_out;
 }

 do {
  FUNC_5(VAR_5);

  VAR_9 = FUNC_2(VAR_5, VAR_7);
  if (VAR_9 != 0)
   goto fail;

  VAR_9 = FUNC_3(VAR_5);
  if (VAR_9 != 0)
   goto fail;

  VAR_9 = FUNC_2(VAR_5, VAR_6);
  if (VAR_9 != 0)
   goto fail;

  VAR_9 = FUNC_3(VAR_5);
  if (VAR_9 != 0)
   goto fail;

  VAR_9 = FUNC_2(VAR_5, VAR_8);
  if (VAR_9 != 0)
   goto fail;

  VAR_9 = FUNC_3(VAR_5);
  if (VAR_9 != 0)
   goto fail;

  FUNC_6(VAR_5);
  break;

fail:
  FUNC_4(VAR_5);
  VAR_11++;
  if (VAR_11 < VAR_10)
   FUNC_1(VAR_5, "I2C byte write error - Retrying.\n");
  else
   FUNC_1(VAR_5, "I2C byte write error.\n");
 } while (VAR_11 < VAR_10);

 VAR_5->mac.ops.release_swfw_sync(VAR_5, VAR_12);

write_byte_out:
 return VAR_9;
}
