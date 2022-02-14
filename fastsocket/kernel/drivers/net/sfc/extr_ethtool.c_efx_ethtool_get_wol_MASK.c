
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int dummy; } ;
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {void (* get_wol ) (struct efx_nic*,struct ethtool_wolinfo*) ;} ;


 struct efx_nic* FUNC_0 (struct net_device*) ;
 void FUNC_1 (struct efx_nic*,struct ethtool_wolinfo*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
    struct ethtool_wolinfo *VAR_1)
{
 struct efx_nic *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->type->get_wol(VAR_2, VAR_1);
}
