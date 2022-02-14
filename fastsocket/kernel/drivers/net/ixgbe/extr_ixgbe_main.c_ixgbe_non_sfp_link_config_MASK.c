
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* check_link ) (struct ixgbe_hw*,int*,int*,int) ;int (* get_link_capabilities ) (struct ixgbe_hw*,int*,int*) ;int (* setup_link ) (struct ixgbe_hw*,int,int) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int autoneg_advertised; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int*,int*,int) ;
 int FUNC_1 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_2 (struct ixgbe_hw*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ixgbe_hw *VAR_1)
{
 u32 VAR_2;
 bool VAR_3, VAR_4 = 0;
 u32 VAR_5 = VAR_0;

 if (VAR_1->mac.ops.check_link)
  VAR_5 = VAR_1->mac.ops.check_link(VAR_1, &VAR_2, &VAR_4, 0);

 if (VAR_5)
  goto link_cfg_out;

 VAR_2 = VAR_1->phy.autoneg_advertised;
 if ((!VAR_2) && (VAR_1->mac.ops.get_link_capabilities))
  VAR_5 = VAR_1->mac.ops.get_link_capabilities(VAR_1, &VAR_2,
       &VAR_3);
 if (VAR_5)
  goto link_cfg_out;

 if (VAR_1->mac.ops.setup_link)
  VAR_5 = VAR_1->mac.ops.setup_link(VAR_1, VAR_2, VAR_4);
link_cfg_out:
 return VAR_5;
}
