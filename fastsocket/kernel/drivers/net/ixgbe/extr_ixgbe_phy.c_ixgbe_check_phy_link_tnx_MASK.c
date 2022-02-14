
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
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_1 (int) ;

s32 FUNC_2(struct ixgbe_hw *VAR_6, ixgbe_link_speed *VAR_7,
        bool *VAR_8)
{
 s32 VAR_9 = 0;
 u32 VAR_10;
 u32 VAR_11 = 10;
 u16 VAR_12 = 0;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;


 *VAR_8 = 0;
 *VAR_7 = VAR_0;






 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  FUNC_1(10);
  VAR_9 = VAR_6->phy.ops.read_reg(VAR_6,
           VAR_5,
           VAR_4,
           &VAR_14);
  VAR_12 = VAR_14 &
       VAR_2;
  VAR_13 = VAR_14 &
       VAR_3;
  if (VAR_12 == VAR_2) {
   *VAR_8 = 1;
   if (VAR_13 ==
       VAR_3)
    *VAR_7 = VAR_1;
   break;
  }
 }

 return VAR_9;
}
