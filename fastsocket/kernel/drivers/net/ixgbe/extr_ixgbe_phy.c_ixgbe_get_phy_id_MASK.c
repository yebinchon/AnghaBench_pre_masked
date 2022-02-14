
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {scalar_t__ id; scalar_t__ revision; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_4)
{
 u32 VAR_5;
 u16 VAR_6 = 0;
 u16 VAR_7 = 0;

 VAR_5 = VAR_4->phy.ops.read_reg(VAR_4, VAR_1, VAR_3,
                               &VAR_6);

 if (VAR_5 == 0) {
  VAR_4->phy.id = (u32)(VAR_6 << 16);
  VAR_5 = VAR_4->phy.ops.read_reg(VAR_4, VAR_2, VAR_3,
                                &VAR_7);
  VAR_4->phy.id |= (u32)(VAR_7 & VAR_0);
  VAR_4->phy.revision = (u32)(VAR_7 & ~VAR_0);
 }
 return VAR_5;
}
