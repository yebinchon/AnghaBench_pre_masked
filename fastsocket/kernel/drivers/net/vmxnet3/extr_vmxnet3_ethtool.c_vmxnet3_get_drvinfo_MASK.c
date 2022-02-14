
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int regdump_len; scalar_t__ eedump_len; scalar_t__ testinfo_len; int n_stats; int bus_info; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmxnet3_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_3, struct ethtool_drvinfo *VAR_4)
{
 struct vmxnet3_adapter *VAR_5 = FUNC_0(VAR_3);

 FUNC_2(VAR_4->driver, VAR_2, sizeof(VAR_4->driver));

 FUNC_2(VAR_4->version, VAR_1,
  sizeof(VAR_4->version));

 FUNC_2(VAR_4->bus_info, FUNC_1(VAR_5->pdev),
  sizeof(VAR_4->bus_info));
 VAR_4->n_stats = FUNC_4(VAR_3, VAR_0);
 VAR_4->testinfo_len = 0;
 VAR_4->eedump_len = 0;
 VAR_4->regdump_len = FUNC_3(VAR_3);
}
