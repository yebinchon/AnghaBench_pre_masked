
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* setup_link ) (struct ixgbe_hw*,int ,int) ;int (* get_link_capabilities ) (struct ixgbe_hw*,int *,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int autoneg_advertised; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
struct ixgbe_adapter {int flags; int state; int link_check_timeout; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,int *,int*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6;
 bool VAR_7 = 0;

 if (!(VAR_4->flags & VAR_0))
  return;


 if (FUNC_3(VAR_2, &VAR_4->state))
  return;

 VAR_4->flags &= ~VAR_0;

 VAR_6 = VAR_5->phy.autoneg_advertised;
 if ((!VAR_6) && (VAR_5->mac.ops.get_link_capabilities))
  VAR_5->mac.ops.get_link_capabilities(VAR_5, &VAR_6, &VAR_7);
 if (VAR_5->mac.ops.setup_link)
  VAR_5->mac.ops.setup_link(VAR_5, VAR_6, 1);

 VAR_4->flags |= VAR_1;
 VAR_4->link_check_timeout = VAR_3;
 FUNC_0(VAR_2, &VAR_4->state);
}
