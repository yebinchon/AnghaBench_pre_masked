
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int autoneg_advertised; int smart_speed_active; } ;
struct TYPE_4__ {scalar_t__ (* check_link ) (struct ixgbe_hw*,int*,int*,int) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int*,int*,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int*,int*,int) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_8,
         ixgbe_link_speed VAR_9,
         bool VAR_10)
{
 s32 VAR_11 = 0;
 ixgbe_link_speed VAR_12 = VAR_6;
 s32 VAR_13, VAR_14;
 bool VAR_15 = 0;
 u32 VAR_16 = FUNC_0(VAR_8, VAR_0);


 VAR_8->phy.autoneg_advertised = 0;

 if (VAR_9 & VAR_4)
  VAR_8->phy.autoneg_advertised |= VAR_4;

 if (VAR_9 & VAR_5)
  VAR_8->phy.autoneg_advertised |= VAR_5;

 if (VAR_9 & VAR_3)
  VAR_8->phy.autoneg_advertised |= VAR_3;
 VAR_8->phy.smart_speed_active = 0;
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  VAR_11 = FUNC_2(VAR_8, VAR_9,
          VAR_10);
  if (VAR_11 != 0)
   goto out;







  for (VAR_13 = 0; VAR_13 < 5; VAR_13++) {
   FUNC_3(100);


   VAR_11 = VAR_8->mac.ops.check_link(VAR_8, &VAR_12,
       &VAR_15, 0);
   if (VAR_11 != 0)
    goto out;

   if (VAR_15)
    goto out;
  }
 }





 if (((VAR_16 & VAR_1) == 0) ||
     ((VAR_16 & VAR_2) == 0))
  goto out;


 VAR_8->phy.smart_speed_active = 1;
 VAR_11 = FUNC_2(VAR_8, VAR_9,
         VAR_10);
 if (VAR_11 != 0)
  goto out;







 for (VAR_13 = 0; VAR_13 < 6; VAR_13++) {
  FUNC_3(100);


  VAR_11 = VAR_8->mac.ops.check_link(VAR_8, &VAR_12,
      &VAR_15, 0);
  if (VAR_11 != 0)
   goto out;

  if (VAR_15)
   goto out;
 }


 VAR_8->phy.smart_speed_active = 0;
 VAR_11 = FUNC_2(VAR_8, VAR_9,
         VAR_10);

out:
 if (VAR_15 && (VAR_12 == VAR_5))
  FUNC_1(VAR_8, "Smartspeed has downgraded the link speed from "
         "the maximum advertised\n");
 return VAR_11;
}
