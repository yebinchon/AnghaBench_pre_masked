
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_reg_dump {int dummy; } ;
struct ql_mpi_coredump {int dummy; } ;
struct ql_adapter {int fw_rev_id; int flags; int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int regdump_len; scalar_t__ eedump_len; scalar_t__ testinfo_len; scalar_t__ n_stats; int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int,char*,int,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3,
      struct ethtool_drvinfo *VAR_4)
{
 struct ql_adapter *VAR_5 = FUNC_0(VAR_3);
 FUNC_3(VAR_4->driver, VAR_1, 32);
 FUNC_3(VAR_4->version, VAR_2, 32);
 FUNC_2(VAR_4->fw_version, 32, "v%d.%d.%d",
   (VAR_5->fw_rev_id & 0x00ff0000) >> 16,
   (VAR_5->fw_rev_id & 0x0000ff00) >> 8,
   (VAR_5->fw_rev_id & 0x000000ff));
 FUNC_3(VAR_4->bus_info, FUNC_1(VAR_5->pdev), 32);
 VAR_4->n_stats = 0;
 VAR_4->testinfo_len = 0;
 if (!FUNC_4(VAR_0, &VAR_5->flags))
  VAR_4->regdump_len = sizeof(struct ql_mpi_coredump);
 else
  VAR_4->regdump_len = sizeof(struct ql_reg_dump);
 VAR_4->eedump_len = 0;
}
