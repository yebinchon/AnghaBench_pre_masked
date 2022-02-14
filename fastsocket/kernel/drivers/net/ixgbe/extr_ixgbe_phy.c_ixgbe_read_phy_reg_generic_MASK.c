
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_5, u32 VAR_6,
                               u32 VAR_7, u16 *VAR_8)
{
 s32 VAR_9;
 u16 VAR_10;

 if (FUNC_0(VAR_5, VAR_3) & VAR_4)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_1;

 if (VAR_5->mac.ops.acquire_swfw_sync(VAR_5, VAR_10) == 0) {
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7,
      VAR_8);
  VAR_5->mac.ops.release_swfw_sync(VAR_5, VAR_10);
 } else {
  VAR_9 = VAR_0;
 }

 return VAR_9;
}
