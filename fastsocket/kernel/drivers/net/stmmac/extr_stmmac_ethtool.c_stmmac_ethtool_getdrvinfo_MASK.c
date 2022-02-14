
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int is_gmac; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {char* fw_version; int n_stats; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct net_device *VAR_4,
          struct ethtool_drvinfo *VAR_5)
{
 struct stmmac_priv *VAR_6 = FUNC_0(VAR_4);

 if (!VAR_6->is_gmac)
  FUNC_1(VAR_5->driver, VAR_2);
 else
  FUNC_1(VAR_5->driver, VAR_1);

 FUNC_1(VAR_5->version, VAR_0);
 VAR_5->fw_version[0] = '\0';
 VAR_5->n_stats = VAR_3;
 return;
}
