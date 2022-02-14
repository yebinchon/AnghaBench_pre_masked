
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;
struct cpmac_priv {scalar_t__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct cpmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct ethtool_cmd *VAR_4)
{
 struct cpmac_priv *VAR_5 = FUNC_1(VAR_3);

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (VAR_5->phy)
  return FUNC_2(VAR_5->phy, VAR_4);

 return -VAR_1;
}
