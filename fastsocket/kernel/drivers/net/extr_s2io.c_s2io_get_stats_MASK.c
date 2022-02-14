
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct stat_block {int rmac_fcs_err_frms; int rmac_long_frms; int rmac_usized_frms; int rmac_usized_frms_oflow; int rmac_pause_ctrl_frms; int rmac_vld_mcst_frms; int rmac_vld_mcst_frms_oflow; int tmac_drop_frms; int rmac_drop_frms; int tmac_any_err_frms; int tmac_any_err_frms_oflow; int tmac_data_octets; int tmac_data_octets_oflow; int rmac_data_octets; int rmac_data_octets_oflow; int tmac_frms; int tmac_frms_oflow; int rmac_vld_frms; int rmac_vld_frms_oflow; } ;
struct TYPE_2__ {int rx_packets; int tx_packets; int rx_bytes; int tx_bytes; int rx_errors; int tx_errors; int rx_dropped; int tx_dropped; int rx_length_errors; int rx_crc_errors; scalar_t__ multicast; } ;
struct mac_info {struct stat_block* stats_info; } ;
struct s2io_nic {TYPE_1__ stats; struct mac_info mac_control; } ;
struct net_device_stats {int rx_packets; int tx_packets; int rx_bytes; int tx_bytes; int rx_errors; int tx_errors; int rx_dropped; int tx_dropped; int multicast; int rx_length_errors; int rx_crc_errors; } ;
struct net_device {struct net_device_stats stats; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct s2io_nic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct s2io_nic*) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct s2io_nic *VAR_1 = FUNC_2(VAR_0);
 struct mac_info *VAR_2 = &VAR_1->mac_control;
 struct stat_block *VAR_3 = VAR_2->stats_info;
 u64 VAR_4;


 FUNC_3(VAR_1);
 VAR_4 = ((u64) FUNC_0(VAR_3->rmac_vld_frms_oflow) << 32 |
  FUNC_0(VAR_3->rmac_vld_frms)) - VAR_1->stats.rx_packets;
 VAR_1->stats.rx_packets += VAR_4;
 VAR_0->stats.rx_packets += VAR_4;

 VAR_4 = ((u64) FUNC_0(VAR_3->tmac_frms_oflow) << 32 |
  FUNC_0(VAR_3->tmac_frms)) - VAR_1->stats.tx_packets;
 VAR_1->stats.tx_packets += VAR_4;
 VAR_0->stats.tx_packets += VAR_4;

 VAR_4 = ((u64) FUNC_0(VAR_3->rmac_data_octets_oflow) << 32 |
  FUNC_0(VAR_3->rmac_data_octets)) - VAR_1->stats.rx_bytes;
 VAR_1->stats.rx_bytes += VAR_4;
 VAR_0->stats.rx_bytes += VAR_4;

 VAR_4 = ((u64) FUNC_0(VAR_3->tmac_data_octets_oflow) << 32 |
  FUNC_0(VAR_3->tmac_data_octets)) - VAR_1->stats.tx_bytes;
 VAR_1->stats.tx_bytes += VAR_4;
 VAR_0->stats.tx_bytes += VAR_4;

 VAR_4 = FUNC_1(VAR_3->rmac_drop_frms) - VAR_1->stats.rx_errors;
 VAR_1->stats.rx_errors += VAR_4;
 VAR_0->stats.rx_errors += VAR_4;

 VAR_4 = ((u64) FUNC_0(VAR_3->tmac_any_err_frms_oflow) << 32 |
  FUNC_0(VAR_3->tmac_any_err_frms)) - VAR_1->stats.tx_errors;
 VAR_1->stats.tx_errors += VAR_4;
 VAR_0->stats.tx_errors += VAR_4;

 VAR_4 = FUNC_1(VAR_3->rmac_drop_frms) - VAR_1->stats.rx_dropped;
 VAR_1->stats.rx_dropped += VAR_4;
 VAR_0->stats.rx_dropped += VAR_4;

 VAR_4 = FUNC_1(VAR_3->tmac_drop_frms) - VAR_1->stats.tx_dropped;
 VAR_1->stats.tx_dropped += VAR_4;
 VAR_0->stats.tx_dropped += VAR_4;






 VAR_4 = (u64) FUNC_0(VAR_3->rmac_vld_mcst_frms_oflow) << 32 |
  FUNC_0(VAR_3->rmac_vld_mcst_frms);
 VAR_4 -= FUNC_1(VAR_3->rmac_pause_ctrl_frms);
 VAR_4 -= VAR_1->stats.multicast;
 VAR_1->stats.multicast += VAR_4;
 VAR_0->stats.multicast += VAR_4;

 VAR_4 = ((u64) FUNC_0(VAR_3->rmac_usized_frms_oflow) << 32 |
  FUNC_0(VAR_3->rmac_usized_frms)) +
  FUNC_1(VAR_3->rmac_long_frms) - VAR_1->stats.rx_length_errors;
 VAR_1->stats.rx_length_errors += VAR_4;
 VAR_0->stats.rx_length_errors += VAR_4;

 VAR_4 = FUNC_1(VAR_3->rmac_fcs_err_frms) - VAR_1->stats.rx_crc_errors;
 VAR_1->stats.rx_crc_errors += VAR_4;
 VAR_0->stats.rx_crc_errors += VAR_4;

 return &VAR_0->stats;
}
