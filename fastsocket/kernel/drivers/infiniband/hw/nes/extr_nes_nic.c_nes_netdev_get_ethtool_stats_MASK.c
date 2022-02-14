
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int aggregated; int flushed; int no_desc; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct TYPE_4__ {int rx_length_errors; int tx_packets; int tx_bytes; int rx_packets; int rx_bytes; int rx_dropped; int tx_errors; int rx_crc_errors; int tx_dropped; } ;
struct nes_vnic {int linearized_skbs; int tso_requests; int* qp_nic_index; int endnode_nstat_rx_discard; int endnode_nstat_rx_octets; int endnode_nstat_rx_frames; int endnode_nstat_tx_octets; int endnode_nstat_tx_frames; int endnode_ipv4_tcp_retransmits; int tx_sw_dropped; int sq_full; int segmented_tso_requests; TYPE_3__ lro_mgr; struct nes_device* nesdev; TYPE_1__ netstats; } ;
struct nes_device {int link_status_interrupts; int mac_index; int mac_pause_frames_sent; int mac_pause_frames_received; int port_rx_discards; int mac_rx_short_frames; int mac_rx_oversized_frames; int mac_rx_jabber_frames; int mac_rx_symbol_err_frames; int mac_rx_crc_errors; int mac_tx_errors; struct nes_adapter* nesadapter; int mac_rx_errors; int port_tx_discards; } ;
struct nes_adapter {int nic_rx_eth_route_err; int free_4kpbl; int free_256pbl; } ;
struct ethtool_stats {int n_stats; } ;


 int VAR_0 ;
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
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 size_t VAR_22 ;
 int FUNC_0 (int *) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 size_t FUNC_1 (struct nes_device*,scalar_t__) ;
 struct nes_vnic* FUNC_2 (struct net_device*) ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_53,
  struct ethtool_stats *VAR_54, u64 *VAR_55)
{
 u64 VAR_56;
 struct nes_vnic *VAR_57 = FUNC_2(VAR_53);
 struct nes_device *VAR_58 = VAR_57->nesdev;
 struct nes_adapter *VAR_59 = VAR_58->nesadapter;
 u32 VAR_60;
 u32 VAR_61;
 u32 VAR_62 = 0;

 VAR_54->n_stats = VAR_0;
 VAR_55[VAR_62] = VAR_57->nesdev->link_status_interrupts;
 VAR_55[++VAR_62] = VAR_57->linearized_skbs;
 VAR_55[++VAR_62] = VAR_57->tso_requests;

 VAR_61 = FUNC_1(VAR_58,
   VAR_19 + (VAR_57->nesdev->mac_index*0x200));
 VAR_57->nesdev->mac_pause_frames_sent += VAR_61;
 VAR_55[++VAR_62] = VAR_57->nesdev->mac_pause_frames_sent;

 VAR_61 = FUNC_1(VAR_58,
   VAR_15 + (VAR_57->nesdev->mac_index*0x200));
 VAR_57->nesdev->mac_pause_frames_received += VAR_61;

 VAR_61 = FUNC_1(VAR_58,
   VAR_20 + (VAR_57->nesdev->mac_index*0x40));
 VAR_57->nesdev->port_rx_discards += VAR_61;
 VAR_57->netstats.rx_dropped += VAR_61;

 VAR_61 = FUNC_1(VAR_58,
   VAR_21 + (VAR_57->nesdev->mac_index*0x40));
 VAR_57->nesdev->port_tx_discards += VAR_61;
 VAR_57->netstats.tx_dropped += VAR_61;

 VAR_61 = FUNC_1(VAR_58,
   VAR_16 + (VAR_57->nesdev->mac_index*0x200));
 VAR_57->netstats.rx_dropped += VAR_61;
 VAR_57->nesdev->mac_rx_errors += VAR_61;
 VAR_57->nesdev->mac_rx_short_frames += VAR_61;

 VAR_61 = FUNC_1(VAR_58,
   VAR_14 + (VAR_57->nesdev->mac_index*0x200));
 VAR_57->netstats.rx_dropped += VAR_61;
 VAR_57->nesdev->mac_rx_errors += VAR_61;
 VAR_57->nesdev->mac_rx_oversized_frames += VAR_61;

