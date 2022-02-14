
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct atl1_adapter {int wol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct atl1_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_9,
 struct ethtool_wolinfo *VAR_10)
{
 struct atl1_adapter *VAR_11 = FUNC_0(VAR_9);

 if (VAR_10->wolopts & (VAR_7 | VAR_8 | VAR_6 | VAR_3 |
  VAR_2 | VAR_5))
  return -VAR_1;
 VAR_11->wol = 0;
 if (VAR_10->wolopts & VAR_4)
  VAR_11->wol |= VAR_0;
 return 0;
}
