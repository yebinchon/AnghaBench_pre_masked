
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {scalar_t__ eedump_len; scalar_t__ regdump_len; scalar_t__ testinfo_len; int n_stats; int bus_info; int fw_version; int version; int driver; } ;
struct bdx_priv {scalar_t__ stats_flag; int pdev; } ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 struct bdx_priv* FUNC_1 (struct net_device*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_3, struct ethtool_drvinfo *VAR_4)
{
 struct bdx_priv *VAR_5 = FUNC_1(VAR_3);

 FUNC_3(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_3(VAR_4->version, VAR_1, sizeof(VAR_4->version));
 FUNC_3(VAR_4->fw_version, "N/A", sizeof(VAR_4->fw_version));
 FUNC_3(VAR_4->bus_info, FUNC_2(VAR_5->pdev),
  sizeof(VAR_4->bus_info));

 VAR_4->n_stats = ((VAR_5->stats_flag) ? FUNC_0(VAR_2) : 0);
 VAR_4->testinfo_len = 0;
 VAR_4->regdump_len = 0;
 VAR_4->eedump_len = 0;
}
