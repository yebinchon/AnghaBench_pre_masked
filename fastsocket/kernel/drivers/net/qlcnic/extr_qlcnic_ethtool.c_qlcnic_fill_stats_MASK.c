
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qlcnic_mac_statistics {int mac_align_error; int mac_rx_crc_error; int mac_rx_dropped; int mac_rx_jabber; int mac_rx_length_large; int mac_rx_length_small; int mac_rx_length_error; int mac_rx_gt_1518b_pkts; int mac_rx_lt_1518b_pkts; int mac_rx_lt_1023b_pkts; int mac_rx_lt_511b_pkts; int mac_rx_lt_255b_pkts; int mac_rx_lt_127b_pkts; int mac_rx_lt_64b_pkts; int mac_rx_ctrl_pkt; int mac_rx_pause_cnt; int mac_rx_bcast_pkts; int mac_rx_mcast_pkts; int mac_rx_bytes; int mac_rx_frames; int mac_tx_gt_1518b_pkts; int mac_tx_lt_1518b_pkts; int mac_tx_lt_1023b_pkts; int mac_tx_lt_511b_pkts; int mac_tx_lt_255b_pkts; int mac_tx_lt_127b_pkts; int mac_tx_lt_64b_pkts; int mac_tx_ctrl_pkt; int mac_tx_pause_cnt; int mac_tx_bcast_pkts; int mac_tx_mcast_pkts; int mac_tx_bytes; int mac_tx_frames; } ;
struct __qlcnic_esw_statistics {int numbytes; int local_frames; int errors; int dropped_frames; int broadcast_frames; int multicast_frames; int unicast_frames; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static u64 *FUNC_1(u64 *VAR_2, void *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_1) {
  struct qlcnic_mac_statistics *VAR_5 =
     (struct qlcnic_mac_statistics *)VAR_3;
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_frames);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_bytes);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_mcast_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_bcast_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_pause_cnt);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_ctrl_pkt);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_lt_64b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_lt_127b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_lt_255b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_lt_511b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_lt_1023b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_lt_1518b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_tx_gt_1518b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_frames);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_bytes);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_mcast_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_bcast_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_pause_cnt);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_ctrl_pkt);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_lt_64b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_lt_127b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_lt_255b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_lt_511b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_lt_1023b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_lt_1518b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_gt_1518b_pkts);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_length_error);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_length_small);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_length_large);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_jabber);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_dropped);
  *VAR_2++ = FUNC_0(VAR_5->mac_rx_crc_error);
  *VAR_2++ = FUNC_0(VAR_5->mac_align_error);
 } else if (VAR_4 == VAR_0) {
  struct __qlcnic_esw_statistics *VAR_6 =
    (struct __qlcnic_esw_statistics *)VAR_3;
  *VAR_2++ = FUNC_0(VAR_6->unicast_frames);
  *VAR_2++ = FUNC_0(VAR_6->multicast_frames);
  *VAR_2++ = FUNC_0(VAR_6->broadcast_frames);
  *VAR_2++ = FUNC_0(VAR_6->dropped_frames);
  *VAR_2++ = FUNC_0(VAR_6->errors);
  *VAR_2++ = FUNC_0(VAR_6->local_frames);
  *VAR_2++ = FUNC_0(VAR_6->numbytes);
 }
 return VAR_2;
}
