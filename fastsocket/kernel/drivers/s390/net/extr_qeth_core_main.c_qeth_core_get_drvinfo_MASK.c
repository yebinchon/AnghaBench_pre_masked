
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* mcl_level; } ;
struct TYPE_4__ {scalar_t__ layer2; } ;
struct qeth_card {TYPE_1__ info; TYPE_2__ options; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 char* FUNC_0 (struct qeth_card*) ;
 char* FUNC_1 (struct qeth_card*) ;
 char* FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (int ,char*,char*,char*,char*) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(struct net_device *VAR_0,
  struct ethtool_drvinfo *VAR_1)
{
 struct qeth_card *VAR_2 = VAR_0->ml_priv;
 if (VAR_2->options.layer2)
  FUNC_4(VAR_1->driver, "qeth_l2");
 else
  FUNC_4(VAR_1->driver, "qeth_l3");

 FUNC_4(VAR_1->version, "1.0");
 FUNC_4(VAR_1->fw_version, VAR_2->info.mcl_level);
 FUNC_3(VAR_1->bus_info, "%s/%s/%s",
   FUNC_1(VAR_2),
   FUNC_2(VAR_2),
   FUNC_0(VAR_2));
}
