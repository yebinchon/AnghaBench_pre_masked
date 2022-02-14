
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_drvinfo {int regdump_len; int eedump_len; int testinfo_len; int n_stats; int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_2__ {int flash_size; } ;
struct bnx2x {TYPE_1__ common; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ,int) ;
 int FUNC_2 (struct net_device*) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3,
         struct ethtool_drvinfo *VAR_4)
{
 struct bnx2x *VAR_5 = FUNC_3(VAR_3);

 FUNC_5(VAR_4->driver, VAR_1, sizeof(VAR_4->driver));
 FUNC_5(VAR_4->version, VAR_2, sizeof(VAR_4->version));

 FUNC_1(VAR_5, VAR_4->fw_version, sizeof(VAR_4->fw_version));

 FUNC_5(VAR_4->bus_info, FUNC_4(VAR_5->pdev), sizeof(VAR_4->bus_info));
 VAR_4->n_stats = VAR_0;
 VAR_4->testinfo_len = FUNC_0(VAR_5);
 VAR_4->eedump_len = VAR_5->common.flash_size;
 VAR_4->regdump_len = FUNC_2(VAR_3);
}
