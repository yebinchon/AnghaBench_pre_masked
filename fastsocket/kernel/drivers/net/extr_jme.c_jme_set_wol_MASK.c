
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {int reg_pmcs; } ;
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
 int FUNC_0 (struct jme_adapter*,int ,int) ;
 struct jme_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_12,
  struct ethtool_wolinfo *VAR_13)
{
 struct jme_adapter *VAR_14 = FUNC_1(VAR_12);

 if (VAR_13->wolopts & (VAR_8 |
    VAR_11 |
    VAR_9 |
    VAR_6 |
    VAR_5))
  return -VAR_0;

 VAR_14->reg_pmcs = 0;

 if (VAR_13->wolopts & VAR_10)
  VAR_14->reg_pmcs |= VAR_2 | VAR_3;

 if (VAR_13->wolopts & VAR_7)
  VAR_14->reg_pmcs |= VAR_4;

 FUNC_0(VAR_14, VAR_1, VAR_14->reg_pmcs);

 return 0;
}
