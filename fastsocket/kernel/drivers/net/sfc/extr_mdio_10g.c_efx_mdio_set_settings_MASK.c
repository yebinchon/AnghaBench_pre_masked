
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethtool_cmd {int advertising; scalar_t__ duplex; scalar_t__ port; scalar_t__ autoneg; int supported; int cmd; } ;
struct efx_nic {TYPE_1__* phy_op; } ;
struct TYPE_2__ {int (* get_settings ) (struct efx_nic*,struct ethtool_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct efx_nic*,int) ;
 int FUNC_1 (struct efx_nic*) ;
 scalar_t__ FUNC_2 (struct ethtool_cmd*) ;
 int FUNC_3 (struct efx_nic*,struct ethtool_cmd*) ;

int FUNC_4(struct efx_nic *VAR_5, struct ethtool_cmd *VAR_6)
{
 struct ethtool_cmd VAR_7 = { .cmd = VAR_2 };

 VAR_5->phy_op->get_settings(VAR_5, &VAR_7);

 if (VAR_6->advertising == VAR_7.advertising &&
     FUNC_2(VAR_6) == FUNC_2(&VAR_7) &&
     VAR_6->duplex == VAR_7.duplex &&
     VAR_6->port == VAR_7.port &&
     VAR_6->autoneg == VAR_7.autoneg)
  return 0;


 if (VAR_7.port != VAR_3 || VAR_6->port != VAR_3)
  return -VAR_1;


 if (!VAR_6->autoneg ||
     (VAR_6->advertising | VAR_4) & ~VAR_7.supported)
  return -VAR_1;

 FUNC_0(VAR_5, VAR_6->advertising | VAR_0);
 FUNC_1(VAR_5);
 return 0;
}
