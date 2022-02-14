
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct net_device_stats {int tx_errors; int rx_crc_errors; int rx_length_errors; int rx_dropped; int tx_packets; int tx_bytes; int rx_packets; int rx_bytes; } ;
struct net_device {int dummy; } ;
struct nes_vnic {int nic_index; struct net_device_stats netstats; struct nes_device* nesdev; int endnode_nstat_tx_frames; int endnode_nstat_tx_octets; int endnode_nstat_rx_frames; int endnode_nstat_rx_octets; int endnode_nstat_rx_discard; } ;
struct nes_device {int mac_index; int mac_tx_errors; int mac_rx_crc_errors; int mac_rx_errors; int mac_rx_symbol_err_frames; int mac_rx_jabber_frames; int mac_rx_oversized_frames; int mac_rx_short_frames; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (struct nes_device*,scalar_t__) ;
 struct nes_vnic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_16)
{
 struct nes_vnic *VAR_17 = FUNC_1(VAR_16);
 struct nes_device *VAR_18 = VAR_17->nesdev;
 u64 VAR_19;
 u32 VAR_20;

 VAR_20 = FUNC_0(VAR_18,
   VAR_0 + (VAR_17->nic_index*0x200));
 VAR_17->netstats.rx_dropped += VAR_20;
 VAR_17->endnode_nstat_rx_discard += VAR_20;

 VAR_19 = (u64)FUNC_0(VAR_18,
   VAR_4 + (VAR_17->nic_index*0x200));
 VAR_19 += ((u64)FUNC_0(VAR_18,
   VAR_3 + (VAR_17->nic_index*0x200))) << 32;

 VAR_17->endnode_nstat_rx_octets += VAR_19;
 VAR_17->netstats.rx_bytes += VAR_19;

 VAR_19 = (u64)FUNC_0(VAR_18,
   VAR_2 + (VAR_17->nic_index*0x200));
 VAR_19 += ((u64)FUNC_0(VAR_18,
   VAR_1 + (VAR_17->nic_index*0x200))) << 32;

 VAR_17->endnode_nstat_rx_frames += VAR_19;
 VAR_17->netstats.rx_packets += VAR_19;

 VAR_19 = (u64)FUNC_0(VAR_18,
   VAR_8 + (VAR_17->nic_index*0x200));
 VAR_19 += ((u64)FUNC_0(VAR_18,
   VAR_7 + (VAR_17->nic_index*0x200))) << 32;

 VAR_17->endnode_nstat_tx_octets += VAR_19;
 VAR_17->netstats.tx_bytes += VAR_19;

 VAR_19 = (u64)FUNC_0(VAR_18,
   VAR_6 + (VAR_17->nic_index*0x200));
 VAR_19 += ((u64)FUNC_0(VAR_18,
   VAR_5 + (VAR_17->nic_index*0x200))) << 32;

 VAR_17->endnode_nstat_tx_frames += VAR_19;
 VAR_17->netstats.tx_packets += VAR_19;

 VAR_20 = FUNC_0(VAR_18,
   VAR_13 + (VAR_17->nesdev->mac_index*0x200));
 VAR_17->netstats.rx_dropped += VAR_20;
 VAR_17->nesdev->mac_rx_errors += VAR_20;
 VAR_17->nesdev->mac_rx_short_frames += VAR_20;

 VAR_20 = FUNC_0(VAR_18,
   VAR_12 + (VAR_17->nesdev->mac_index*0x200));
 VAR_17->netstats.rx_dropped += VAR_20;
 VAR_17->nesdev->mac_rx_errors += VAR_20;
 VAR_17->nesdev->mac_rx_oversized_frames += VAR_20;

 VAR_20 = FUNC_0(VAR_18,
   VAR_10 + (VAR_17->nesdev->mac_index*0x200));
 VAR_17->netstats.rx_dropped += VAR_20;
 VAR_17->nesdev->mac_rx_errors += VAR_20;
 VAR_17->nesdev->mac_rx_jabber_frames += VAR_20;

 VAR_20 = FUNC_0(VAR_18,
   VAR_14 + (VAR_17->nesdev->mac_index*0x200));
 VAR_17->netstats.rx_dropped += VAR_20;
 VAR_17->nesdev->mac_rx_errors += VAR_20;
 VAR_17->nesdev->mac_rx_symbol_err_frames += VAR_20;

 VAR_20 = FUNC_0(VAR_18,
   VAR_11 + (VAR_17->nesdev->mac_index*0x200));
 VAR_17->netstats.rx_length_errors += VAR_20;
 VAR_17->nesdev->mac_rx_errors += VAR_20;

 VAR_20 = FUNC_0(VAR_18,
   VAR_9 + (VAR_17->nesdev->mac_index*0x200));
 VAR_17->nesdev->mac_rx_errors += VAR_20;
 VAR_17->nesdev->mac_rx_crc_errors += VAR_20;
 VAR_17->netstats.rx_crc_errors += VAR_20;

 VAR_20 = FUNC_0(VAR_18,
   VAR_15 + (VAR_17->nesdev->mac_index*0x200));
 VAR_17->nesdev->mac_tx_errors += VAR_20;
 VAR_17->netstats.tx_errors += VAR_20;

 return &VAR_17->netstats;
}
