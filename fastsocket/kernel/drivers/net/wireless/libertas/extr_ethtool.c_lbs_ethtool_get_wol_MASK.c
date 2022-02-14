
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int wol_criteria; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_8,
    struct ethtool_wolinfo *VAR_9)
{
 struct lbs_private *VAR_10 = VAR_8->ml_priv;

 if (VAR_10->wol_criteria == 0xffffffff) {

  VAR_9->supported = VAR_9->wolopts = 0;
  return;
 }

 VAR_9->supported = VAR_7|VAR_5|VAR_4|VAR_6;

 if (VAR_10->wol_criteria & VAR_3)
  VAR_9->wolopts |= VAR_7;
 if (VAR_10->wol_criteria & VAR_2)
  VAR_9->wolopts |= VAR_5;
 if (VAR_10->wol_criteria & VAR_0)
  VAR_9->wolopts |= VAR_4;
 if (VAR_10->wol_criteria & VAR_1)
  VAR_9->wolopts |= VAR_6;
}
