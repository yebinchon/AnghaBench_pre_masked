
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_drvinfo {char* fw_version; int regdump_len; int n_stats; int bus_info; int version; int driver; } ;
struct emac_instance {int cell_index; TYPE_2__* ofdev; } ;
struct TYPE_4__ {TYPE_1__* node; } ;
struct TYPE_3__ {char* full_name; } ;


 char* VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct emac_instance* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,char*,int,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
         struct ethtool_drvinfo *VAR_2)
{
 struct emac_instance *VAR_3 = FUNC_2(VAR_1);

 FUNC_4(VAR_2->driver, "ibm_emac");
 FUNC_4(VAR_2->version, VAR_0);
 VAR_2->fw_version[0] = '\0';
 FUNC_3(VAR_2->bus_info, "PPC 4xx EMAC-%d %s",
  VAR_3->cell_index, VAR_3->ofdev->node->full_name);
 VAR_2->n_stats = FUNC_1(VAR_1);
 VAR_2->regdump_len = FUNC_0(VAR_1);
}
