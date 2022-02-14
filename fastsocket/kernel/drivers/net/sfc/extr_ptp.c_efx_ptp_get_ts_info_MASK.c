
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_ts_info {int so_timestamping; int tx_types; int rx_filters; int phc_index; } ;
struct efx_ptp_data {int phc_clock; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct efx_nic *VAR_12, struct ethtool_ts_info *VAR_13)
{
 struct efx_ptp_data *VAR_14 = VAR_12->ptp_data;

 if (!VAR_14)
  return;

 VAR_13->so_timestamping |= (VAR_11 |
         VAR_10 |
         VAR_9);
 VAR_13->phc_index = FUNC_0(VAR_14->phc_clock);
 VAR_13->tx_types = 1 << VAR_7 | 1 << VAR_8;
 VAR_13->rx_filters = (1 << VAR_0 |
          1 << VAR_2 |
          1 << VAR_3 |
          1 << VAR_1 |
          1 << VAR_5 |
          1 << VAR_6 |
          1 << VAR_4);
}
