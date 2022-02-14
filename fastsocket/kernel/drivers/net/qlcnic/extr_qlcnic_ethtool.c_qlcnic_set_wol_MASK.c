
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int portnum; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int) ;
 int VAR_4 ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_5, struct ethtool_wolinfo *VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_2(VAR_5);
 u32 VAR_8;

 if (FUNC_3(VAR_7))
  return -VAR_1;
 if (VAR_6->wolopts & ~VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7, VAR_3);
 if (!(VAR_8 & (1 << VAR_7->portnum)))
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_7, VAR_2);
 if (VAR_6->wolopts & VAR_4)
  VAR_8 |= 1UL << VAR_7->portnum;
 else
  VAR_8 &= ~(1UL << VAR_7->portnum);

 FUNC_1(VAR_7, VAR_2, VAR_8);

 return 0;
}
