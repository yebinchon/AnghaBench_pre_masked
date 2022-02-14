
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ts_info {int so_timestamping; int phc_index; } ;
struct efx_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,struct ethtool_ts_info*) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_2,
       struct ethtool_ts_info *VAR_3)
{
 struct efx_nic *VAR_4 = FUNC_1(VAR_2);


 VAR_3->so_timestamping = (VAR_0 |
        VAR_1);
 VAR_3->phc_index = -1;

 FUNC_0(VAR_4, VAR_3);
 return 0;
}