 VAR_61 = FUNC_1(VAR_58,
   VAR_12 + (VAR_57->nesdev->mac_index*0x200));
 VAR_57->netstats.rx_dropped += VAR_61;
 VAR_57->nesdev->mac_rx_errors += VAR_61;
 VAR_57->nesdev->mac_rx_jabber_frames += VAR_61;

 VAR_61 = FUNC_1(VAR_58,
   VAR_17 + (VAR_57->nesdev->mac_index*0x200));
 VAR_57->netstats.rx_dropped += VAR_61;
 VAR_57->nesdev->mac_rx_errors += VAR_61;
 VAR_57->nesdev->mac_rx_symbol_err_frames += VAR_61;

 VAR_61 = FUNC_1(VAR_58,
   VAR_13 + (VAR_57->nesdev->mac_index*0x200));
 VAR_57->netstats.rx_length_errors += VAR_61;
 VAR_57->nesdev->mac_rx_errors += VAR_61;

 VAR_61 = FUNC_1(VAR_58,
   VAR_11 + (VAR_57->nesdev->mac_index*0x200));
 VAR_57->nesdev->mac_rx_errors += VAR_61;
 VAR_57->nesdev->mac_rx_crc_errors += VAR_61;
 VAR_57->netstats.rx_crc_errors += VAR_61;

 VAR_61 = FUNC_1(VAR_58,
   VAR_18 + (VAR_57->nesdev->mac_index*0x200));
 VAR_57->nesdev->mac_tx_errors += VAR_61;
 VAR_57->netstats.tx_errors += VAR_61;

 for (VAR_60 = 0; VAR_60 < VAR_22; VAR_60++) {
  if (VAR_57->qp_nic_index[VAR_60] == 0xf)
   break;

  VAR_61 = FUNC_1(VAR_58,
    VAR_1 +
    (VAR_57->qp_nic_index[VAR_60]*0x200));
  VAR_57->netstats.rx_dropped += VAR_61;
  VAR_57->endnode_nstat_rx_discard += VAR_61;

  VAR_56 = (u64)FUNC_1(VAR_58,
    VAR_5 +
    (VAR_57->qp_nic_index[VAR_60]*0x200));
  VAR_56 += ((u64)FUNC_1(VAR_58,
    VAR_4 +
    (VAR_57->qp_nic_index[VAR_60]*0x200))) << 32;

  VAR_57->endnode_nstat_rx_octets += VAR_56;
  VAR_57->netstats.rx_bytes += VAR_56;

  VAR_56 = (u64)FUNC_1(VAR_58,
    VAR_3 +
    (VAR_57->qp_nic_index[VAR_60]*0x200));
  VAR_56 += ((u64)FUNC_1(VAR_58,
    VAR_2 +
    (VAR_57->qp_nic_index[VAR_60]*0x200))) << 32;

  VAR_57->endnode_nstat_rx_frames += VAR_56;
  VAR_57->netstats.rx_packets += VAR_56;

  VAR_56 = (u64)FUNC_1(VAR_58,
    VAR_9 +
    (VAR_57->qp_nic_index[VAR_60]*0x200));
  VAR_56 += ((u64)FUNC_1(VAR_58,
    VAR_8 +
    (VAR_57->qp_nic_index[VAR_60]*0x200))) << 32;

  VAR_57->endnode_nstat_tx_octets += VAR_56;
  VAR_57->netstats.tx_bytes += VAR_56;

  VAR_56 = (u64)FUNC_1(VAR_58,
    VAR_7 +
    (VAR_57->qp_nic_index[VAR_60]*0x200));
  VAR_56 += ((u64)FUNC_1(VAR_58,
    VAR_6 +
    (VAR_57->qp_nic_index[VAR_60]*0x200))) << 32;

  VAR_57->endnode_nstat_tx_frames += VAR_56;
  VAR_57->netstats.tx_packets += VAR_56;

  VAR_61 = FUNC_1(VAR_58,
    VAR_10 + (VAR_57->qp_nic_index[VAR_60]*0x200));
  VAR_57->endnode_ipv4_tcp_retransmits += VAR_61;
 }

