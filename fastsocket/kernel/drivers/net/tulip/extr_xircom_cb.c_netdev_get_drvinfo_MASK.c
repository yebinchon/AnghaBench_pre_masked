
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xircom_private {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int driver; } ;


 struct xircom_private* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
          struct ethtool_drvinfo *VAR_1)
{
 struct xircom_private *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->driver, "xircom_cb");
 FUNC_2(VAR_1->bus_info, FUNC_1(VAR_2->pdev));
}
