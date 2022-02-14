
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ,int ,int*) ;

s32 FUNC_1(struct ixgbe_hw *VAR_9,
                                               ixgbe_link_speed *VAR_10,
                                               bool *VAR_11)
{
 s32 VAR_12 = VAR_0;
 u16 VAR_13;

 *VAR_10 = 0;
 *VAR_11 = 1;

 VAR_12 = VAR_9->phy.ops.read_reg(VAR_9, VAR_7, VAR_4,
                               &VAR_13);

 if (VAR_12 == 0) {
  if (VAR_13 & VAR_8)
   *VAR_10 |= VAR_2;
  if (VAR_13 & VAR_6)
   *VAR_10 |= VAR_3;
  if (VAR_13 & VAR_5)
   *VAR_10 |= VAR_1;
 }

 return VAR_12;
}
