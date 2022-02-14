
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {char* fw_version; int n_stats; scalar_t__ regdump_len; int bus_info; int version; int driver; } ;
struct cas {scalar_t__ casreg_len; int pdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cas* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5, struct ethtool_drvinfo *VAR_6)
{
 struct cas *VAR_7 = FUNC_0(VAR_5);
 FUNC_2(VAR_6->driver, VAR_2, VAR_4);
 FUNC_2(VAR_6->version, VAR_3, VAR_4);
 VAR_6->fw_version[0] = '\0';
 FUNC_2(VAR_6->bus_info, FUNC_1(VAR_7->pdev), VAR_4);
 VAR_6->regdump_len = VAR_7->casreg_len < VAR_0 ?
  VAR_7->casreg_len : VAR_0;
 VAR_6->n_stats = VAR_1;
}
