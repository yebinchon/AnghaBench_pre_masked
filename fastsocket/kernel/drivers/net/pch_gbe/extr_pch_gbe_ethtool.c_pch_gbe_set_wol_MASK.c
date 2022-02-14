
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_adapter {int wake_up_evt; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


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
 int VAR_11 ;
 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_12,
    struct ethtool_wolinfo *VAR_13)
{
 struct pch_gbe_adapter *VAR_14 = FUNC_0(VAR_12);

 if ((VAR_13->wolopts & (VAR_10 | VAR_5 | VAR_8)))
  return -VAR_0;

 VAR_14->wake_up_evt = 0;

 if ((VAR_13->wolopts & VAR_11))
  VAR_14->wake_up_evt |= VAR_2;
 if ((VAR_13->wolopts & VAR_9))
  VAR_14->wake_up_evt |= VAR_3;
 if ((VAR_13->wolopts & VAR_6))
  VAR_14->wake_up_evt |= VAR_1;
 if ((VAR_13->wolopts & VAR_7))
  VAR_14->wake_up_evt |= VAR_4;
 return 0;
}
