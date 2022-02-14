
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int duplex; } ;
struct efx_link_state {scalar_t__ fd; int speed; } ;
struct efx_nic {int mac_lock; TYPE_1__* phy_op; struct efx_link_state link_state; } ;
struct TYPE_2__ {int (* get_settings ) (struct efx_nic*,struct ethtool_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ethtool_cmd*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct efx_nic* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct efx_nic*,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5,
        struct ethtool_cmd *VAR_6)
{
 struct efx_nic *VAR_7 = FUNC_4(VAR_5);
 struct efx_link_state *VAR_8 = &VAR_7->link_state;

 FUNC_2(&VAR_7->mac_lock);
 VAR_7->phy_op->get_settings(VAR_7, VAR_6);
 FUNC_3(&VAR_7->mac_lock);


 VAR_6->supported &= ~VAR_2;

 VAR_6->supported |= VAR_4 | VAR_3;

 if (FUNC_0(VAR_7)) {
  FUNC_1(VAR_6, VAR_8->speed);
  VAR_6->duplex = VAR_8->fd ? VAR_0 : VAR_1;
 }

 return 0;
}
