
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_esw_func_cfg {int offload_flags; } ;
struct qlcnic_adapter {int rx_csum; int flags; TYPE_1__* pdev; struct net_device* netdev; } ;
struct net_device {int features; unsigned long vlan_features; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*,int) ;
 int FUNC_5 (struct qlcnic_adapter*) ;

__attribute__((used)) static void FUNC_6(struct qlcnic_adapter *VAR_13,
           struct qlcnic_esw_func_cfg *VAR_14)
{
 struct net_device *VAR_15 = VAR_13->netdev;
 unsigned long VAR_16, VAR_17;
 int VAR_18;

 if (FUNC_3(VAR_13))
  return;

 VAR_16 = (VAR_7 | VAR_5 |
   VAR_4 | VAR_3);
 VAR_17 = (VAR_7 | VAR_5 |
   VAR_4 | VAR_3);

 if (FUNC_0(VAR_13)) {
  VAR_16 |= (VAR_8 | VAR_9);
  VAR_17 |= (VAR_8 | VAR_9);
 }

 if (VAR_15->features & VAR_6)
  VAR_16 |= VAR_6;

 if (VAR_14->offload_flags & VAR_0) {
  VAR_13->rx_csum = 1;
  if (VAR_13->flags & VAR_12) {
   VAR_18 = VAR_11;
   if (FUNC_4(VAR_13, VAR_18))
    return;
   FUNC_1(&VAR_13->pdev->dev,
     "Enabling LRO as Rx checksum is on\n");
   VAR_15->features |= VAR_6;
  }
  VAR_15->features |= VAR_16;
  if (!(VAR_14->offload_flags & VAR_1)) {
   VAR_15->features &= ~VAR_8;
   VAR_16 &= ~VAR_8;
  }
  if (!(VAR_14->offload_flags & VAR_2)) {
   VAR_15->features &= ~VAR_9;
   VAR_16 &= ~VAR_9;
  }
 } else {
  if (VAR_15->features & VAR_6) {
   VAR_18 = VAR_10;
   if (FUNC_4(VAR_13, VAR_18))
    return;

   if (FUNC_2(VAR_13))
    FUNC_5(VAR_13);
   FUNC_1(&VAR_13->pdev->dev,
     "Disabling LRO as rx_csum is off\n");
   VAR_13->flags |= VAR_12;
  }
  VAR_15->features &= ~VAR_16;
  VAR_16 &= ~VAR_16;
  VAR_13->rx_csum = 0;
 }

 VAR_15->vlan_features = (VAR_16 & VAR_17);
}
