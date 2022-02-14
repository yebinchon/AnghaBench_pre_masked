
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct atl1c_hw {scalar_t__ nic_type; int max_frame_size; } ;
struct atl1c_adapter {int flags; TYPE_2__* netdev; struct atl1c_hw hw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int features; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct atl1c_adapter*) ;
 int FUNC_1 (struct atl1c_adapter*,struct net_device*) ;
 int FUNC_2 (struct atl1c_adapter*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int) ;
 struct atl1c_adapter* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct atl1c_adapter*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_14, int VAR_15)
{
 struct atl1c_adapter *VAR_16 = FUNC_6(VAR_14);
 struct atl1c_hw *VAR_17 = &VAR_16->hw;
 int VAR_18 = VAR_14->mtu;
 int VAR_19 = VAR_15 + VAR_3 + VAR_2 + VAR_9;


 if (((VAR_17->nic_type == VAR_11 ||
       VAR_17->nic_type == VAR_12 ||
       VAR_17->nic_type == VAR_13) && VAR_15 > VAR_1) ||
       VAR_19 < VAR_4 + VAR_2 ||
       VAR_19 > VAR_5) {
  if (FUNC_7(VAR_16))
   FUNC_4(&VAR_16->pdev->dev, "invalid MTU setting\n");
  return -VAR_0;
 }

 if (VAR_18 != VAR_15 && FUNC_8(VAR_14)) {
  while (FUNC_9(VAR_10, &VAR_16->flags))
   FUNC_5(1);
  VAR_14->mtu = VAR_15;
  VAR_16->hw.max_frame_size = VAR_15;
  FUNC_1(VAR_16, VAR_14);
  if (VAR_15 > VAR_6) {
   VAR_16->netdev->features &= ~VAR_7;
   VAR_16->netdev->features &= ~VAR_8;
  } else {
   VAR_16->netdev->features |= VAR_7;
   VAR_16->netdev->features |= VAR_8;
  }
  FUNC_0(VAR_16);
  FUNC_2(VAR_16);
  FUNC_3(VAR_10, &VAR_16->flags);
 }
 return 0;
}
