
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbe_adapter {int wol; TYPE_1__* pdev; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;
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
 scalar_t__ FUNC_1 (struct ixgbe_adapter*,struct ethtool_wolinfo*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_8,
                          struct ethtool_wolinfo *VAR_9)
{
 struct ixgbe_adapter *VAR_10 = FUNC_2(VAR_8);

 VAR_9->supported = VAR_7 | VAR_6 |
                  VAR_4 | VAR_5;
 VAR_9->wolopts = 0;

 if (FUNC_1(VAR_10, VAR_9) ||
     !FUNC_0(&VAR_10->pdev->dev))
  return;

 if (VAR_10->wol & VAR_1)
  VAR_9->wolopts |= VAR_7;
 if (VAR_10->wol & VAR_3)
  VAR_9->wolopts |= VAR_6;
 if (VAR_10->wol & VAR_0)
  VAR_9->wolopts |= VAR_4;
 if (VAR_10->wol & VAR_2)
  VAR_9->wolopts |= VAR_5;
}
