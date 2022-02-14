
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_cmd {int autoneg; } ;
struct efx_nic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_1(struct efx_nic *VAR_1, struct ethtool_cmd *VAR_2)
{
 if (!VAR_2->autoneg)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2);
}
