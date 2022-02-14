
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;
struct atl1_adapter {int wol; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atl1_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
 struct ethtool_wolinfo *VAR_3)
{
 struct atl1_adapter *VAR_4 = FUNC_0(VAR_2);

 VAR_3->supported = VAR_1;
 VAR_3->wolopts = 0;
 if (VAR_4->wol & VAR_0)
  VAR_3->wolopts |= VAR_1;
 return;
}
