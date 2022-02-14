
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int device_id; } ;
struct igb_adapter {int flags; int wol; TYPE_1__ hw; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;


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
 struct igb_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_11, struct ethtool_wolinfo *VAR_12)
{
 struct igb_adapter *VAR_13 = FUNC_0(VAR_11);

 VAR_12->supported = VAR_10 | VAR_8 |
    VAR_6 | VAR_7 |
    VAR_9;
 VAR_12->wolopts = 0;

 if (!(VAR_13->flags & VAR_5))
  return;


 switch (VAR_13->hw.device_id) {
 default:
  break;
 }

 if (VAR_13->wol & VAR_1)
  VAR_12->wolopts |= VAR_10;
 if (VAR_13->wol & VAR_4)
  VAR_12->wolopts |= VAR_8;
 if (VAR_13->wol & VAR_0)
  VAR_12->wolopts |= VAR_6;
 if (VAR_13->wol & VAR_3)
  VAR_12->wolopts |= VAR_7;
 if (VAR_13->wol & VAR_2)
  VAR_12->wolopts |= VAR_9;
}
