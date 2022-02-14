
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;
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
 int FUNC_0 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct e1000_adapter*,struct ethtool_wolinfo*) ;
 int FUNC_2 (int ,char*) ;
 struct e1000_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_9,
     struct ethtool_wolinfo *VAR_10)
{
 struct e1000_adapter *VAR_11 = FUNC_3(VAR_9);
 struct e1000_hw *VAR_12 = &VAR_11->hw;

 VAR_10->supported = VAR_7 | VAR_6 |
                  VAR_4 | VAR_5;
 VAR_10->wolopts = 0;



 if (FUNC_1(VAR_11, VAR_10) ||
     !FUNC_0(&VAR_11->pdev->dev))
  return;


 switch (VAR_12->device_id) {
 case 128:

  VAR_10->supported &= ~VAR_7;

  if (VAR_11->wol & VAR_1)
   FUNC_2(VAR_8, "Interface does not support directed "
         "(unicast) frame wake-up packets\n");
  break;
 default:
  break;
 }

 if (VAR_11->wol & VAR_1)
  VAR_10->wolopts |= VAR_7;
 if (VAR_11->wol & VAR_3)
  VAR_10->wolopts |= VAR_6;
 if (VAR_11->wol & VAR_0)
  VAR_10->wolopts |= VAR_4;
 if (VAR_11->wol & VAR_2)
  VAR_10->wolopts |= VAR_5;
}
