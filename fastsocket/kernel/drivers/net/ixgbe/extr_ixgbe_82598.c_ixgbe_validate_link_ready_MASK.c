
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_2__ phy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_7)
{
 u32 VAR_8;
 u16 VAR_9;

 if (VAR_7->device_id != VAR_0)
  return 0;

 for (VAR_8 = 0;
      VAR_8 < VAR_2; VAR_8++) {
  VAR_7->phy.ops.read_reg(VAR_7, VAR_5, VAR_4, &VAR_9);

  if ((VAR_9 & VAR_3) &&
      (VAR_9 & VAR_6))
   break;

  FUNC_1(100);
 }

 if (VAR_8 == VAR_2) {
  FUNC_0(VAR_7, "Link was indicated but link is down\n");
  return VAR_1;
 }

 return 0;
}
