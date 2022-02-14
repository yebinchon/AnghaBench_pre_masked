
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* setup_link ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int autoneg_advertised; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*) ;

s32 FUNC_1(struct ixgbe_hw *VAR_3,
                                       ixgbe_link_speed VAR_4,
                                       bool VAR_5)
{





 VAR_3->phy.autoneg_advertised = 0;

 if (VAR_4 & VAR_1)
  VAR_3->phy.autoneg_advertised |= VAR_1;

 if (VAR_4 & VAR_2)
  VAR_3->phy.autoneg_advertised |= VAR_2;

 if (VAR_4 & VAR_0)
  VAR_3->phy.autoneg_advertised |= VAR_0;


 VAR_3->phy.ops.setup_link(VAR_3);

 return 0;
}
