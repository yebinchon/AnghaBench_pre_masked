
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct e1000_hw {int device_id; } ;
struct e1000_adapter {int wol; TYPE_1__* pdev; struct e1000_hw hw; } ;
struct TYPE_2__ {int dev; } ;



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
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct e1000_adapter*,struct ethtool_wolinfo*) ;
 int FUNC_3 (int ,char*) ;
 struct e1000_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_13, struct ethtool_wolinfo *VAR_14)
{
 struct e1000_adapter *VAR_15 = FUNC_4(VAR_13);
 struct e1000_hw *VAR_16 = &VAR_15->hw;

 if (VAR_14->wolopts & (VAR_10 | VAR_5 | VAR_8))
  return -VAR_4;

 if (FUNC_2(VAR_15, VAR_14) ||
     !FUNC_0(&VAR_15->pdev->dev))
  return VAR_14->wolopts ? -VAR_4 : 0;

 switch (VAR_16->device_id) {
 case 128:
  if (VAR_14->wolopts & VAR_11) {
   FUNC_3(VAR_12, "Interface does not support directed "
         "(unicast) frame wake-up packets\n");
   return -VAR_4;
  }
  break;
 default:
  break;
 }


 VAR_15->wol = 0;

 if (VAR_14->wolopts & VAR_11)
  VAR_15->wol |= VAR_1;
 if (VAR_14->wolopts & VAR_9)
  VAR_15->wol |= VAR_3;
 if (VAR_14->wolopts & VAR_6)
  VAR_15->wol |= VAR_0;
 if (VAR_14->wolopts & VAR_7)
  VAR_15->wol |= VAR_2;

 FUNC_1(&VAR_15->pdev->dev, VAR_15->wol);

 return 0;
}
