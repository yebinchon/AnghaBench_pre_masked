
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct qlcnic_adapter {unsigned long portnum; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct qlcnic_adapter*,int ) ;
 int VAR_2 ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct qlcnic_adapter *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6;

 if (FUNC_2(VAR_5))
  return;
 VAR_4->supported = 0;
 VAR_4->wolopts = 0;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6 & (1UL << VAR_5->portnum))
  VAR_4->supported |= VAR_2;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 if (VAR_6 & (1UL << VAR_5->portnum))
  VAR_4->wolopts |= VAR_2;
}
