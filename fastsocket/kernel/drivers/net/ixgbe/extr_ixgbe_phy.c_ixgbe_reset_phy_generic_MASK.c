
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* check_overtemp ) (struct ixgbe_hw*) ;int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* write_reg ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; int reset_if_overtemp; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct ixgbe_hw *VAR_7)
{
 u32 VAR_8;
 u16 VAR_9 = 0;
 s32 VAR_10 = 0;

 if (VAR_7->phy.type == VAR_6)
  VAR_10 = FUNC_1(VAR_7);

 if (VAR_10 != 0 || VAR_7->phy.type == VAR_5)
  goto out;


 if (!VAR_7->phy.reset_if_overtemp &&
     (VAR_0 == VAR_7->phy.ops.check_overtemp(VAR_7)))
  goto out;





 VAR_7->phy.ops.write_reg(VAR_7, VAR_2,
         VAR_4,
         VAR_3);






 for (VAR_8 = 0; VAR_8 < 30; VAR_8++) {
  FUNC_2(100);
  VAR_7->phy.ops.read_reg(VAR_7, VAR_2,
         VAR_4, &VAR_9);
  if (!(VAR_9 & VAR_3)) {
   FUNC_6(2);
   break;
  }
 }

 if (VAR_9 & VAR_3) {
  VAR_10 = VAR_1;
  FUNC_0(VAR_7, "PHY reset polling failed to complete.\n");
 }

out:
 return VAR_10;
}
