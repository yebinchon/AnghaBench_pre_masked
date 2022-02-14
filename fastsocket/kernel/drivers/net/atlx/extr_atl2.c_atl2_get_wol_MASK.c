
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;
struct atl2_adapter {int wol; } ;


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
 struct atl2_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_10,
 struct ethtool_wolinfo *VAR_11)
{
 struct atl2_adapter *VAR_12 = FUNC_0(VAR_10);

 VAR_11->supported = VAR_6;
 VAR_11->wolopts = 0;

 if (VAR_12->wol & VAR_1)
  VAR_11->wolopts |= VAR_9;
 if (VAR_12->wol & VAR_4)
  VAR_11->wolopts |= VAR_7;
 if (VAR_12->wol & VAR_0)
  VAR_11->wolopts |= VAR_5;
 if (VAR_12->wol & VAR_3)
  VAR_11->wolopts |= VAR_6;
 if (VAR_12->wol & VAR_2)
  VAR_11->wolopts |= VAR_8;
}
