
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int,int ,int*) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_2__ phy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int,int ,int*) ;
 int FUNC_4 (struct ixgbe_hw*,int,int ,int*) ;
 int FUNC_5 (struct ixgbe_hw*,int,int ,int*) ;
 int FUNC_6 (struct ixgbe_hw*,int,int ,int*) ;
 int FUNC_7 (struct ixgbe_hw*,int,int ,int*) ;

__attribute__((used)) static s32 FUNC_8(struct ixgbe_hw *VAR_9,
                                      ixgbe_link_speed *VAR_10, bool *VAR_11,
                                      bool VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;
 u16 VAR_15, VAR_16;







 if (VAR_9->phy.type == VAR_8) {
  VAR_9->phy.ops.read_reg(VAR_9, 0xC79F, VAR_7, &VAR_15);
  VAR_9->phy.ops.read_reg(VAR_9, 0xC79F, VAR_7, &VAR_15);
  VAR_9->phy.ops.read_reg(VAR_9, 0xC00C, VAR_7,
                       &VAR_16);
  if (VAR_12) {
   for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
    if ((VAR_15 & 1) &&
        ((VAR_16 & 1) == 0)) {
     *VAR_11 = 1;
     break;
    } else {
     *VAR_11 = 0;
    }
    FUNC_2(100);
    VAR_9->phy.ops.read_reg(VAR_9, 0xC79F,
                         VAR_7,
                         &VAR_15);
    VAR_9->phy.ops.read_reg(VAR_9, 0xC00C,
                         VAR_7,
                         &VAR_16);
   }
  } else {
   if ((VAR_15 & 1) && ((VAR_16 & 1) == 0))
    *VAR_11 = 1;
   else
    *VAR_11 = 0;
  }

  if (!*VAR_11)
   goto out;
 }

 VAR_13 = FUNC_0(VAR_9, VAR_1);
 if (VAR_12) {
  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
   if (VAR_13 & VAR_3) {
    *VAR_11 = 1;
    break;
   } else {
    *VAR_11 = 0;
   }
   FUNC_2(100);
   VAR_13 = FUNC_0(VAR_9, VAR_1);
  }
 } else {
  if (VAR_13 & VAR_3)
   *VAR_11 = 1;
  else
   *VAR_11 = 0;
 }

 if (VAR_13 & VAR_2)
  *VAR_10 = VAR_4;
 else
  *VAR_10 = VAR_5;

 if ((VAR_9->device_id == VAR_0) && *VAR_11 &&
     (FUNC_1(VAR_9) != 0))
  *VAR_11 = 0;

out:
 return 0;
}
