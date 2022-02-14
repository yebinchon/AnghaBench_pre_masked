
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int (* fc_enable ) (struct ixgbe_hw*) ;int (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; } ;
struct TYPE_5__ {int pfc_mode_enable; } ;
struct ixgbe_adapter {int link_up; int flags; int link_speed; scalar_t__ link_check_timeout; TYPE_2__* ixgbe_ieee_pfc; TYPE_1__ dcb_cfg; struct ixgbe_hw hw; } ;
struct TYPE_6__ {int pfc_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int VAR_6 ;
 int FUNC_3 (struct ixgbe_hw*,int *,int*,int) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9 = VAR_7->link_speed;
 bool VAR_10 = VAR_7->link_up;
 bool VAR_11 = VAR_7->dcb_cfg.pfc_mode_enable;

 if (!(VAR_7->flags & VAR_3))
  return;

 if (VAR_8->mac.ops.check_link) {
  VAR_8->mac.ops.check_link(VAR_8, &VAR_9, &VAR_10, 0);
 } else {

  VAR_9 = VAR_4;
  VAR_10 = 1;
 }

 if (VAR_7->ixgbe_ieee_pfc)
  VAR_11 |= !!(VAR_7->ixgbe_ieee_pfc->pfc_en);

 if (VAR_10 && !((VAR_7->flags & VAR_2) && VAR_11)) {
  VAR_8->mac.ops.fc_enable(VAR_8);
  FUNC_2(VAR_7);
 }

 if (VAR_10 ||
     FUNC_5(VAR_6, (VAR_7->link_check_timeout +
     VAR_5))) {
  VAR_7->flags &= ~VAR_3;
  FUNC_1(VAR_8, VAR_1, VAR_0);
  FUNC_0(VAR_8);
 }

 VAR_7->link_up = VAR_10;
 VAR_7->link_speed = VAR_9;
}
