
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int requested_mode; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ fc; TYPE_2__ mac; } ;
struct TYPE_6__ {scalar_t__ pg_tcs; } ;
struct TYPE_10__ {int pfc_mode_enable; TYPE_1__ num_tcs; } ;
struct TYPE_9__ {int pfc_mode_enable; } ;
struct ixgbe_adapter {TYPE_5__ dcb_cfg; TYPE_4__ temp_dcb_cfg; int flags; int last_lfc_mode; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*,scalar_t__) ;
 struct ixgbe_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct net_device*) ;

int FUNC_10(struct net_device *VAR_5, u8 VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_6(VAR_5);
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;


 if (VAR_6 > VAR_7->dcb_cfg.num_tcs.pg_tcs ||
     (VAR_8->mac.type == VAR_4 &&
      VAR_6 < VAR_2))
  return -VAR_0;





 if (FUNC_9(VAR_5))
  FUNC_1(VAR_5);
 FUNC_0(VAR_7);
 FUNC_2(VAR_7);

 if (FUNC_9(VAR_5))
  return FUNC_3(VAR_5);

 return 0;
}
