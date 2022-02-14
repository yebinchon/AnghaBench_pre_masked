
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {int portnum; TYPE_1__ ahw; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 int FUNC_1 (struct netxen_adapter*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 struct netxen_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_4, struct ethtool_wolinfo *VAR_5)
{
 struct netxen_adapter *VAR_6 = FUNC_3(VAR_4);
 u32 VAR_7 = 0;

 if (FUNC_2(VAR_6->ahw.revision_id))
  return -VAR_0;

 if (VAR_5->wolopts & ~VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6, VAR_2);
 if (!(VAR_7 & (1 << VAR_6->portnum)))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 if (VAR_5->wolopts & VAR_3)
  VAR_7 |= 1UL << VAR_6->portnum;
 else
  VAR_7 &= ~(1UL << VAR_6->portnum);
 FUNC_1(VAR_6, VAR_1, VAR_7);

 return 0;
}
