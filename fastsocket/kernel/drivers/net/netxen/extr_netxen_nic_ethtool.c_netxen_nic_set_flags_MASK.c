
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netxen_adapter {int capabilities; int rx_csum; } ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct netxen_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct netxen_adapter*,int) ;
 scalar_t__ FUNC_4 (struct netxen_adapter*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7, u32 VAR_8)
{
 struct netxen_adapter *VAR_9 = FUNC_2(VAR_7);
 int VAR_10;

 if ((FUNC_0(VAR_7) & ~VAR_2) !=
     (VAR_8 & ~VAR_2))
  return -VAR_0;

 if (!(VAR_9->capabilities & VAR_6))
  return -VAR_0;

 if (!VAR_9->rx_csum) {
  FUNC_1(VAR_7, "rx csum is off, cannot toggle LRO\n");
  return -VAR_0;
 }

 if (!!(VAR_8 & VAR_2) == !!(VAR_7->features & VAR_3))
  return 0;

 if (VAR_8 & VAR_2) {
  VAR_10 = VAR_5;
  VAR_7->features |= VAR_3;
 } else {
  VAR_10 = VAR_4;
  VAR_7->features &= ~VAR_3;
 }

 if (FUNC_3(VAR_9, VAR_10))
  return -VAR_1;

 if ((VAR_10 == 0) && FUNC_4(VAR_9))
  return -VAR_1;


 return 0;
}