 VAR_55[++VAR_62] = VAR_57->nesdev->mac_pause_frames_received;
 VAR_55[++VAR_62] = VAR_58->nesadapter->nic_rx_eth_route_err;
 VAR_55[++VAR_62] = VAR_57->tx_sw_dropped;
 VAR_55[++VAR_62] = VAR_57->sq_full;
 VAR_55[++VAR_62] = VAR_57->segmented_tso_requests;
 VAR_55[++VAR_62] = VAR_57->nesdev->mac_rx_symbol_err_frames;
 VAR_55[++VAR_62] = VAR_57->nesdev->mac_rx_jabber_frames;
 VAR_55[++VAR_62] = VAR_57->nesdev->mac_rx_oversized_frames;
 VAR_55[++VAR_62] = VAR_57->nesdev->mac_rx_short_frames;
 VAR_55[++VAR_62] = VAR_57->netstats.rx_length_errors;
 VAR_55[++VAR_62] = VAR_57->nesdev->mac_rx_crc_errors;
 VAR_55[++VAR_62] = VAR_57->nesdev->port_rx_discards;
 VAR_55[++VAR_62] = VAR_57->endnode_nstat_rx_discard;
 VAR_55[++VAR_62] = VAR_57->endnode_nstat_rx_octets;
 VAR_55[++VAR_62] = VAR_57->endnode_nstat_rx_frames;
 VAR_55[++VAR_62] = VAR_57->endnode_nstat_tx_octets;
 VAR_55[++VAR_62] = VAR_57->endnode_nstat_tx_frames;
 VAR_55[++VAR_62] = VAR_57->nesdev->mac_tx_errors;
 VAR_55[++VAR_62] = VAR_45;
 VAR_55[++VAR_62] = VAR_46;
 VAR_55[++VAR_62] = VAR_57->endnode_ipv4_tcp_retransmits;
 VAR_55[++VAR_62] = FUNC_0(&VAR_29);
 VAR_55[++VAR_62] = FUNC_0(&VAR_24);
 VAR_55[++VAR_62] = FUNC_0(&VAR_30);
 VAR_55[++VAR_62] = FUNC_0(&VAR_28);
 VAR_55[++VAR_62] = FUNC_0(&VAR_27);
 VAR_55[++VAR_62] = FUNC_0(&VAR_42);
 VAR_55[++VAR_62] = FUNC_0(&VAR_47);
 VAR_55[++VAR_62] = FUNC_0(&VAR_50);
 VAR_55[++VAR_62] = FUNC_0(&VAR_52);
 VAR_55[++VAR_62] = FUNC_0(&VAR_51);
 VAR_55[++VAR_62] = FUNC_0(&VAR_26);
 VAR_55[++VAR_62] = VAR_41;
 VAR_55[++VAR_62] = VAR_36;
 VAR_55[++VAR_62] = VAR_37;
 VAR_55[++VAR_62] = VAR_39;
 VAR_55[++VAR_62] = VAR_38;
 VAR_55[++VAR_62] = VAR_40;
 VAR_55[++VAR_62] = FUNC_0(&VAR_31);
 VAR_55[++VAR_62] = FUNC_0(&VAR_32);
 VAR_55[++VAR_62] = VAR_25;
 VAR_55[++VAR_62] = FUNC_0(&VAR_33);
 VAR_55[++VAR_62] = FUNC_0(&VAR_34);
 VAR_55[++VAR_62] = FUNC_0(&VAR_35);
 VAR_55[++VAR_62] = FUNC_0(&VAR_23);
 VAR_55[++VAR_62] = FUNC_0(&VAR_43);
 VAR_55[++VAR_62] = VAR_59->free_4kpbl;
 VAR_55[++VAR_62] = VAR_59->free_256pbl;
 VAR_55[++VAR_62] = VAR_44;
 VAR_55[++VAR_62] = VAR_57->lro_mgr.stats.aggregated;
 VAR_55[++VAR_62] = VAR_57->lro_mgr.stats.flushed;
 VAR_55[++VAR_62] = VAR_57->lro_mgr.stats.no_desc;
 VAR_55[++VAR_62] = FUNC_0(&VAR_48);
 VAR_55[++VAR_62] = FUNC_0(&VAR_49);
}
