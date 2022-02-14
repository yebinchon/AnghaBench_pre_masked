
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_adapter {int wake_up_evt; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_8,
    struct ethtool_wolinfo *VAR_9)
{
 struct pch_gbe_adapter *VAR_10 = FUNC_0(VAR_8);

 VAR_9->supported = VAR_7 | VAR_6 | VAR_4 | VAR_5;
 VAR_9->wolopts = 0;

 if ((VAR_10->wake_up_evt & VAR_1))
  VAR_9->wolopts |= VAR_7;
 if ((VAR_10->wake_up_evt & VAR_2))
  VAR_9->wolopts |= VAR_6;
 if ((VAR_10->wake_up_evt & VAR_0))
  VAR_9->wolopts |= VAR_4;
 if ((VAR_10->wake_up_evt & VAR_3))
  VAR_9->wolopts |= VAR_5;
}
