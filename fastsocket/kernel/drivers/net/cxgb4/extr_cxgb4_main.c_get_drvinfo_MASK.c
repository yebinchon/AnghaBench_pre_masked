
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_drvinfo {int fw_version; int bus_info; int version; int driver; } ;
struct TYPE_2__ {scalar_t__ tp_vers; scalar_t__ fw_vers; } ;
struct adapter {TYPE_1__ params; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 struct adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,char*,int,int,int,int,int,int,int,int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_2, struct ethtool_drvinfo *VAR_3)
{
 struct adapter *VAR_4 = FUNC_4(VAR_2);

 FUNC_7(VAR_3->driver, VAR_1, sizeof(VAR_3->driver));
 FUNC_7(VAR_3->version, VAR_0, sizeof(VAR_3->version));
 FUNC_7(VAR_3->bus_info, FUNC_5(VAR_4->pdev),
  sizeof(VAR_3->bus_info));

 if (VAR_4->params.fw_vers)
  FUNC_6(VAR_3->fw_version, sizeof(VAR_3->fw_version),
   "%u.%u.%u.%u, TP %u.%u.%u.%u",
   FUNC_1(VAR_4->params.fw_vers),
   FUNC_3(VAR_4->params.fw_vers),
   FUNC_2(VAR_4->params.fw_vers),
   FUNC_0(VAR_4->params.fw_vers),
   FUNC_1(VAR_4->params.tp_vers),
   FUNC_3(VAR_4->params.tp_vers),
   FUNC_2(VAR_4->params.tp_vers),
   FUNC_0(VAR_4->params.tp_vers));
}
