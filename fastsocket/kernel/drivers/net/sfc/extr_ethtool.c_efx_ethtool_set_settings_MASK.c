
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ duplex; } ;
struct efx_nic {int mac_lock; TYPE_1__* phy_op; int net_dev; } ;
struct TYPE_2__ {int (* set_settings ) (struct efx_nic*,struct ethtool_cmd*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ethtool_cmd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct efx_nic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_5 (struct efx_nic*,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
        struct ethtool_cmd *VAR_5)
{
 struct efx_nic *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;


 if ((FUNC_0(VAR_5) == VAR_2) &&
     (VAR_5->duplex != VAR_0)) {
  FUNC_4(VAR_6, VAR_3, VAR_6->net_dev,
     "rejecting unsupported 1000Mbps HD setting\n");
  return -VAR_1;
 }

 FUNC_1(&VAR_6->mac_lock);
 VAR_7 = VAR_6->phy_op->set_settings(VAR_6, VAR_5);
 FUNC_2(&VAR_6->mac_lock);
 return VAR_7;
}
