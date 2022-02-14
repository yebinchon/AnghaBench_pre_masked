
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wol_config {int dummy; } ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int dummy; } ;
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
 int FUNC_0 (struct lbs_private*,int ,struct wol_config*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_10,
          struct ethtool_wolinfo *VAR_11)
{
 struct lbs_private *VAR_12 = VAR_10->ml_priv;
 uint32_t VAR_13 = 0;

 if (VAR_11->wolopts & ~(VAR_9|VAR_7|VAR_6|VAR_8))
  return -VAR_5;

 if (VAR_11->wolopts & VAR_9)
  VAR_13 |= VAR_4;
 if (VAR_11->wolopts & VAR_7)
  VAR_13 |= VAR_3;
 if (VAR_11->wolopts & VAR_6)
  VAR_13 |= VAR_1;
 if (VAR_11->wolopts & VAR_8)
  VAR_13 |= VAR_2;
 if (VAR_11->wolopts == 0)
  VAR_13 |= VAR_0;

 return FUNC_0(VAR_12, VAR_13, (struct wol_config *)((void*)0));
}
